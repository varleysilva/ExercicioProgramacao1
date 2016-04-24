#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "decifrappm.hpp"

using namespace std;

int main(){
  string nomeDaImagem;
  double selecionaFormatoDaImagem;
  cout << "Digite 1 para desencriptar imagens .PPM" << endl;
  cout << "Digite 2 para desencriptar imagens .PGM" << endl;
  cin >> selecionaFormatoDaImagem;

  if(selecionaFormatoDaImagem == 1){

  DecifraPpm * decifraPPM;
  decifraPPM = new DecifraPpm();
  cout << "Digite o nome da imagem: " << endl;
  cin >> nomeDaImagem;
  decifraPPM->openImage(nomeDaImagem);
  decifraPPM->decode();
  }
  else if (selecionaFormatoDaImagem == 2){
    cout << "falta implementar" << endl;
  }
  else if (selecionaFormatoDaImagem != 1 && selecionaFormatoDaImagem != 2){
    cout << "Opção inválida! Tente novamente e selecione 1 ou 2." << endl;
  }
}
