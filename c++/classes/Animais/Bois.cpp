#include <iostream>
#include <string>
#include "Bois.hpp"

void Bois::emitir_som(){
    cout<<"muuuu"<<endl;
}

void Bois::movimentar(){
    peso= peso - (0.004*peso);

}

void Bois:: alimentar(){
    
}