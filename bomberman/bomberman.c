#include <stdio.h>
#include <stdlib.h>

int main(void){

// matriz
    int matriz[8][8];
    for(int c=0;c<8;c++){
        matriz[c][0] = 0;
        matriz[c][1] = 0;
        matriz[c][2] = 0;
        matriz[c][3] = 0;
        matriz[c][4] = 0;
        matriz[c][5] = 0;
        matriz[c][6] = 0;
        matriz[c][7] = 0;
    }

// matriz das bombas, para usar como comparação
    int Mbomba[8][8];
// local onde a bomba vai estar X/Y
    int bombaX;
    int bombaY;
// numero de bombas
    int Nbombas;

// mostra a matriz
    for(int c=0; c<8;c++){
        printf("\n%d%d%d%d%d%d%d%d", matriz[c][0],matriz[c][1],matriz[c][2],matriz[c][3],matriz[c][4],matriz[c][5],matriz[c][6],matriz[c][7]);
    }
    printf("\n");

// jogador 1 escolhe quantas bombas vai ter
    printf("quantas bombas vai colocar? limite de 2 a 5: \n");
    scanf("%d", &Nbombas);
// tratamento de limite
    if(Nbombas<2 || Nbombas>5){
        Nbombas = 5;
    }

// contador para o while
    int contador = 0;

    while(contador<Nbombas){
        contador++;
// jogador 1 escolhe o X da bomba
        printf("player 1 - entre com o numero da linha entre 0 e 8: \n");
        scanf("%d",&bombaX);
// jogador 1 escolhe o Y da bomba
        printf("player 1 - entre com o numero da coluna entre 0 e 8: \n");
        scanf("%d",&bombaY);
//tratamento de dados
        if(bombaX > 8 || bombaX < 0 || bombaY > 8 || bombaY < 0){
            printf("está opcao nao existe");
            break;
        }
// coloca a área da bomba em X, -1/+1 é as casas ao lado
        Mbomba[bombaX][bombaY] = 1;
        Mbomba[bombaX-1][bombaY] = 1;
        Mbomba[bombaX+1][bombaY] = 1;
// coloca a área da bomba em Y, -1/+1 é as casas em cima e embaixo
        Mbomba[bombaX][bombaY] = 1;
        Mbomba[bombaX][bombaY-1] = 1;
        Mbomba[bombaX][bombaY+1] = 1;
    }

// variaveis onde o jogador vai cair na matriz
    int player2[8][8];
    int localX;
    int localY;

// contador para o while
    int contador2 = 0;

// escolhe onde o player 2 vai cair
    while (contador2<=Nbombas){
// mostra a matriz a cada jogada
        for(int c=0; c<8;c++){
            printf("\n%d%d%d%d%d%d%d%d", matriz[c][0],matriz[c][1],matriz[c][2],matriz[c][3],matriz[c][4],matriz[c][5],matriz[c][6],matriz[c][7]);
        }
        printf("\n");
// player 2 entra com a localização X/Y, o objetivo é sobreviver de acordo com a quantidade de bombas (não entendi muito bem então fiz assim)
        printf("player 2 - escolha uma linha para cair entre 0 e 8: \n");
        scanf("%d",&localX);
        printf("player 2 - escolha uma linha para cair entre 0 e 8 \n");
        scanf("%d",&localY);

// verifica se o jogador 2 perdeu
        if (Mbomba[localX][localY] == 1){
            printf("PLAYER 1 VENCEU!\n");
            break;
        }
// verifica se o jogador 2 vençeu
        if(contador2==Nbombas){
            printf("PLAYER 2 VENCEU!\n");
            break;
        }
        contador2++;
    }

    return 0;
}
