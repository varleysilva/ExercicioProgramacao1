#ifndef DECIFRAPPM_HPP
#define DECIFRAPPM_HPP

#include <iostream>


class decifraPpm{
  //atributos
private:
  int row, col, col_p;
  int width;
  int height;
  char pixel;

//métodos
public:
  decifraPpm();
  ~decifraPpm();
  void setWidth(int width);
  void setHeight(int height);
  void toLineCorrect();//pula para a linha onde está a imagem
  void loadImage();
  void readPixels();
  void applyFilter(int filtroSelecionado);
  void saveNewImage();


}
