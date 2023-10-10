#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[4][4], *pont;

    for(int i = 0; i<4;i++){
        for(int j = 0; j <4; j++){
            printf("Digite: ");
            scanf("%d", &matriz[i][j]);
            pont = &matriz[i][j];
            if (i == 0 && j == 0){
                printf("\n local: %d \n", pont);
            } else if (i == 1 && j == 1){
                printf("\n local: %d \n", pont);
            } else if (i == 2 && j == 2){
                printf("\n local: %d \n", pont);
            } else if (i == 3 && j == 3){
                printf("\n local: %d \n", pont);
            }
        }
    }

    return 0;
}
