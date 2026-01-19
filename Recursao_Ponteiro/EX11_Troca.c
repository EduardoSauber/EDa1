#include <stdio.h>

void swap(int *a, int *b){
    int temp = *b;

    *b = *a;
    *a = temp;
}

/*
int main(){
    int teste_a = 5;
    int teste_b = 9;

    printf("a: %d\n b:%d", teste_a, teste_b);

    swap(&teste_a,&teste_b);

    printf("a: %d\n b:%d", teste_a, teste_b);

    return 0;
}
*/