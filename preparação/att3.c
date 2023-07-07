#include<stdio.h>
#include<stdlib.h>

int main(void){
    int arrey[4];
    int aux;
    int c = 0;
    float verificador;
    while(c<5){
        printf("digite um valor: \n");
        scanf("%f",&verificador);
        aux=verificador;
        if(aux==verificador){
            printf("insira um valor valido");
        } else {
            arrey[c] = aux;
            c++;
        }
    }
    for(int c2 = 0; c2 < 10; c2++){
        for(int c3 = 0; c3 < 10; c3++){
            if(arrey[c2]<arrey[c3]){
                Aux = arrey[c2];
                arrey[c2] = arrey[c3];
                arrey[c3] = Aux;
            }
        }
    }
}
