#include <stdio.h>
#include <stdlib.h>

int main(){
    double altura, largura, area, pAltura = &altura, *pLargura = &largura;

    printf("digite a altura: ");
    scanf("%lf", &*pAltura);

    printf("digite a largura: ");
    scanf("%lf", &*pLargura);

    area = calcular(*pAltura, *pLargura);

    printf("area: %lf", area);

    return 0;
}

int calcular(double altura, double largura){
    double alt = altura, lar = largura;

    return lar * alt;
}
