#include <stdio.h>
#include<stdlib.h>

int main(void){
    somar();
    fala();
return 0;
}

void falar(){
    printf("ola");
    printf("\n ")
}
void somar(){
    float a, b;
    printf("primeiro numero: ");
    scanf("%f",&a);
    printf("segundo numero: ");
    scanf("%f",&b);
    float c = a+b;
    printf("resultado: ", c);
}
