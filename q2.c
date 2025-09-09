//Questão 02
#include <stdio.h>
int main(void){
    int numero;
    printf("Insira o numero para a tabuada: ");
    scanf("%d", &numero);

    for(int i=1; i<=10; i++){
        printf("\n%02d x %d = %d", i, numero, numero*i);
    }
    return 0;
}