#include <stdio.h>

int main(){

    int i = 1;

    printf("Bispo moveu 5 casas pra cima a direita!\n");

    while (i <= 5){

        printf("%d - Cima Direita\n", i);

        i++;

    }

    printf("\n");

    i = 1;
    
    printf("A Torre moveu 5 casas pra frente:\n");

    do{

        if (i <= 5) {

            printf("%d - Frente\n", i);

        }

        i++;

    } while (i <= 10);


    printf("\n");

    printf("A Rainha Moveu 8 casas pra Esquerda:\n");


    for (i = 0; i >= -8; i--){

        if (i < 0){

            printf("%d - Esquerda\n", i);

        }

    }

    printf("\n");


    return 0;

}