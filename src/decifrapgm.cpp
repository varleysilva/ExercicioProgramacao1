#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "decifrapgm.hpp"

using namespace std;

DecifraPgm::DecifraPgm(){}

void DecifraPgm::openImage(string nomeDaImagem){
  file_name = nomeDaImagem;
  file.open(file_name.c_str(), fstream::in | fstream::binary);

  if(!file.is_open()){
      cerr << "Não foi possivel abrir arquivo" << endl;
  }

  getline(file, inputLine);
  cout << "Número mágico: " << inputLine << endl;
  getline(file, inputLine);
  cout << "Comentário: " << inputLine << endl;
  cout << "Insira aqui a posição de início da mensagem: " << endl;
  cin >> start;
  getline(file, inputLine);
  ss << inputLine;
  ss >> width >> height; //pega a altura e a largura
  cout << "Width: " << width << endl;
  cout << "Height: " << height << endl;
  getline(file, inputLine);
  cout << "Cores máximas: " << inputLine << endl;
}

void DecifraPgm::decode(){
  file.seekg(start+file.tellg(), file.beg);

  cout << file.tellg() << endl;

  fstream outfile;
  string outName;
  cout << "Insira aqui o nome do .txt de saída: " << endl;
  cin >> outName;
  outfile.open(outName, fstream::out);

  char byte;
  char caractere = 0;
  int bits=1;

  while(file.get(byte)){
      caractere <<= 1;
      caractere |= (byte & 0x01);
      if(bits == 8){
          //cout << caractere;
          outfile << caractere;
          bits = 0;
          caractere = 0;
          // if(!(caractere ^ '#')){
          //     break;
          // }
          if(caractere == (char)'#'){
              printf("HELO\n");
              break;
          }
      }
      bits++;
  }
  outfile.close();
  cout << endl;
}
