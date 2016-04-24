#ifndef DECIFRA_HPP
#define DECIFRA_HPP

#include <iostream>
#include <string>

using namespace std;

 class Decifra{
 protected:
   int row = 0, col = 0, height, width, col_pixel, start;
   char pixel;
   string line = "";
   

 public:
   void openImage(string nomeDaImagem);
   void extractInformation();
   void decode();
   void saveNewImage(string nomeDaImagem);

 }
