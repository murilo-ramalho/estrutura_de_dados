#include <stdio.h>
#include <stdlib.h>

int main(void){
    int V[12], Aux;

    for(int c = 0; c < 12; c++){
        printf("Entre com um numero inteiro: ");
        scanf("%d", &V[c]);
    }

    for(int c2 = 0; c2 < 12; c2++){
        for(int c3 = 0; c3 < 12; c3++){
            if(V[c2]<V[c3]){
                Aux = V[c2];
                V[c2] = V[c3];
                V[c3] = Aux;
            }
        }
    }

    for(int c = 0; c < 12; c++){
        printf("numero : %d \n", V[c]);
    }
    return 0;
}
