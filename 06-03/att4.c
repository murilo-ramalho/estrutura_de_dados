#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float salarioB = 0.0;
    float salarioL = 0.0;
    float acrescimo = 0.0;
    float percentual = 0.0;

    printf("coloque o salario bruto: ");
    scanf("%f", &salarioB);
    printf("digite o percentual de aumento: ");
    scanf("%f", &percentual);

    acrescimo = percentual*salarioB/100;
    salarioL = salarioB + acrescimo;
    printf("salario liquido: R$ %f", salarioL);
    return 0;
}
