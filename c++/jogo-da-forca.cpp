#include <iostream>
#include <stdio.h>
#include <string.h> // biblioteca da funcao strlen() retorna apenas o que foi inserido na pilha
#define tamanho 20

using namespace std;

int main(){
    char palavra[tamanho], palavra_completa[tamanho], letra[1], tentativas[tamanho];
    int decisao, chances = 6, acertos = 0, terminou = 1;
    bool acerto;
    cout << "BEM VINDO AO JOGO DA FORCA" << endl;
    cout << "Digite 1 - Começar jogo" << endl
         << "Digite 2 - ler instrucoes" << endl
         << "Digite 3 - Sair do jogo" << endl;
    cin >> decisao;
    switch(decisao){
        case 1:
            cout << "Que comece o jogo!" << endl;
            cout << "Jogador 1, por favor, escolhe uma palavra" << endl;
            cin >> palavra;
            cout << "\n\n";
            for(int i = 0; i < strlen(palavra); i++){
                palavra_completa[i] = '-';
            }
            while((chances > 0) && (acertos < strlen(palavra))){
                cout << "Chances " << chances <<endl;
                cout << "Adivinhe: " << endl;
                for(int i = 0; i < strlen(palavra); i++){
                    cout << palavra_completa[i];
                }
                cout << "\nDigite a palavra: " << endl;
                cin >> letra[0];
                for (int i = 0; i < strlen(palavra); i++){
                    if(palavra[i] == letra[0]){
                        acerto = true;
                        palavra_completa[i] = palavra[i];
                        acertos++;
                    }
                }
                if(!acerto){
                    chances--;
                }
                acerto == false;
                system("cls");
            }
            if(acertos == strlen(palavra)){
                cout << "Voce acertou tudo, parabens!";

            }else{
                cout << "Voce perdeu.";
            }
            break;
        case 2:
            cout << "Basicamente voce precisa encontrar a palavra a partir dos acertos " << endl 
                 << "Porem cuidado, voce tem um limite de erros (3)"
                 << "Caso voce complete todas as letras sem errar 3 vezes, voce vence, caso contrario, perde.";
            break;

        case 3:
        // sair do jogo
        system("pause");
        break;
        default:
            cout << "Por favor digita de 1 a 3";
    }   
    return 0;
}
