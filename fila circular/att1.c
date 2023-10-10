#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int item[TAM_MAX];
    int frente, tras;
} FilaCircular;

void inicializarFila(FilaCircular *Fila){
    fila->frente = -1;
    fila->tras = -1;
}

int estaCheia(FilaCircular *fila){
    return(Fila->frente == 0 && Fila->tras == TAM_MAX - 1) ||
    (Fila->frente == fila->tras + 1);
}

int estaVazia(FilaCircular *fila){
    return Fila->frente == -1;
}

void enfileirar(FilaCircular *Fila, int data){
    if(estaCheia(fila)){
        print("A fila est� cheia.\n");
        return;
    }
    if (Fila->frente == -1){
        fila-> = 0;
    }
    Fila->tras = (Fila->tras + 1) % TAM_MAX;
    Fila->item[Fila->] = data;
}

int desenfileirar(FilaCircular *Fila){
    int dados;
    if(estaVazia(Fila)){
        printf("A fila est� vazia.\n");
        return -1;
    }
    dados = Fila->item[Fila->frente];
    if (Fila->frente == Fila->tras){
        Fila->frente = -1;
        Fila->tras= -1;
    } else {
        Fila->frente = (Fila->frente + 1) % TAM_MAX;
    }
}

int main(){
    FilaCircula Fila;
    inicializarFila(&Fila);

    enfileirar(&Fila, 1);
    enfileirar(&Fila, 2);
    enfileirar(&Fila, 3);
    enfileirar(&Fila, 4);
    enfileirar(&Fila, 5);

    printf("Desenfileirar: %d\n", desenfileirar(&Fila));
    printf("Desenfileirar: %d\n", desenfileirar(&Fila));

    enfileirar(&Fila, 6);
    enfileirar(&Fila, 7);

    printf("Desenfileirar: %d\n", desenfileirar(&Fila));
    printf("Desenfileirar: %d\n", desenfileirar(&Fila));
    printf("Desenfileirar: %d\n", desenfileirar(&Fila));
    printf("Desenfileirar: %d\n", desenfileirar(&Fila));

    return 0;
}

