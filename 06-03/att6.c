#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int idade = 0;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("pode tirar CNH");
    } else {
        printf("nao pode tirar CNH");
    }
    return 0;
}
