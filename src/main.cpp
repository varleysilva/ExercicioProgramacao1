#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "decifrappm.hpp"

using namespace std;

int main(){
  string nomeDaImagem;

  DecifraPpm * decifraPPM;
  decifraPPM = new DecifraPpm();
  cout << "Digite o nome da imagem: " << endl;
  cin >> nomeDaImagem;
  decifraPPM->openImage(nomeDaImagem);
  decifraPPM->decode();

}
