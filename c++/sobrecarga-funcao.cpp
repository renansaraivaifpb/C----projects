//Anotação:
// Sobrecargas de funções é uma prática usada para declarar diferentes funções com o mesmo nome, entretanto, seus parâmetros devem ser distintos. 
// Caso contrário, terá problemas em sua compilação.

// bibliotecas
#include <iostream>
#include <stdio.h>

// abreviacao
using namespace std;

// declaracoes de escopo
void bemvindo();
void bemvindo(string nome);

int calcula();
int calcula(int n1, int n2);

// funcao principal do programa
int main(){
  
	// funcao void
	bemvindo();
	// sobrecarga void
	bemvindo("renan");
	
	// funcao int de retorno
	int calculo = calcula();
	cout << calculo << endl;
        // sobrecarga int
	calculo = calcula(5, 5);
	cout << calculo << endl;
  
	return 0;
}

// FUNCOES ADJACENTES
void bemvindo(){
	cout << "Bem vindo" << endl;
}
void bemvindo(string nome){
	cout << "Bem vindo, " << nome << endl;
}
int calcula(){
	int n1 = 5, n2 = 5;
	return n1+n2;
}
int calcula(int n1, int n2){
	return n1+n2;
}
