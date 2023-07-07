#include <stdio.h>
#include <stdlib.h>

int main() {
   int array2d[4][3];

   for(int linha = 0; linha <4; linha++){
    printf("entre com um valor para a linha %d coluna 0:", linha);
    scanf("%d",&array2d[linha][0]);
    printf("entre com um valor para a linha %d coluna 1:", linha);
    scanf("%d",&array2d[linha][1]);
    printf("entre com um valor para a linha %d coluna 2:", linha);
    scanf("%d",&array2d[linha][2]);
   }
   return 0;
}
