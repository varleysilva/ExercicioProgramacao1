#ifndef DECIFRA_HPP
#define DECIFRA_HPP

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

 class Decifra{
 protected:
   int row = 0, col = 0, height, width, col_pixel, start;
   string inputline = "";
   stringstream ss;

 public:
   void openImage(string nomeDaImagem);
   void checkIfFileIsOpen();
   //void extractInformation();
   void decode();
   void saveNewImage(string nomeDaImagem);

 }
