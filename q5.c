//Questão 05
#include <stdio.h>
int main(void){
    char frase[100];
    int numero;

    printf("Insira a sua frase: ");
    gets(frase);

    printf("Insira o numero de vezes que ela sera repetida: ");
    scanf("%d", &numero);

    for(int i=1; i<=numero; i++){
        printf("\n%s", frase);
    }
    return 0;
}