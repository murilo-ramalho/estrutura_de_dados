#include <stdio.h>
#include <stdlib.h>

int main(){
    double salarioBruto, salarioLiquido, descontado, *pont = &salarioBruto;

    printf("Digite seu salario: ");
    scanf("%lf", &*pont);

    descontado = *pont * 0.05;
    salarioLiquido = *pont - descontado;

    printf("Salario liquido: %lf", salarioLiquido);

    return 0;
}
