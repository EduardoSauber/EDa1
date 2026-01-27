#include <stdio.h>

int fatorial(int valor){
    int resultado = 1;

    for (int i = valor; i>= 1; i--){
        resultado *= i;
    }
    return resultado;
}

int fatorial_recursivo(int valor){
    if (valor == 1 || valor == 0){
        return 1;
    }

    return valor * fatorial_recursivo(valor-1);
}

int main(){
    int inpt;
    
    scanf("%d", &inpt);
    int resultado = fatorial_recursivo(inpt);

    printf("%d! = %d", inpt, resultado);
}