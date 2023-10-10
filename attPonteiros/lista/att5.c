#include <stdio.h>
#include <stdlib.h>

int main(){
    int var, *pont = &var;

    printf("digite: ");
    scanf("%d",&*pont);

    if(*pont%2==0)printf(" par");
    else printf(" impar");

    return 0;
}
