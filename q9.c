//Questão 09
#include <stdio.h>
int main(void){
    //Lembre de iniciar o fatorial como 1
    int numero, fatorial=1;
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero);
    for(int i=1; i<=numero; i++){
        fatorial *= i;
    }
    printf("O resultado do fatorial e de: %d", fatorial);
    return 0;
}