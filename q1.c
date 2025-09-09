//Questão 01
#include <stdio.h>
int main(void){
    int termos;
    printf("Insira o numero de termos para o calculo da serie: ");
    scanf("%d", &termos);

    float soma = 0;
    for(int i=1; i<=termos; i++){
        soma += 1.0/i; 
        /*É importante definir o 1 como 1.0 para o C 
        identificar como float a divisão*/
    }

    printf("%.2f", soma);
    return 0;
}