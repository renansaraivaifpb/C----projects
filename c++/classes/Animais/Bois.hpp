#ifndef _BOIS_HPP_
#define  _BOIS_HPP_
#include <iostream>
#include <string>
#include "Animais.hpp"

using namespace std;

class Bois: public Animais
{
private:
    
public:
    Bois(/* args */);
    ~Bois();

    void emitir_som();
    void movimentar();
    void alimentar();

};
#endif