#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "decifrappm.hpp"

using namespace std;

DecifraPpm::DecifraPpm(){}

void DecifraPpm::decode(){
  char pixel;
  unsigned char pixel_value[height][width][3];

  //fazer a leitura dos pixels
  for(row = 0; row < height; row++){ //leitura das linhas
      for(col = 0; col < width; col++){ //leitura das colunas
          for(col_pixel = 0; col_pixel < 3; col_pixel++){ //coluna dos pixels
              file.get(pixel);
            pixel_value[row][col][col_pixel] = (unsigned char)pixel;
          }
      }
  }
  file.close();

  double selecionaFiltro;
  cout << "Selecione o filtro que quer aplicar:" << endl;
  cout << "1 - Filtro VERMELHO" << endl;
  cout << "2 - Filtro VERDE" << endl;
  cout << "3 - Filtro AZUL" << endl;
  cout << "0 - CANCELAR" << endl;
  cin >> selecionaFiltro;
  if (selecionaFiltro == 1){
  //aplicando o filtro VERMELHO
  char filtro;
  for(row = 0; row < height; row++){
      for(col=0; col < width; col++){
          filtro = pixel_value[row][col][0]; //vermelho
          pixel_value[row][col][1] = filtro; //verde
          pixel_value[row][col][2] = filtro; //azul
      }
  }
} else if (selecionaFiltro == 2){
  //aplicando o filtro VERDE
  char filtro;
  for(row = 0; row < height; row++){
      for(col=0; col < width; col++){
          filtro = pixel_value[row][col][1];//verde
          pixel_value[row][col][0] = filtro; //vermelho
          pixel_value[row][col][2] = filtro; //azul
      }
  }
} else if (selecionaFiltro == 3){
  //aplicando o filtro azul
  char filtro;
  for(row = 0; row < height; row++){
      for(col=0; col < width; col++){
        filtro = pixel_value[row][col][2]; //azul
        pixel_value[row][col][0] = filtro; //vermelho
        pixel_value[row][col][1] = filtro; //verde
      }
  }
}else if (selecionaFiltro == 0) {
  exit(0);
}else if (selecionaFiltro != 1 && selecionaFiltro != 2 && selecionaFiltro != 3){
  cout << "Opção inválida!" << endl;
  exit(1);
}

  // fstream outFile;
  // string outName;

  cout << "Insira aqui o nome da imagem de saída (com extensão *.ppm): " << endl;
  cin >> outName;
  outFile.open(outName.c_str(), fstream::out | fstream::binary);
  outFile << "P6" << endl;
  outFile << "#OláMundo" << endl;
  outFile << width << " " << height << endl;
  outFile << 255 << endl;

  for(row = 0; row < height; row++){ //leitura das linhas
      for(col = 0; col < width; col++){ //leitura das colunas
          for(col_pixel = 0; col_pixel < 3; col_pixel++){ //coluna dos pixels
            outFile << pixel_value[row][col][col_pixel];
      }
    }
  }
}
