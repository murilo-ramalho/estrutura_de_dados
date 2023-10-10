#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Este é um programa de gerenciamento de vídeos.
    Ele permite adicionar, remover e listar vídeos, bem como ordená-los por duração.

    Camila
    Murilo Ramalho
*/

struct No {
    int duracao;
    char titulo[50];
    struct No* prox;
};

typedef struct No no;

int tam;

int menu(void);
no* opcao(no* FILA, int op);
void iniciar(no** FILA);
int vazia(no* FILA);
no* alocar();
void inserir(no** FILA);
no* retirar(no** FILA);
void exibir(no* FILA);
void liberar(no** FILA);
void inserirOrdenado(no** FILA, no* novo);
void filaParaVetor(no* FILA, no** vetor);
void ordenar(no** vetor);
void vetorParaFila(no** FILA, no** vetor);

int main(void) {
    no* FILA = NULL;

    int opt;
    do {
        opt = menu();
        FILA = opcao(FILA, opt);
    } while (opt != 0);

    liberar(&FILA);
    return 0;
}

int menu(void) {
    int opc;

    printf("Escolha a opcao \n");
    printf("0. Sair do programa\n");
    printf("1. Limpar os videos\n");
    printf("2. Mostrar videos\n");
    printf("3. Inserir video\n");
    printf("4. Retirar video\n");
    printf("Escolha : ");
    scanf("%d", &opc);

    return opc;
}

no* opcao(no* FILA, int op) {
    switch (op) {
    case 0:
        liberar(&FILA);
        return NULL;
    case 1:
        liberar(&FILA);
        iniciar(&FILA);
        return FILA;
    case 2:
        exibir(FILA);
        return FILA;
    case 3:
        inserir(&FILA);
        return FILA;
    case 4:
        retirar(&FILA);
        return FILA;
    default:
        printf("Comando invalido\n\n");
        return FILA;
    }
}

void iniciar(no** FILA) {
    *FILA = NULL;
    tam = 0;
}

int vazia(no* FILA) {
    return FILA == NULL;
}

no* alocar() {
    no* novo = (no*)malloc(sizeof(no));
    if (!novo) {
        printf("Sem memoria disponivel! \n");
        exit(1);
    } else {
        printf("Titulo do video: ");
        getchar();
        fgets(novo->titulo, 50, stdin);
        novo->titulo[strlen(novo->titulo) - 1] = '\0';
        printf("Duracao: ");
        scanf("%d", &novo->duracao);
        novo->prox = NULL;
        return novo;
    }
}

void inserir(no** FILA) {
    no* novo = alocar();

    if (*FILA == NULL) {
        *FILA = novo;
    } else {
        inserirOrdenado(FILA, novo);
    }
    tam++;
}

no* retirar(no** FILA) {
    if (*FILA == NULL) {
        printf("Videos indisponiveis!\n");
        return NULL;
    } else {
        no* tmp = *FILA;
        *FILA = tmp->prox;
        tam--;
        return tmp;
    }
}

void exibir(no* FILA) {
    if (vazia(FILA)) {
        printf("Videos indisponiveis!\n\n");
    } else {
        no* tmp = FILA;
        printf("\nVideos:\n");
        int count = 1;

