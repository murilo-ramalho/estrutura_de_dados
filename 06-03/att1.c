#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1 = 0;
    int n2 = 0;
    int m = 0;

    printf("digite o primeiro numero : ");
    scanf("%d", &n1);
    printf("digite o segundo numero : ");
    scanf("%d", &n2);

    m = n1+n2;
    printf("resultado: %d", m);

    return 0;
}
