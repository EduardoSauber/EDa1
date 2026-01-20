#include <stdio.h>

int faz_conta_direito(int parcelas, char op){
    int resultado = 0;

    scanf("%d",&resultado);
    getchar();
    if(op == '+'){          // se a operação for soma
        for(int index = 1; index < parcelas; index++){
            int input;
            scanf("%d",&input);
            getchar();
            resultado += input;
        }
    } else if (op == '-'){  // se a operação for subtração
        for(int index = 1; index < parcelas; index++){
            int input;
            scanf("%d",&input);
            getchar();
            resultado -= input;
        }
    }
    
    // retorna o resultado da operação
    return resultado;
}

/*
int main(){
    int valor = faz_conta_direito(5,'-');
    printf("%d",valor);
}
*/