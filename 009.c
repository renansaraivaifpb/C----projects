/**
Escreva um programa em linguagem C que leia o nome e o salário de um colaborador e
exiba o seu nome seguindo de seu salário reajustado. Nessa empresa, o aumento não é realizado
a todos os colaboradores, mas apenas para alguns. São utilizadas as seguintes regras para o aumento:
a - quem ganha menos de R$ 2.000,00 terá um reajuste de 10% no salário;
b- quem ganha entre R$ 2.000,00 e R$ 8.000,00 e terá um reajuste de 5%;
c- quem ganha acima de R$ 8.000,00 não terá direito ao aumento.
**/

#include <stdio.h>
main(){
    int salario, salario_reajustado, reajuste;
    char nome_colaborador[10];
    printf("digite seu nome: ");
    scanf("%s", &nome_colaborador);
    printf("digite seu salario: ");
    scanf("%d", &salario);
    if(salario <= 2000){
        reajuste = (salario * 0.1);
        salario_reajustado = reajuste + salario;
        printf("%s, seu salário de: R$%d,00 sofreu um reajuste de %d, ficando: %d", nome_colaborador, salario, reajuste, salario_reajustado);
    }else if(salario <= 8000){
        reajuste = (salario * 0.05);
        salario_reajustado = reajuste + salario;
        printf("%s, seu salário de :R$%d,00 sofreu um reajuste de %d, ficando %d", nome_colaborador, salario, reajuste, salario_reajustado);
    }else{
        printf("%s, seu salário é de R$%d,00. Portanto, não terá um reajuste.", nome_colaborador, salario);
    }
}