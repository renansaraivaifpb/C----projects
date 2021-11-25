/**
Escreva um programa em linguagem C que leia a idade de uma pessoa, calcule e exiba o quanto será pago
no Plano de Saúde. O valor a ser pago é calculado com um valor fixo de R$ 150,00 mais um adicional a depender da faixa etária.
São usadas as seguintes regras para cálculo:L
a - crianças com menos de 10 anos pagam R$ 80,00 de adicional;
b - conveniados com idade entre 10 e 30 anos pagam R$ 60,00 de adicional;
c - conveniados com idade entre 40 e 60 anos pagam R$ 100,00 de adicional;
d - conveniados com mais de 60 anos pagam R$ 200,00 de adicional.
**/

#include <stdio.h>
main(){
    int idade, valor_idade;
    int valor_fixo = 150;
    printf("digite a sua idade: ");
    scanf("%d", &idade);
    if(idade <= 10){
        valor_idade = valor_fixo + 80;
        printf("seu plano de saude fica: %d", valor_idade); 
        /** 230 **/
    }else if(idade <= 30){
        valor_idade = valor_fixo + 60;
        printf("seu plano de saude fica: %d", valor_idade); 
        /** 210 **/
    }else if(idade >= 40 && idade <=60){
        valor_idade = valor_fixo + 100;
        printf("seu plano de saude fica: %d", valor_idade);
        /** 250 **/
    }else{
        valor_idade = valor_fixo + 200;
        printf("seu plano de saude fica: %d", valor_idade);
        /** 350 **/
    }
}
/**
else if(idade <= 30){
        valor_idade = valor_fixo + 60;
        printf("seu plano de saude fica: %d", valor_idade); 
        #210
    }else if(40 <= idade < 60){
        valor_idade = valor_fixo + 100;
        printf("seu plano de saude fica: %d", valor_idade);
        #250
    }else{
        valor_idade = valor_fixo + 200;
        printf("seu plano de saude fica: %d", valor_idade);
    }
**/ 
