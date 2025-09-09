//Questão 14
#include <stdio.h>
int main(void){
    int opcao, idade, media_idade = 0, contador = 0;
    int quantidade_satis = 0, quantidade_indi = 0, quantidade_insatis = 0;
    do{
        printf("Informe a sua idade: ");
        scanf("%d", &idade);

        if(idade != 0){
            printf("\n1-Satisfatorio\n2-indiferente\n3-insatisfatorio");
            printf("\nEscolha uma opcao: ");
            scanf("%d", &opcao);
            switch(opcao){
                case 1:
                    quantidade_satis++;
                    media_idade += idade;
                    contador++;
                    break;
                    /*O contador é usado apenas nesse caso, pois ele vai fazer a média apenas
                    dos que responderam satisfatório.*/
                case 2:
                    quantidade_indi++;
                    break;
                case 3:
                    quantidade_insatis++;
                    break;
                default:
                    break;
            }
        }
    }while(idade!=0);
    printf("A media da idade dos clientes que responderam satisfatorio e de: %d", media_idade);
    printf("\nO numero de clientes que respondeu satisfatorio e de: %d", quantidade_satis);
    printf("\nO numero de clientes que responderam insatisfatorio e de: %d", quantidade_insatis);
    return 0;
}