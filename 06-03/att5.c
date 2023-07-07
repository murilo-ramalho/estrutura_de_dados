#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float n1, n2, n3, m;
     n1 = 0.0;
     n2 = 0.0;
     n3 = 0.0;
     m = 0.0;

    printf("digite a primeira nota: ");
    scanf("%f", &n1);
    printf("digite a segunda nota: ");
    scanf("%f", &n2);
        printf("digite a terceira nota: ");
    scanf("%f", &n3);

    m = (n1+n2+n3)/3;
    printf("a media das notas: %f", m);
    return 0;
}
