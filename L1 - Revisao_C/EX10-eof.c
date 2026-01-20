#include <stdio.h>

void inputDados(){
    static int n;
    int i;

    int resultado = scanf("%d",&i);

    if (resultado == EOF){
        printf("%d",n);
        return;
    }
    if (resultado == 0){
        printf("%d",n);
        return;
    }
    n++;
    inputDados();
}

int main(){
    inputDados();
    return 0;
}