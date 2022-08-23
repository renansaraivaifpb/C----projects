#ifndef _GALINHAS_HPP_
#define  _GALINHAS_HPP_
#include <iostream>
#include <string>
#include "Animais.hpp"

using namespace std;

class Galinhas: public Animais
{
private:
    
public:
    Galinhas(/* args */);
    ~Galinhas();

    void emitir_som();
    void movimentar();
    void alimentar();

};

#endif