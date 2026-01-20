#include <stdio.h>

void inverte(char *string){
    if (*string == '\n' || *string == '\0'){
        return;
    }
    inverte(string+1);
    printf("%c - %d\n",*string,*string);
}

int main(){
    char input[1001];
    scanf("%[^\n]",input);

    inverte(input);
    return 0;
}