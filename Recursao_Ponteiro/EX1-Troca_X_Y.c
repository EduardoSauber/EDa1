#include <stdio.h>

// função de recursão
void Trocar_X_por_Y(char *string){  // a função recebe uma string e traduz em forma de ponteiro (não vamos retornar nada para o main)
    // quebra de recursão se encontrar o fim da string
    if(*string == '\0'){
        printf("\n");
        return;
    }

    // verificar se o char atual da string é um 'x'
    if(*string == 'x'){
        *string = 'y';  // trocamos para 'y'
    }

    // imprimir o char atual
    printf("%c",*string);

    // chama a própria função no endereço da string + 1 (imagine como se fosse string[index_atual + 1])
    Trocar_X_por_Y(string + 1);
}

int main(){

    char input[81];
    scanf("%s", input);

    Trocar_X_por_Y(input);

    return 0;
}