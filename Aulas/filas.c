#include <stdio.h>

/*
CODIGO MOSTRADO NA AULA DE FILAS


*/

int TAM = 5;

void criarFila(int fila[], int N, int *p, int *u){
    *u = 0;
    *p = 0;
}

int filaVazia(int p, int u){
    return (p == u);
}

int filaCheia(int u, int N){
    return (u == N);
}

int colocaNaFila(int fila[], int N, int *u, int y){
    if (filaCheia(*u,N)) return 0;

    fila[*u] = y;
    (*u)++;
    return 1;
}

int tiraDaFila(int fila[], int *p, int u, int *x){
    if (filaVazia(*p,u)) return 0;

    *x = fila[*p];
    (*p)++;
    return 1;
}

int main(void){
    int fila[TAM];
}