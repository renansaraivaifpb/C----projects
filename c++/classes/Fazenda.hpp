#ifndef _FAZENDA_HPP_
#define  _FAZENDA_HPP_
#include <iostream>
#include <string>
using namespace std;

class Fazenda
{
protected:
    string nome, cidade, estado;
    float dimensão; //em metros quadrados

public:
    Fazenda(/* args */);
    ~Fazenda();

    string getNome();
    void setNome(string &);

    string getCidade();
    void setCidade(string &);

    string getEstado();
    void setEstado(string &); 

    float getDimensao();
    void setDimensao(float); 
};



















#endif