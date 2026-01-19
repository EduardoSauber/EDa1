#include <stdio.h>

void mover_X(char *string){
    if ((*string) == '\0' || (*string) == '\n'){
        return;
    }
    if ((*string) != 'x'){
        printf("%c",*string);
        mover_X(string+1);
    } else{
        mover_X(string+1);
        printf("%c", *string);
    }
}

int main(){
    char input[105];
    fgets(input, 105, stdin);
    mover_X(input);
    printf("\n");
    return 0;
}