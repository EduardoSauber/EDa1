#include <stdio.h>

int contar_7s(long long int n){
    // verificar se o entregue digito é zero
    if (n == 0){
        return 0;
    }

    // o ultimo digito atual é o mesmo que o modulo de n por 10
    int digito = n % 10;

    // verificar se o ultimo digito é sete
    int ehSete = 0;
    if (digito == 7){
        ehSete += 1;
    }

    // retorna o valor de ehSete + a recursão
    return ehSete + contar_7s(n/10);
}

int main(){

    long long int input;
    scanf("%lld", &input);

    printf("%d\n", contar_7s(input) );

    return 0;
}