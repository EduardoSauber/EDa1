#include <stdio.h>

struct aluno {
    char nome[100];
    int matricula;
    float notas[3];
};

int main(){
    struct aluno aluno1;

    printf("Digite a matricula:\n");
    scanf("%d", &aluno1.matricula);
    getchar();
    printf("Digite o nome:\n");
    scanf("%[^\n]", aluno1.nome);

    printf("'%s' - %d",aluno1.nome,aluno1.matricula);

    return 0;
}
