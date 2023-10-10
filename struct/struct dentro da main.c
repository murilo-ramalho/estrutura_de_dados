#include <stdio.h>
#include <stdlib.h>

/*
    struct

    struct é um molde com campos definidos pelo dev.
    A estrutura permite que variaveis de diferentes tipos sejam definidos e,
    quando iniciar a struct terá a capacidade de armazenar diferentes valores,
    um para cada campo.
    Na linguagem C as Struct são utilizadas para agrupar os campos de um determinado dominio,
    facilitando todo o desenvolvimento de um programa pois o conjunto na orientação a objetos.
    Vale ressaltar que a Struct é como o "pai" do esquema de objeto utilizado na orientação a objetos.

    pode ter scruct em um struct, gets realiza a captação de conjunto de caracteres definidos na struct
*/

int main(){
    struct unkindle{;
        int id;
        float forca;
        float velocidade;
        float defesa_fisica;
        float defesa_magica;
    };
    struct unkindle jogador;

    jogador.id = 9;
    jogador.forca = 4.5;
    jogador.velocidade = 3.3;

    printf("\nForca do personagem: %f",jogador.forca);

    return 0;
}
