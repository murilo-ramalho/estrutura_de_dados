#include <stdio.h>
#include <stdlib.h>

int main(void){
    int VetorOrdenar[6], Aux;

    for(int c = 0; c < 6; c++){
        printf("Entre com um numero inteiro: ");
        scanf("%d", &VetorOrdenar[c]);
    }

    for(int c2 = 0; c2 < 6; c2++){
        for(int c3 = 0; c3 < 6; c3++){
            if(VetorOrdenar[c2]<VetorOrdenar[c3]){
                Aux = VetorOrdenar[c2];
                VetorOrdenar[c2] = VetorOrdenar[c3];
                VetorOrdenar[c3] = Aux;
            }
        }
    }

    for(int c = 0; c < 6; c++){
        printf("numero : %d \n", VetorOrdenar[c]);
    }
    return 0;
}
