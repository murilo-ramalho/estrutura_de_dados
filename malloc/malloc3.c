#include <stdio.h>
#include <stdlib.h>

int** alocarMatriz(int Linhas,int Colunas){
  int **m = (int**)malloc(Linhas * sizeof(int*));

  for (int i = 0; i < Linhas; i++){
       m[i] = (int*) malloc(Colunas * sizeof(int));
       for (int j = 0; j < Colunas; j++){
            m[i][j] = 0;
       }
  }
  return m;
}

void liberarMatriz(int ** mat){
    free(mat);
}

main(){
    int ** m = alocarMatriz(3,3);

    for (int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for (int i = 0 ; i < 3 ; i++){
        printf("\n");
        for(int j = 0 ; j < 3; j++){
            printf("[%d]", m[i][j]);
        }
    }
    liberarMatriz(m);
}
