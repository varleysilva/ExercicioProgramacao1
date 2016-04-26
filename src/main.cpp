#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "decifrappm.hpp"
#include "decifrapgm.hpp"

using namespace std;

int main(){
  string nomeDaImagem;
  string outName;
  double selecionaFormatoDaImagem;
  cout << "Digite 1 para desencriptar imagens .PPM" << endl;
  cout << "Digite 2 para desencriptar imagens .PGM" << endl;
  cout << "Digite 0 para sair" << endl;
  cin >> selecionaFormatoDaImagem;

  //parte onde irá se dar a desencriptação das imagens PPM
  if(selecionaFormatoDaImagem == 1){

  DecifraPpm * decifraPPM;
  decifraPPM = new DecifraPpm();
  cout << "Digite o nome da imagem que deseja desencriptar (digite com a extensão *.ppm): " << endl;
  cin >> nomeDaImagem;
  decifraPPM->openImage(nomeDaImagem);
  decifraPPM->decode();
  decifraPPM->closeImage();
  }  //parte onde irá se dar a desencriptação das imagens PGM
  else if (selecionaFormatoDaImagem == 2){

  DecifraPgm * decifraPGM;
  decifraPGM = new DecifraPgm();
  cout << "Digite o nome da imagem que deseja desencriptar (digite com a extensão *.pgm): " << endl;
  cin >> nomeDaImagem;
  decifraPGM->openImage(nomeDaImagem);
  decifraPGM->decode();
  decifraPGM->closeImage();


  }
  else if (selecionaFormatoDaImagem == 0) {
    //cout << "Até mais!" << endl;
    exit(0);
  }
  else if (selecionaFormatoDaImagem != 1 && selecionaFormatoDaImagem != 2){
    cout << "Opção inválida! Tente novamente e selecione 1 ou 2." << endl;
  }
}
