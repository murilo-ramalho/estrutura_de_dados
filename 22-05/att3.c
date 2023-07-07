#include <stdio.h>
#include <stdlib.h>

int main(void){
    int V1[5];
    int V2[5];
    int Aux;

    for(int c = 0; c < 10; c++){
        printf("Entre com um numero inteiro: ");
        scanf("%d", &V1[c]);
    }

    for(int c2 = 0; c2 < 5; c2++){
        for(int c3 = 0; c3 < 5; c3++){
            if(V1[c2]<V1[c3]){
                Aux = V1[c2];
                V1[c2] = V1[c3];
                V1[c3] = Aux;
            }
        }
    }
    printf("\n");

    for(int c = 0; c < 5; c++){
        printf("Entre com um numero inteiro pela segunda vez: ");
        scanf("%d", &V2[c]);
    }

    for(int c2 = 0; c2 < 5; c2++){
        for(int c3 = 0; c3 < 5; c3++){
            if(V2[c2]>V2[c3]){
                Aux = V2[c2];
                V2[c2] = V2[c3];
                V2[c3] = Aux;
            }
        }
    }
    printf("\n");

    for(int c = 0; c < 5; c++){
        printf("numero em ordem : %d \n", V1[c]);
    }
    printf("\n");
    for(int c = 0; c < 5; c++){
        printf("numero em ordem : %d \n", V2[c]);
    }
    return 0;
}
