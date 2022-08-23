#include <iostream>
#include <string>
#include "Patos.hpp"

void Patos :: emitir_som(){
    cout<<"quá quá"<<endl;
}

void Patos::movimentar(){
    peso= peso - (0.002*peso);

}