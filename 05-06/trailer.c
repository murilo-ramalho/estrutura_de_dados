#include <stdio.h>
#include<stdlib.h>

int main(void){
    int itens[5];
    int opcao = 0;
    int indice = 0;

    while(opcao<6){
        itens[indice] = menu();
        printf("entre com 6 para sair ou 0 para ficar \n");
        scanf("%d",&opcao);
    }
    printf("%d", menu());
    return 0;
}

int menu(){
    int op = 0;
    printf("\n-----------TRAILER DO LEO-----------\n");
    printf("| 1 = refri lata 350ml: R$ 6,00    |\n");
    printf("| 2 = salgado:          R$ 6,50    |\n");
    printf("| 3 = pão de queijo:    R$ 3,75    |\n");
    printf("| 4 = café:             R$ 2,00    |\n");
    printf("| 5 = Kitkat:           R$ 4,50    |\n");
    printf("------------------------------------\n");
    printf(" | docentes tem 50 porcento de desconto | \n");
    printf(" | escolha uma opcao: \n");
    scanf("%d",&op);
    return op;
}
