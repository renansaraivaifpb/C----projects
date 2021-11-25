/**
Escreva um programa em linguagem C que exiba a tabela no formato de um menu para que o usuário possa efutar a sua escolha.
Depois, leia o código de um item desejado pelo consumidor e a sua quantidade. Em seguida, calcule e exiba o valor a ser 
pago. O comando switch pode ser utilizado, assim como tabela a seguir.
**/

#include <stdio.h>
main(){
    int codigo, quantidade;
    float preco;
    printf("+--------+-----------------+------------+\n");
    printf("| Codigo |    produto      | preco (R$) |\n");
    printf("+--------+-----------------+------------+\n");
    printf("|   100  | cachorro-quente |   4,00     |\n");
    printf("+--------+-----------------+------------+\n");
    printf("|   101  | Bauru simples   |   5,00     |\n");
    printf("+--------+-----------------+------------+\n");
    printf("|   102  | Bauru com ovo   |   5,50     |\n");
    printf("+--------+-----------------+------------+\n");
    printf("|   103  | Hamburguer      |   5,00     |\n");
    printf("+--------+-----------------+-------- ---+\n");
    printf("|   104  | Cheeseburguer   |   5,50     |\n");
    printf("+--------+-----------------+------------+\n");
    printf("|   105  | Refrigerante    |   3,50     |\n");
    printf("+--------+-----------------+------------+\n \n");
    printf("Digite um código, da tabela, do seu pedido: ");
    scanf("%d", &codigo);
    printf("Agora, digite a quantidade que deseja do mesmo: ");
    scanf("%d", &quantidade);
    switch (codigo){
        case 100:
        preco = quantidade * 4;
        printf("Seu pedido e um: cachorro-quente com uma quantidade de: %d. Custo total: R$%.2f", quantidade, preco);
        break;
        case 101:
        preco = quantidade * 5;
        printf("Seu pedido e um: Bauru simples com uma quantidade de: %d. Custo total: R$%.2f", quantidade, preco);
        break;
        case 102:
        preco = quantidade * 5.5;
        printf("Seu pedido e um: Bauru com ovo com uma quantidade de: %d. Custo total: R$%.2f", quantidade, preco);
        break;
        case 103:
        preco = quantidade * 5;
        printf("Seu pedido e um: Hamburguer com uma quantidade de: %d. Custo total: R$%.2f", quantidade, preco);
        break;
        case 104:
        preco = quantidade * 5.5;
        printf("Seu pedido e um: Cheeseburguer com uma quantidade de: %d. Custo total: R$%.2f", quantidade, preco);
        break;
        case 105:
        preco = quantidade * 3.5;
        printf("Seu pedido e um: refrigerante com uma quantidade de: %d. Custo total: R$%.2f", quantidade, preco);
        break;
        default :
        printf ("Valor invalido!\n");
    }
    getch();
    return 0;
}