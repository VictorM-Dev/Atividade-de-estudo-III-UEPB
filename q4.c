//Questão 04
#include <stdio.h>
int main(void){
    //Incluí o 0, pois considerei os inteiros na divisão
    for(int i=0; i<=30; i++){
        if(i%3==0 && i%7==0){
            printf("\n%d", i);
        }
    }
    return 0;
}