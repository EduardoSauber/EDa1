#include <stdio.h>

// armazenamento para as sequencias já calculadas
long int cache[80];

// função de recursão
long int fibonacci(int n){
    // se por um acaso o sistema envie um 0
    if (n == 0){
        return 0;
    }

    // se o n for 1 ou 2
    if (n == 1 || n == 2){
        return 1;   // retornar 1 pela regra da sequencia
    }

    // verificar se o n já foi calculado
    if (cache[n] != 0){
        return cache[n];
    }

    // calcular o valor da sequencia e salvar no cache
    cache[n] = (fibonacci(n-1) + fibonacci(n-2));

    // retornar o valor da sequencia após a recursão
    return cache[n];
}

/*
int main(){
    int input;
    scanf("%d", &input);
    printf("%ld", fibonacci(input) );

    return 0;
}
*/