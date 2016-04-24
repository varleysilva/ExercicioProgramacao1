#ifndef DECIFRAPGM_HPP
#define DECIFRAPGM_HPP

#include <iostream>
#include <string>
#include "decifra.hpp"

using namespace std;

class DecifraPgm : public Decifra{
  //métodos
public:
  DecifraPgm();
  void decode();
  void openImage(string nomeDaImagem);


};
#endif
