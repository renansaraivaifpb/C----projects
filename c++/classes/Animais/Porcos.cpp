#include <iostream>
#include <string>
#include "Porcos.hpp"

void Porcos :: emitir_som(){
    cout<<"oinc oinc, iiihhh"<<endl;
}

void Porcos::movimentar(){
    peso= peso - (0.003*peso);

}