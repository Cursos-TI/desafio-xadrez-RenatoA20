#include <stdio.h>

int main(){

    int i2=1, i3=1; //elementos para incremento utilizados nos laços de repetição das peças: bispo e rainha.

    printf("Torre:\n"); //estrutura de repetição para imprimir movimentação da torre
    for(int i = 1; i<=5; i++){
        printf("Direita\n");
    }


    printf("\n==========================\n"); // separação para maior organização dos dados no terminal


    printf("Bispo:\n");
    while(i2<=5){ //estrutura de repetição para imprimir movimentação do bispo
        printf("Cima, Direita\n");
        i2++;
    }


    printf("\n==========================\n"); 


    printf("Rainha:\n"); //estrutura de repetição para imprimir movimentação da rainha
    do{
        printf("Esquerda\n");
        i3++;
    } while(i3<=8);
}