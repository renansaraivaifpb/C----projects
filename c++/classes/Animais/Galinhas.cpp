#include <iostream>
#include <string>
#include "Galinhas.hpp"

void Galinhas :: emitir_som(){
    cout<<"cocó, cocorocó"<<endl;
}

void Galinhas::movimentar(){
    peso= peso - (0.001*peso);

}