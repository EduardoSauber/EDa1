#include <stdio.h>

void swapmax3(int *a,int *b,int *c){
    int temp;

    if (*a < *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a < *c){
        temp = *a;
        *a = *c;
        *c = temp;
    }
    
    if (*b < *c){
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

/*
int main(){
    int teste_a = 26;
    int teste_b = 4;
    int teste_c = 8;

    printf("a: %d\nb: %d\nc: %d\n\n",teste_a,teste_b,teste_c);
    swapmax3(&teste_a,&teste_b,&teste_c);
    printf("a: %d\nb: %d\nc: %d\n",teste_a,teste_b,teste_c);
}
*/