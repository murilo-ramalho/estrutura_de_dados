#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    int id;
    float notaA;
    float notaB;
};

float media(float *A, float *B){
    float a = *A;
    float b = *B;
    return (a+b)/2;
}

int main(){
    struct Aluno aluno;

    printf("\nDigite o id: ");
    scanf("%d", &aluno.id);

    printf("\nDigite a primeira nota: ");
    scanf("%f", &aluno.notaA);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &aluno.notaB);

    float resultado = media(aluno.notaA, aluno.notaB);
    printf("o aluno com o id %d, possui as notas %f e %f, com a media sendo %f", aluno.id, aluno.notaA,aluno.notaB,resultado);

    return 0;
}
