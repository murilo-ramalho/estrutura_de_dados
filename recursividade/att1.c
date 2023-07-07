#include <stdio.h>
#include <stdlib.h>

int main(){

    funcaoA();
    return 0;
}

void funcaoA(){
    printf("ola mundo! essa é a função A\n");
    funcaoB();
}
void funcaoB(){
    printf("e essa é a função B\n");
    funcaoA;
}
