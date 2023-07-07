#include<stdio.h>
#include<stdlib.h>

int main(void){
    int escolha, quantidade;
    float arrey[4][2];
    arrey[0][1]=85000.00;
    arrey[1][1]=54500.00;
    arrey[2][1]=1500.00;
    arrey[3][1]=2.00;

    printf("1 - Pistão da Entreprise_________________________Preco: RS 85.000,00\n");
    printf("2 - Gerador de Fusão Nuclear do Delorean_________Preco: RS 54.500,00\n");
    printf("3 - Biela do Batmóvel____________________________Preco: RS  1.500,00\n");
    printf("4 - Pneu para a Milleniun Falcon_________________Preco: RS      2,00\n");
    printf("5 - sair\n");

    int controlador = 1;
    while(controlador==1){
        printf("escolha o item\n");
        scanf("%d", &escolha);
        switch(escolha){
            case 1:
                printf("escolha a quantidade: \n");
                scanf("%d", &quantidade);
                arrey[0][0] = quantidade;
                break;
            case 2:
                printf("escolha a quantidade: \n");
                scanf("%d", &quantidade);
                arrey[1][0] = quantidade;
                break;
            case 3:
                printf("escolha a quantidade: \n");
                scanf("%d", &quantidade);
                arrey[2][0] = quantidade;
                break;
            case 4:
                printf("escolha a quantidade: \n");
                scanf("%d", &quantidade);
                arrey[3][0] = quantidade;
                break;
            default:
                controlador++;
                break;
        }
    }
    float total = (arrey[0][0]*arrey[0][1])+(arrey[1][0]*arrey[1][1])+(arrey[2][0]*arrey[2][1])+(arrey[3][0]*arrey[3][1]);

    printf("no total ficou %f" ,total);
    return 0;
}
