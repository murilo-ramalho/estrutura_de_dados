#include <stdio.h>
#include <stdlib.h>

int main(void){
    int emoji[10][10];
    emoji[0][0] = 1;
    emoji[0][1] = 1;
    emoji[0][2] = 0;
    emoji[0][3] = 1;
    emoji[0][4] = 1;
    emoji[0][5] = 1;
    emoji[0][6] = 1;
    emoji[0][7] = 0;
    emoji[0][8] = 1;
    emoji[0][9] = 1;

    emoji[1][0] = 1;
    emoji[1][1] = 0;
    emoji[1][2] = 1;
    emoji[1][3] = 0;
    emoji[1][4] = 1;
    emoji[1][5] = 1;
    emoji[1][6] = 0;
    emoji[1][7] = 1;
    emoji[1][8] = 0;
    emoji[1][9] = 1;

    emoji[2][0] = 1;
    emoji[2][1] = 1;
    emoji[2][2] = 0;
    emoji[2][3] = 1;
    emoji[2][4] = 1;
    emoji[2][5] = 1;
    emoji[2][6] = 1;
    emoji[2][7] = 0;
    emoji[2][8] = 1;
    emoji[2][9] = 1;

    emoji[3][0] = 1;
    emoji[3][1] = 1;
    emoji[3][2] = 1;
    emoji[3][3] = 1;
    emoji[3][4] = 1;
    emoji[3][5] = 1;
    emoji[3][6] = 1;
    emoji[3][7] = 1;
    emoji[3][8] = 1;
    emoji[3][9] = 1;

    emoji[4][0] = 1;
    emoji[4][1] = 1;
    emoji[4][2] = 1;
    emoji[4][3] = 1;
    emoji[4][4] = 1;
    emoji[4][5] = 1;
    emoji[4][6] = 1;
    emoji[4][7] = 1;
    emoji[4][8] = 1;
    emoji[4][9] = 1;

    emoji[5][0] = 1;
    emoji[5][1] = 0;
    emoji[5][2] = 1;
    emoji[5][3] = 1;
    emoji[5][4] = 1;
    emoji[5][5] = 1;
    emoji[5][6] = 1;
    emoji[5][7] = 1;
    emoji[5][8] = 0;
    emoji[5][9] = 1;

    emoji[6][0] = 1;
    emoji[6][1] = 1;
    emoji[6][2] = 0;
    emoji[6][3] = 1;
    emoji[6][4] = 1;
    emoji[6][5] = 1;
    emoji[6][6] = 1;
    emoji[6][7] = 0;
    emoji[6][8] = 1;
    emoji[6][9] = 1;

    emoji[7][0] = 1;
    emoji[7][1] = 1;
    emoji[7][2] = 1;
    emoji[7][3] = 0;
    emoji[7][4] = 1;
    emoji[7][5] = 1;
    emoji[7][6] = 0;
    emoji[7][7] = 1;
    emoji[7][8] = 1;
    emoji[7][9] = 1;

    emoji[8][0] = 1;
    emoji[8][1] = 1;
    emoji[8][2] = 1;
    emoji[8][3] = 1;
    emoji[8][4] = 0;
    emoji[8][5] = 0;
    emoji[8][6] = 1;
    emoji[8][7] = 1;
    emoji[8][8] = 1;
    emoji[8][9] = 1;

    emoji[9][0] = 1;
    emoji[9][1] = 1;
    emoji[9][2] = 1;
    emoji[9][3] = 1;
    emoji[9][4] = 1;
    emoji[9][5] = 1;
    emoji[9][6] = 1;
    emoji[9][7] = 1;
    emoji[9][8] = 1;
    emoji[9][9] = 1;

    for(int c = 0; c <10; c++){
        printf("\n%d%d%d%d%d%d%d%d%d%d", emoji[c][0],emoji[c][1],emoji[c][2],emoji[c][3],emoji[c][4],emoji[c][5],emoji[c][6],emoji[c][7],emoji[c][8],emoji[c][9]);
    }
    return 0;
}
