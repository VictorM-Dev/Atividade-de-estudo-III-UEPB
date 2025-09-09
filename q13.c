//Questão 13
#include <stdio.h>
int main(void){
    //Mesma lógica usada na questão 12
    int idade, media_idade = 0, contador=0;
    float altura, media_altura = 0;
    do{
        printf("Informe a idade: ");
        scanf("%d", &idade);
        if(idade != 0){
            printf("Informe a altura: ");
            scanf("%f", &altura);

            media_idade += idade;
            media_altura += altura;
            contador++;
        } 
    }while(idade != 0);
    printf("A media das idades informadas e de: %d anos", media_idade/contador);
    printf("\nA media das alturas informadas e de %.2f metros", media_altura/contador);
    return 0;
}