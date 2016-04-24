#ifndef DECIFRAPPM_HPP
#define DECIFRAPPM_HPP

#include <iostream>
#include <string>

using namespace std;


class DecifraPpm{
  //atributos
private:
  int row, col, col_p;
  int width;
  int height;
  char pixel;

//métodos
public:
  DecifraPpm();
  ~DecifraPpm();
  void extractInformation();
  // void setWidth(int width);
  // int getWidth();
  // void setHeight(int height);
  // int getHeight();
  // void toLineCorrect();//pula para a linha onde está a imagem
  void loadImage();
  void readPixels();
  void applyFilter(int filtroSelecionado);
  void saveNewImage();

};
#endif
