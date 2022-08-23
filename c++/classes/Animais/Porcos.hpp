#ifndef _PORCOS_HPP_
#define  _PORCOS_HPP_
#include <iostream>
#include <string>
#include "Animais.hpp"

using namespace std;

class Porcos: public Animais
{
private:
    
public:
    Porcos(/* args */);
    ~Porcos();

    void emitir_som();
    void movimentar();
    void alimentar();

};



#endif