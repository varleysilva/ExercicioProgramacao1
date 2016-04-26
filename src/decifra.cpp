#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstdlib>
#include "decifra.hpp"

using namespace std;

//Decifra::Decifra(){}

void Decifra::openImage(string nomeDaImagem){
  file.open(nomeDaImagem, fstream::in | fstream::binary);

  if(!file.is_open()){
      cerr << "Não foi possivel abrir arquivo." << endl;
      exit(0);
  }

  getline(file, inputLine);
  cout << inputLine << endl;
  getline(file,inputLine);
  cout << inputLine << endl;
  getline(file, inputLine);
  ss << inputLine;
  ss >> width >> height; //pega a altura e a largura
  getline(file, inputLine);
  cout << inputLine << endl;
}
void Decifra::decode(){
  getline(file,inputLine);
  getline(file,inputLine);
  getline(file,inputLine);
  getline(file,inputLine);
  //será implementado nas classes filhas
}
void Decifra::closeImage(){
  cout << "Imagem decifrada com sucesso!" << endl;
  outFile.close();

}
