#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "decifrappm.hpp"

using namespace std;

DecifraPpm::DecifraPpm(){}

DecifraPpm::~DecifraPpm(){}


void DecifraPpm::extractInformation(){
  string inputLine = "";
  fstream file;
  stringstream ss;
  getline(file,inputLine);
  cout << inputLine << endl; //imprime o numero magico
  getline(file,inputLine);
  cout << inputLine << endl; //imprime o comentário
  getline(file,inputLine);
  ss << inputLine; //armazena a largura e a altura
  ss >> width >> height;
  getline(file,inputLine);
  cout << inputLine << endl; //imprime a quantidade de cores
}
