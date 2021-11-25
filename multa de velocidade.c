/**
Escreva um programa em linguagem C que leia a velocidade de um carro. Caso
ultrapasse 80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse
caso, exiba o valor da multa, cobrando R$2 por cada Km acima da velocidade
permitida.
**/
#include <stdio.h>
main(){
    int velocidade_carro, multa;
    printf("velocidade do veiculo em km/h: ");
    scanf("%d", &velocidade_carro);
    if(velocidade_carro > 80){
        multa = velocidade_carro * 2;
        printf("você foi multado em um valor de: R$%d,00", multa);
    }else{
        printf("baixou a velocidade, não foi malandro?!");
    }
}
