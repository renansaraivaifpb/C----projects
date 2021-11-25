/**
Escreva um programa em linguagem C que leia o valor de um veículo (número real) e sua classe.
O algorítmo deve calcular e exibir o IPVA conforme a tabela de aliquota. 
**/

#include <stdio.h>
main(){
    int valor_carro, classe_carro, ipva_carro;
    printf("Digite o valor do seu veiculo (numero real): ");
    scanf("%d", &valor_carro);
    printf("Digite a classe do mesmo (1 a 6): ");
    scanf("%d", &classe_carro);
    switch(classe_carro){
        /** -------------| classe: 1 |------------- **/
        case 1:
        ipva_carro = valor_carro*0.04;
        printf("IPVA de: %d", ipva_carro);
        break;
        /** -------------| classe: 2 |------------- **/
        case 2:
        ipva_carro = valor_carro*0.03;
        printf("IPVA de: %d", ipva_carro);
        break;
        /** -------------| classe: 3 |------------- **/
        case 3:
        ipva_carro = valor_carro*0.02;
        printf("IPVA de: %d", ipva_carro);
        break;
        /** -------------| classe: 4 |------------- **/
        case 4:
        ipva_carro = valor_carro*002;
        printf("IPVA de: %d", ipva_carro);
        break;
        /** -------------| classe: 5 |------------- **/
        case 5:
        ipva_carro = valor_carro*0.1;
        printf("IPVA de: %d", ipva_carro);
        break;
        /** -------------| classe: 6 |------------- **/
        case 6:
        ipva_carro = valor_carro*0.1;
        printf("IPVA de: %d", ipva_carro);
        break;
        default :
        printf("Digite a classe de 1 a 6.");
        break;
    }
}
