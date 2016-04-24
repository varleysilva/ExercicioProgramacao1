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
  //aplicando o filtro
  char filtro;
  for(row = 0; row < height; row++){
      for(col=0; col < width; col++){
          filtro = pixel_value[row][col][0]; //vermelho
          pixel_value[row][col][1] = filtro; //verde
          pixel_value[row][col][2] = filtro; //azul
      }
  }


  fstream outFile;
  string nomeDeSaida;
  cout << "Insira aqui o nome da imagem de saída: " << endl;
  cin >> nomeDeSaida;
  outFile.open(nomeDeSaida.c_str(), fstream::out | fstream::binary);
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
  cout << "Imagem decifrada com sucesso!" << endl;
  outFile.close();

}
