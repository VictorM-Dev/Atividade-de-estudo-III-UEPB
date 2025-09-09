//Questão 07
#include <stdio.h>
#include <string.h>

#define tamanho 30
struct pessoas{
    int idade;
    float peso;
    char estado[30];
};
typedef struct pessoas pessoas;
int main(void){
    pessoas pessoa[tamanho] = {0};
    int contador = 0, idade =0;
    do{
        //Como o sexo não é usado para nada na questão eu ignorei
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);
        if(idade != 0){
            pessoa[contador].idade = idade;

            printf("Digite o peso da pessoa: ");
            scanf("%f", &pessoa[contador].peso);

            printf("Digite o estado civil da pessoa: ");
            scanf("%s", pessoa[contador].estado);

            contador++;
        }
    }while(idade != 0);

    int quantidade_casadas = 0, quantidade_solteiras = 0, quantidade_viuvas = 0, quantidade_separadas = 0;
    float media_peso = 0;
    int media_idade = 0;
    for(int i=0; i<contador; i++){
        if(strcmp(pessoa[i].estado, "casada") == 0) quantidade_casadas ++;
        if(strcmp(pessoa[i].estado, "solteira") == 0) quantidade_solteiras ++;
        if(strcmp(pessoa[i].estado, "viuva") == 0) quantidade_viuvas ++;
        if(strcmp(pessoa[i].estado, "separada") == 0) quantidade_separadas ++;
        media_peso += pessoa[i].peso;
        media_idade += pessoa[i].idade;
    }

    media_peso /= contador;
    media_idade /= contador;

    printf("\nCasadas: %d\nSolteiras: %d\nViuvas: %d\nSeparada: %d", quantidade_casadas, quantidade_solteiras, quantidade_viuvas, quantidade_separadas);
    printf("\nA media de peso e: %.2f", media_peso);
    printf("\nA media de idade e: %d", media_idade);

    return 0;
}