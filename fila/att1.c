#include <stdio.h>
#include <stdlib.h>

struct No {
int num;
struct No *prox;
};
typedef struct No no;

int tam;

int menu();
veid opcao(no *FILA, int op);
void iniciar(no *FILA);
int vazia(no *FILA);
no *alocar();
void inserir(no *FILA);
no *retirar(no *FILA);
void exibir(no *FILA);
void liberar(no *FILA);

int main(){
    no *FILA = (no *) malloc(sizeof(no));
    if(!FILA){
        printf("Memoria esgotada!\n");
        exit(1);
    } else {
        iniciar(FILA);
        int opt;
        do {
            opt = menu();
            opcao(FILA,opt);
        } while(opt);
        free(FILA);
        return 0;
    }
}
int menu(){
    int opc;
    printf("Escolha a opcao\n");
    printf("0. sair do programa\n");
    printf("1. limpar memoria\n");
    printf("2. mostrar fila\n");
    printf("3. inserir na fila\n");
    printf("4. retirar da fila\n");
    printf("Opcao: ");
    scanf("%d",&opc);

    return opc;
}
void opcao(no *FILA, int op){
    no *tmp;
    switch(op){
        case 0:
            liberar(FILA);
            break;
        case 1:
            liberar(FILA);
            iniciar(FILA);
            break;
        case 2:
            exibir(FILA);
            break;
        case 3:
            inserir(FILA);
            break;
        case 4:
            tmp = retirar(FILA);
            if(tmp != null){
                printf("Item removido: %d\n\n", tmp->num);
                liberar(tmp);
            }
            break;
        default:
            printf("Comando invalido\n\n");
    }
}
void inicia(no *FILA){
    FILA->prox = null;
    tam=0;
}
int vazia(no *FILA){
    if(FILA->prox == null){
        return 1;
    } else {
        return 0;
    }
}
no *alcar(){
    no *novo = (no *) malloc(sizeof(no));
    if(!novo){

    }
}
