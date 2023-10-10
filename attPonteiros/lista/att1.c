#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, *pont1 = &num1, *pont2 = &num2;

    printf("digite: ");
    scanf("%d", &*pont1);

    printf("digite 2: ");
    scanf("%d", &*pont2);

    printf("\n valor 1: %d, local: %d, valor 2: %d, local: ",*pont1,pont1,*pont2,pont2);

    return 0;
}
