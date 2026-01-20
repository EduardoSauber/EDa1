#include <stdio.h>

void inverter_string(char *string){
    // quebra de recursão
    if (*string == '\0'){
        printf("\n");
        return;
    }

    // mesma coisa de string[index+1]
    // antes de imprimir o char, temos que inverter a string inserida
    inverter_string(string+1);
    
    // apos recorrer todas as casas da string, ele imprime do ultimo char até o primeiro
    printf("%c",*string);
}

int main(){

    char input[501];
    scanf("%s", input);

    inverter_string(input);

    return 0;
}