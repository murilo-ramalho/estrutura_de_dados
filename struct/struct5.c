#include <stdio.h>
#include <stdlib.h>

struct Cartao {
    int id;
    int proximoCard;
    float forca;
    float velocidade;
};
typedef struct Cartao card;

int main(){
    card card1;
    card card2;
    card card3;

    printf("\nentre com o id do primeiro card: ");
    scanf("%d", &card1.id);

    printf("\nentre com o id do segundo card: ");
    scanf("%d", &card2.id);

    printf("\nentre com o id do terceiro card: ");
    scanf("%d", &card3.id);

    card1.proximoCard = card2.id;
    card2.proximoCard = card3.id;
    card2.proximoCard = 0;

    card1.forca = 10.0;
    card1.velocidade = 15.0;

    card2.forca = 15.;
    card2.velocidade = 4.0;

    card3.forca = 16.0;
    card3.velocidade = 2.0;

    printf("\no card %d deve ser jogado logo apos o card %d", card1.proximoCard, card1.id);
    printf("\no card %d deve ser jogado logo apos o card %d", card2.proximoCard, card2.id);

    return 0;
}
