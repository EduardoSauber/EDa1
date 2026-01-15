#include <stdio.h>


int contagem = 0; // funcao de contagem de 'o's, minusculos ou maiusculos

void lerString(char *string){ // recursao de string 

    if (*string == '\n' || *string == '\0'){ // se for '\n' ou '\0' ele para
        return;
    } else if (*string == 'o'){ // se for um dos Os ele adiciona 1 para a contagem
        contagem++;
    }
    lerString(string+1); // recursao

}

int main(){
    //entrada(); // chama a funcao inicial de entrada de input

    char string[101]; // string de input

    while (fgets(string,101,stdin) != NULL){ // loop enquanto o fgets nao receber um NULL
        lerString(string); // chama a funcao lerString com o input
    }

    printf("%d",contagem); // imprime o valor da contagem apos o loop acabar
    return 0;
}