#include <stdio.h>

void inverteString(char *string){
    if (*string == '\0' || *string == '\n'){
        return;
    }
    inverteString(string + 1);

    printf("%c",*string);

}

int main(){

    char input[100];

    fgets(input,100,stdin);

    inverteString(input);

    return 0;
}