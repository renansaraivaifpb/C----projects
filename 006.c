/**
Escreva um programa em linguagem C que leia três números e imprima qual deles é o
maior.
**/
#include <stdio.h>
main(){
    int n1, n2, n3;
    printf("digite tres numeros: \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 > n2 && n1 > n3){
        printf("o numero %d, é o maior digitado", n1);
    }else if(n2 > n1 && n2 >3){
        printf("o numero %d, é o maior digitado", n2);
    }else{
        printf("o numero %d, é o maior digitado", n3);
    }
}