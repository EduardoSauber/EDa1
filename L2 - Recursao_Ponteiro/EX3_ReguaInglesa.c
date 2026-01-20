#include <stdio.h>

// recursão para imprimir a quantidade de traços
void imprimirTraco(int n){

    // quebra de recursão
    if (n == 0){
        return;
    }

    // imprime um traço
    printf("-");

    // chama a função com n-1
    imprimirTraco(n-1);
}

// recursão principal da regua
void imprimirRegua(int n){

    // quebra de recursão
    if (n == 0){
        return;
    }

    // imprime uma recursão de traços de máximo n-1
    imprimirRegua(n-1);
    
    // imprime a recursão de traços com o valor n (total)
    printf(".");
    imprimirTraco(n);
    printf("\n");

    // imprime uma recursão de traços de máximo n-1 de novo
    imprimirRegua(n-1);
}

int main(){

    int n = 0;
    scanf("%d",&n);

    imprimirRegua(n);

    return 0;

}