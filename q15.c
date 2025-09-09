//Questão 15
#include <stdio.h>
int main(void){
    int menor, maior, numero, media = 0, contador = 0;
    do{
        //Resolvi não fazer uma verificação para saber se era inteiro
        printf("Informe um numero inteiro: ");
        scanf("%d", &numero);
        if(numero != 0){
            /*Eu precisei guardar o valor da variável para iniciar o menor e o maior,
            e como isso deveria ser feito apenas na primeira vez que fosse digitado um número
            a condicional da lógica foi feita dessa forma.*/
             if(contador == 0){
                maior = numero;
                menor = numero;
                media = numero;
                contador++;
            } else{
                if(maior < numero) maior = numero;
                if(menor > numero) menor = numero;
                media += numero;
                contador++;
            }
        }
    }while(numero != 0);
    printf("O maior numero e: %d\nO menor numero e: %d\nA media dos numeros informados e: %d", maior, menor, media/contador);
    return 0;
}