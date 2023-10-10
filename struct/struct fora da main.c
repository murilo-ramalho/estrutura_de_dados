#include <stdio.h>
#include <stdlib.h>

typedef struct unkindle{;
    int id;
    float forca;
    float velocidade;
    float defesa_fisica;
    float defesa_magica;
};

int main(){
    struct unkindle jogador;

    printf("digite o id: ");
    scanf("%d",&jogador.id);

    printf("digite a forca: ");
    scanf("%f",&jogador.forca);

    printf("digite a velocidade: ");
    scanf("%f",&jogador.velocidade);

    printf("digite o defesa fisica: ");
    scanf("%f",&jogador.defesa_fisica);

    printf("digite o defesa magica: ");
    scanf("%f",&jogador.defesa_magica);

    printf("\nid do personagem: %d",jogador.id);
    printf("\nforca do personagem: %f",jogador.forca);
    printf("\nvelovidade do personagem: %f",jogador.velocidade);
    printf("\ndefesa fisica do personagem: %f",jogador.defesa_fisica);
    printf("\ndefesa magica do personagem: %f",jogador.defesa_magica);

    return 0;
}
