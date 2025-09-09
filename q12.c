//Questão 12
#include <stdio.h>
int main(void){
    //O contador será usado para cáculo da média
    int contador = 0, numero_de_filhos;
    float salario;
    int media_de_filhos = 0;
    float media_de_salario = 0;
    do{
        printf("Informa seu salario: ");
        scanf("%f", &salario);
        if(salario != -1.0){
            printf("Informa o numero de filhos que voce tem: ");
            scanf("%d", &numero_de_filhos);

            contador++;

            /*Fazendo a questão 7 com uma lógica similar a essa,
            é dispensado o uso de arrays e structs.
            Lembre que dessa forma, você PERDE a informação anterior a cada nova informação*/
            media_de_filhos += numero_de_filhos;
            media_de_salario += salario;
        }
    }while(salario != -1.0);

    printf("A media dos salarios informados e: %.2f", media_de_salario/contador);
    printf("\nA media do numero de filhos informados e: %d", media_de_filhos/contador);
    
    return 0;
}