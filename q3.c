//Questão 03
#include <stdio.h>
int main(void){
    int soma = 0;
    /*Também poderia definir i=201; i<=500; i+=2
    Dessa forma não seria necessário o if*/
    for(int i=200; i<=500; i++){
        if(i%2==1){
            soma += i;
        }
    }
    printf("A soma dos numeros impares entre 200 e 500 e: %d", soma);
    return 0;
}