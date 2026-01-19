#include <stdio.h>

void swapmax3(int *a,int *b,int *c){
    int temp;

    if (*a < *b){

        if (*b < *c){
        temp = *a;
        *a = *c;
        *c = temp;
        } else{
        temp = *a;
        *a = *b;
        *b = temp;
        }
    }
    
    if (*b < *c){
        temp = *b;
        *b = *c;
        *c = temp;
    }
}


/*
int main(){
    int teste_a = 3;
    int teste_b = 6;
    int teste_c = 12;

    printf("a: %d\nb: %d\nc: %d\n",teste_a,teste_b,teste_c);
    swapmax3(&teste_a,&teste_b,&teste_c);
    printf("a: %d\nb: %d\nc: %d\n",teste_a,teste_b,teste_c);
}
*/