//Questão 07 sem arrays e sem struct
#include <stdio.h>
#include <string.h>
int main(void){
    //Também ignorei o sexo, pois não é usado na lógica da questão
    char estado_civil[30];
    int idade;
    float peso;

    //Variáveis de controle lógico
    //LEMBRE: como são variáveis de controle lógico, é importante que sejam iniciadas com 0
    int contador = 0, q_casadas = 0, q_solteiras = 0, q_separadas = 0, q_viuvas = 0, media_idade = 0;
    float media_peso = 0;
    do{
        printf("Informe a idade: ");
        scanf("%d", &idade);
        if(idade != 0){
            printf("Informe o peso: ");
            scanf("%f", &peso);
            printf("Informe o estado civil: ");
            scanf("%s", estado_civil);

            media_peso += peso;
            media_idade += idade;

            if(strcmp(estado_civil, "casada") == 0) q_casadas++;
            else if(strcmp(estado_civil, "solteira") == 0) q_solteiras++;
            else if(strcmp(estado_civil, "separada") == 0) q_separadas++;
            else if(strcmp(estado_civil, "viuva") == 0) q_viuvas++;

            contador++;
        }
    }while(idade != 0);
    printf("Casadas: %d\nSolteiras: %d\nSeparadas: %d\nViuvas: %d", q_casadas, q_solteiras, q_separadas, q_viuvas);
    //O contador é usado para calcular a média
    printf("\nMedia de idade: %d", media_idade/contador);
    printf("\nMedia de peso: %.2f", media_peso/contador);
    return 0;
}