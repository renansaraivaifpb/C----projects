#ifndef _ANIMAIS_HPP_
#define _ANIMAIS_HPP_
#include <iostream>
#include <string>
using namespace std;

class Animais
{
protected:
    int idade; //em meses ou em dias (dependendo do tipo de animal)
    string sexo;
    float peso; //em quilos 
    float ValorKg;
public:
    Animais();
    ~Animais();

//gets e sets
    int getIdade();
    void setIdade(int);

    string getSexo();
    void setSexo(string &);

    float getPeso();
    void setPeso(float);

    float getValorKg();
    void setValorKg(float);

    bool getMovimentar();
    void setMovimentar(bool);

    bool getEmitir_som();
    void setEmitir_som(bool);

    bool getAlimentar();
    void setAlimentar(bool);

//metodo que retorna o preço estimado de venda da carne do abate
float Preco_Estimado(float Peso, float ValorDoKg);

//método print que deve exibir o estado do Animal
void print();

virtual void movimentar();
virtual void emitir_som();
virtual void alimentar();





};


#endif