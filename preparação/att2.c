#include<stdio.h>
#include<stdlib.h>

int main(void){
    int arrey[7];
    int c = 0;
    float verificador;

    while(c<8){
        printf("_____________________________________________\n");
        printf("digite um numero inteiro pares: \n");
        scanf("%f",&verificador);
        if(verificador%2==0){
            arrey[c] = verificador;
            c++;
        } else {
            printf("por favor insira um valor dentro do pedido \n");
        }
    }
    printf("o vetor esta cheio!");
    return 0;
}
