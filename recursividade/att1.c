#include <stdio.h>
#include <stdlib.h>

int main(){

    funcaoA();
    return 0;
}

void funcaoA(){
    printf("ola mundo! essa � a fun��o A\n");
    funcaoB();
}
void funcaoB(){
    printf("e essa � a fun��o B\n");
    funcaoA;
}
