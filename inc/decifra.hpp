#ifndef DECIFRA_HPP
#define DECIFRA_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>


using namespace std;

class Decifra{
 protected:
   int row = 0, col = 0, height, width, bits, col_pixel, start;
   string inputLine = "";
   stringstream ss;
   fstream file, outFile;
   string nomeDaImagem, file_name, outName;
   //fstream outFile;
  //  string outName;
   unsigned char pixel_value;

 public:
   void openImage(string nomeDaImagem);
   void decode();
   void closeImage();

 };
 #endif
