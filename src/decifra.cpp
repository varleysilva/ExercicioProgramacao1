#include <iostream>
#include <string>
#include <fsstream>
#include <cstdlib>
#include <cstdlib>
#include "decifra.hpp"

using namespace std;

Decifra::Decifra(){}

void Decifra::openImage(string nomeDaImagem){
  fstream file;
  string inputLine = "";

  file.open(nomeDaImagem, fstream::in | fstream::binary);

  if(!file.is_open()){
      cerr << "Não foi possivel abrir arquivo" << endl;
  }

  getline(file,inputLine);
  cout << "Número mágico: "inputLine << endl;
  getline(file,inputLine);
  cout << "Comentário: "inputLine << endl;
  getline(file,inputLine);
  ss << inputLine;
  ss >> width >> height; //pega a altura e a largura
  getline(file,inputLine);
  cout <<"Cor máxima: " inputLine << endl;
}
void Decifra::decode(){
  //será implementado nas classes filhas
}
