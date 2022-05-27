/**
No presente arquivo é criado um laço do tipo for para populacionar um array com valores aleatórios de intervalo 0 a 50
Logo após a atribuição, é perguntado ao usuário se deseja trocar o número randomizado por qualquer outro número inteiro.
Esse processo será repetido até que o loop while seja quebrado, com o usuário digitando qualquer valor que seja diferente de 1.
**/

#include <iostream> // cout e cin
using namespace std;
#include <cstdlib> // RAND_MAX

int main(void){
    int decisao1 = 1, decisao2 = 0;
    while(decisao1 == 1){
        //colocamos um ponteiro no inicio da memória dinâmica
        int tamanho1 = 0, valor = 0; cout << "Digite um valor: ";cin >> tamanho1; int * vetor1 = new int[tamanho1];  
        for(int contador = 0; contador <= tamanho1; contador++){
            vetor1[contador] = 0+rand()%50;
            cout << vetor1[contador] << "\n";
            cout << "Digite '1' para trocar este valor: ";
            cin >> decisao2;
            if(decisao2 == 1){cout << "Qual valor deseja atribuir? ";cin >> valor;vetor1[contador] = valor;cout << "\n\nValor trocado com sucesso! \n\n";
            }else{cout << vetor1[contador] << "\n";}
      
        }
        cout << "\nSair: digite 0 \nContinuar: digite 1\n";cin >> decisao1;
    }
    return 0;
}
