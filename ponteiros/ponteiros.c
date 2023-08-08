#include <stdio.h>
#include <stdlib.h>

int main(){

    int vA;
    int *pA;

    printf("digite: ");
    scanf("%d", &vA);

    pA = &vA;

    printf("conteudo da variavel: %d \n",*pA);
    printf("local da variavel: %d \n", pA);
    pritnf("local do ponteiro: %d \n", &pA)

    return 0;
}
