//Questão 11
#include <stdio.h>
int main(void){
    int numero = 0;
    /*Eu não fiz a verificação para saber se é um número inteiro maior que 1
    pois o foco da questão está na lógica da repetição*/
    printf("Digite o numero para saber se ele e primo: ");
    scanf("%d", &numero);

    int contador = 0;
    for(int i=1; i<=numero; i++){
        if(numero%i==0){
            contador++;
        }
    }

    //O 1 é único número que o contador será 1 e é primo
    if(contador == 2 || numero == 1){
        printf("E primo");
    } else{
        printf("Nao e primo");
    }

    return 0;
}