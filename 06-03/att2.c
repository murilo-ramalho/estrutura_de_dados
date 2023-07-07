#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float base = 0.0;
    float altura = 0.0;
    float area = 0.0;

    printf("digite a base: ");
    scanf("%f", &base);

    printf("digite a altura: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("area: %f", area);

    return 0;
}
