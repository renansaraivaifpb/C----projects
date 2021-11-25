/**
Escreva um programa em linguagem C que leia a distância (em Km) que um passageiro
deseja percorrer. O algoritmo deve calcular e exibir o preço da passagem, cobrando
R$0.50 por Km para viagens até 200Km e R$0.45 para viagens mais longas.
**/
main(){
    int distancia_desejada, preco_passagem;
    printf("digite a distancia, em km, que deseja percorrer: ");
    scanf("%d", &distancia_desejada);
    if(distancia_desejada <= 200){
        preco_passagem = distancia_desejada * 0.5;
        printf("preço da sua viagem fica: R$%d,00", preco_passagem);
    }else{
        preco_passagem = distancia_desejada * 0.45;
        printf("preco de sua viagem fica: R$%d,00", preco_passagem);
    }
}
