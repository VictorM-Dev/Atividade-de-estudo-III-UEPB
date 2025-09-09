//Questão 08
#include <stdio.h>
#include <string.h>
int main(void){
    float area, resultado=0;
    //Como a verificação está no while, a variável deve ser definida fora dele
    char nome[30];
    do{
        printf("Digite o nome do comodo: ");
        scanf("%s", nome);
        if(strcmp(nome, "FIM") != 0){
            printf("Digite a area do comodo: ");
            scanf("%f", &area);
            resultado += area;
        }
    }while(strcmp(nome, "FIM") != 0);
    printf("A area total da sua casa e de: %.2f metros quadrados.", resultado);
    return 0;
}