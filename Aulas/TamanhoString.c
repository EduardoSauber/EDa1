#include <stdio.h>

int main(){
    char string[100];

    fgets(string,100,stdin);
    
    int tamanho = 0;

    for (int i = 0; i <= 100; i++){
        if (string[i] == '\0' || string[i] == '\n'){
            break;
        }

        tamanho++;
    }

    printf("%d", tamanho);

    return 0;
}