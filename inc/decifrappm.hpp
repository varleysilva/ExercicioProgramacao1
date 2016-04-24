#ifndef DECIFRAPPM_HPP
#define DECIFRAPPM_HPP

#include <iostream>
#include <string>
#include "decifra.hpp"

using namespace std;


class DecifraPpm : public Decifra{
//métodos
public:
DecifraPpm();
void decode(int filter);
};
#endif
