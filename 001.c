/**
Escreva um programa em linguagem C que leia o ano de nascimento de uma pessoa,
calcule a idade dela e depois mostre se ela pode, ou não, votar.
**/
#include <stdio.h>
#include <time.h>
maint(){
    int ano_atual, ano_nascimento, verificacao;
    time_t data;
    data = time(NULL);
    struct tm tm = *localtime(&data);    
    ano_atual = tm.tm_year + 1900;
    printf("digite sua idade: ");
    scanf("%d", &ano_nascimento);
    verificacao = ano_atual - ano_nascimento;
    printf("%d", verificacao);
    if(verificacao < 16){
        printf("sua idade é: %d. não vota.", verificacao);
    }else if(verificacao <= 18){
        printf("sua idade é: %d. Vota, porém, não obrigatório.", verificacao);
    }else{
        printf("sua idade é: %d. Voto obrigatório", verificacao);
    }
}