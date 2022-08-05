#include <stdio.h>
#include <iostream>

using namespace std;

void bemvindo();
int somatorio(int n1, int n2);
void imprimevetor(string elet[3]);

int main(){
	int decisao;
	cout << "O que deseja fazer no programa: ";
	cin >> decisao;
	cout << endl;
	switch(decisao){
		case 1:{
			// somatorio de nois numeros
			int numero1, numero2, soma;
			cout << "Digite dois numeros para saber seu somatorio: "
				<< endl << "Numero 1: "
				 ;
			cin >> numero1;
			cout << endl << "Numero 2: ";
			cin >> numero2;
			cout << endl;
			soma = somatorio(numero1, numero2);
			cout << numero1 << "+" << numero2 << "=" << soma;
			break;
		}
		case 2:{
			// dar boas vindas
			bemvindo();
			break;
		}
    	case 3:{
    		// imprimir array(vetor) - string
    		string eletronicos[3] = {"celular", "notebook", "fone"};
			imprimevetor(eletronicos);
    		break;
		}
    	default:
    		cout << "Error";
	}
    
    return 0;

}

// funcao de boas vindas
void bemvindo(){
    cout << "Bem vindo!";
}

// funcao que calcula a soma entre dois numeros
int somatorio(int n1, int n2){
	return n1 + n2;
}

// funcao de impressao de vetor
void imprimevetor(string elet[3]){
	for(int indice = 0; indice < 3; indice++){
		cout << elet[indice] << endl;
	}
}
