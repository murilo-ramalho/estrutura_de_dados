#include <stdio.h>
#include <stdlib.h>

int main(){
    struct ModelAluno {
        int id;
        float nota1;
        float nota2;
    };
    struct ModelAluno aluno;

    printf("\ndigite o id do aluno: ");
    scanf("%d",&aluno.id);

    printf("\ndigite a nota 1 do aluno: ");
    scanf("%f",&aluno.nota1);

    printf("\ndigite a nota 2 do aluno: ");
    scanf("%f",&aluno.nota2);

    float media = (aluno.nota1 + aluno.nota2)/2;

    printf("\nmedia do aluno %f",media);

    return 0;
}
