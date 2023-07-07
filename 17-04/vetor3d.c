#include <stdio.h>
#include <stdlib.h>

int main() {
   int vetor[3][3][3];
   int c1, c2, c3;

   for (c1 = 0; c1 < 3; c1++) {
      for (c2 = 0; c2 < 3; c2++) {
         for (c3 = 0; c3 < 3; c3++) {
            vetor[c1][c2][c3] = c1 * 9 + c2 * 3 + c3 + 1;
         }
      }
   }
   for (c1 = 0; c1 < 3; c1++) {
      for (c2 = 0; c2 < 3; c2++) {
         for (c3 = 0; c3 < 3; c3++) {
            printf("%d ", vetor[c1][c2][c3]);
         }
         printf("\n");
      }
      printf("\n");
   }

   return 0;
}
