#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float base = 0.0;
    float altura = 0.0;
    float pi = 3.1416;
    float raio = 0.0;
    float volume = 0.0;

    printf("digite a base: ");
    scanf("%f", &base);

    printf("digite a altura: ");
    scanf("%f", &altura);

    printf("digite o raio: ");
    scanf("%f", &raio);

    volume = base * altura; (raio * raio *pi);

    printf("volume: %f", volume);

    return 0;
}
