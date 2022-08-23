#include <iostream>
#include <string>
#include "Animais.hpp"

using namespace std;

float Animais::Preco_Estimado(float Peso, float ValorDoKg){
    return (Peso*ValorDoKg);
}

void Animais:: print(){
    cout<<"Peso: "<< peso << endl;
    cout<<"idade: "<< idade << endl;
    cout<<"Sexo: "<< sexo << endl;
    cout<<"Valor do Kilo: "<< ValorKg << endl;
    cout<<"Movimentação: "<< movimentar << endl;
    cout<<"Som emitido: "<< emitir_som << endl;
    cout<<"Se alimenta: "<< alimentar << endl;

}
