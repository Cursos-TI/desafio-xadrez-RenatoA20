#include <stdio.h>

//loop para movimento da torre
void movimentoTorre(int QuantTorre){ //movimentoTorre: função para movimento, QuantTorre: quantidade de casas a percorrer
    if(QuantTorre>0){
        printf("Direita \n");
        movimentoTorre(QuantTorre-1);
    }
}

void movimentoRainha(int QuantRainha){ //movimentoRainha: função para movimento, QuantRainha: quantidade de casas a percorrer
    if(QuantRainha>0){
        printf("Esquerda \n");
        movimentoRainha(QuantRainha-1);
    }
}

void movimentoBispo(){ 
    for(int i = 1; i<=5; i++){
        for(int j= 1; j<=5; j++){ //roda o comando j<=n vezes e finaliza com a casa a direita
            printf("Cima\n");
            break;
        }
        printf("Direita\n");
    }
}
int main()
{
    
    printf("Movimentação torre:\n");
    movimentoTorre(5);
    printf("----------------------\n");
    printf("Movimentação bispo:\n");
    movimentoBispo();
    printf("----------------------\n");
    printf("Movimentação rainha:\n");
    movimentoRainha(8);
    printf("----------------------\n");
   
   
    //movimentação cavalo:
    printf("Movimentação cavalo:\n");
    for(int movX = 1, movY = 2; movX > 0, movY>0; movX--, movY--){
        if(movX==1&& movY==2){ //roda na primeira execução, onde os valores são os mesmo dos atribuidos inicialmente
            printf("Cima\n");
        }   else if (movX == 0 && movY==1){ //comando rodado na segunda execução onde os atributos foram subtraidos
            printf("Cima\n");
            printf("Direita\n");
        }   else { // a partir da segunda execução a movimentação foi realizada e ambas condições do 'for' agora falsas movX > 0, movY>0
            continue;
        }
    }

}