#include <stdio.h>
#include <stdlib.h>

int main(void){
    int V[15], VP, VI;
    int c, i, p;

    for(c = 0; c < 15; c++){
        printf("Entre com um numero inteiro: ");
        scanf("%d", &V[c]);
    }

    for(c = 0; c < 15; c++){
        if((V[c]%2)==0){
            VP = V[c];
            p++;
        } else {
            VI = V[c];
            i++
        }
    }

    for(c = 0; c < p; c++){
        printf("Vetor par : %d \n", VP[c]);
    }
     for(c = 0; c < i; c++){
        printf("Vetor impar : %d \n", VI[c]);
    }
    return 0;
}
