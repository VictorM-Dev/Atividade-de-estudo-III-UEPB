//Questão 06
#include <stdio.h>
int main(void){
    int pedido, quantidade;
    float preco, soma = 0;
    char data[30];
    do{
        printf("Insira o numero do pedido: ");
        scanf("%d", &pedido);

        if(pedido != 0){
            printf("Insira a data do pedido: ");
            scanf("%s", data);

            printf("Insira o preco da unidade: ");
            scanf("%f", &preco);

            printf("Insira a quantidade do pedido: ");
            scanf("%d", &quantidade);
        }

        soma += preco*quantidade;

        //Há formas melhores de fazer a parada do while
    }while(pedido != 0);

    printf("\nO total do pedido e: %.2f", soma);
}