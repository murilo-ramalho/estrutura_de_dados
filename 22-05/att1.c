#include <stdio.h>
#include <stdlib.h>

int main(void){
    int V[10], Aux;

    for(int c = 0; c < 10; c++){
        printf("Entre com um numero inteiro: ");
        scanf("%d", &V[c]);
    }

    for(int c2 = 0; c2 < 10; c2++){
        for(int c3 = 0; c3 < 10; c3++){
            if(V[c2]<V[c3]){
                Aux = V[c2];
                V[c2] = V[c3];
                V[c3] = Aux;
            }
        }
    }

    for(int c = 0; c < 10; c++){
        printf("numero em ordem : %d \n", V[c]);
    }
    return 0;
}
