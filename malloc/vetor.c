#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[5];

    for(int i = 0; i < 5; i++){
        printf("digite:");
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i<5; i++){
        printf("\nnumero: %d",vet[i]);
    }

    return 0;
}
