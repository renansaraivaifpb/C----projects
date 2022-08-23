#ifndef _PATOS_HPP_
#define  _PATOS_HPP_
#include <iostream>
#include <string>
#include "Animais.hpp"

using namespace std;

class Patos: public Animais
{
private:
    
public:
    Patos(/* args */);
    ~Patos();

    void emitir_som();
    void movimentar();
    void alimentar();

};
#endif