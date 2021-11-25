/**
 Escreva um programa em linguagem C que leia os coeficientes a, b e c de uma equação
de segundo grau, calcule e exiba as suas raízes reais (caso existam). Caso não existam
raízes reais, o algoritmo deve exibir a mensagem: “A equação não possui raízes reais”.
O algoritmo deve verificar, também, se os coeficientes fazem parte de uma equação
de segundo grau e, se sim, exibir a mensagem: “Os coeficientes não fazem parte de
uma equação de segundo grau”
**/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main(){
    int a, b, c, delta, x1, x2, raiz_delta;
    printf("digite os coeficientes a, b e c, respectivamente: ");
    scanf("%d %d %d", &a, &b, &c);
    delta = (b*b) - 4*a*c;
    raiz_delta = sqrt(delta);
    if(delta > 0){
        x1 = (-b + raiz_delta) / 2*a;
        x2 = (-b - raiz_delta) / 2*a;
        printf("x1: %d e x2: %d", x1, x2);
    }else{
        printf("x1 e x2 não reais.");
    }
}
