#include <stdio.h>

int contar_vogais(char *string){
    // variavel que vai armazenar a quantidade de vogais contidas na string
    static int qtd = 0;

    // quebra de recursão quando chegar no final da string
    if (*string == '\0'){
        printf("\n");
        return 0;
    }

    // verificar se o char atual da string é uma vogal
    if (*string == 'A' || *string == 'E' || *string == 'I' || *string == 'O' || *string == 'U'){
        qtd += 1;  // somar mais um valor para a quantidade de vogais
    }

    // chamar a recursão para o próximo char do string
    // não tô afim de imprimir o valor antes de saber o total de vogais
    contar_vogais(string+1);

    // RETORNAR o valor de vogais
    // antes eu fiz com void pensando que ele não iria imprimir o qtd antes de verificar todas as casas da string (linha 19 ta de prova :P)
    return qtd;
}

int main(){

    char input[101];
    scanf("%s", input);

    printf("%d",contar_vogais(input));

    return 0;
}