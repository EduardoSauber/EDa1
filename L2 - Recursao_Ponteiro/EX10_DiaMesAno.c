#include <stdio.h>

/*
    -- FUNÇÕES VOID --

elas só podem receber ponteiros, e não podem retornar nenhum valor
*/

// verificar se o ano é bissexto ou não
void verificaBissexto(int *ano, int *ehBissexto){
    *ehBissexto = 0;

    if (*ano%400 == 0){
        *ehBissexto = 1;
    } else if(*ano%4 == 0 && *ano%100 != 0){
        *ehBissexto = 1;
    }

}

// calcular o dia e o mes
void calculaDiaMes(int *dias, int *diaReal, int *mesReal, int *ehBissexto){
    if (*dias == 0){
        return;
    }

    (*diaReal)++;
    (*dias)--;


    // ATE 28
    if (*diaReal > 28){
        if (*mesReal == 2 && *ehBissexto == 0){
            (*mesReal)++;
            *diaReal = 1;
        }
    }

    // ATE 29
    if (*diaReal > 29){
        if (*mesReal == 2 && *ehBissexto == 1){
            (*mesReal)++;
            *diaReal = 1;
        }
    }

    // ATE 30
    if (*diaReal > 30){
        if (*mesReal == 4 || *mesReal == 6 || *mesReal == 9 || *mesReal == 11){
            (*mesReal)++;
            *diaReal = 1;
        }
    }

    // ATE 31
    if (*diaReal > 31){
        (*mesReal)++;
        *diaReal = 1;
    }

    // RECURSAO

    calculaDiaMes(dias,diaReal,mesReal,ehBissexto);
}


void validarDia(int *valido, int *dias, int *ehBissexto){
    if (*ehBissexto == 1){
        if (*dias > 366){
            *valido = 0;
        }
    } else{
        if (*dias > 365){
            *valido = 0;
        }
    }
}

void imprimirResultado(int *diaReal, int *mesReal, int *ano){
    if (*diaReal < 10){
        printf("0%d",*diaReal);
    } else{
        printf("%d",*diaReal);
    }
    printf("/");

    if (*mesReal < 10){
        printf("0%d",*mesReal);
    } else{
        printf("%d",*mesReal);
    }
    printf("/");

    //printf("%d", *ano);

     if (*ano < 1000){
        printf("0%d",*ano);
    } else{
        printf("%d",*ano);
    }
}

void Saida(int *valido, int *dias, int *diaReal, int *mesReal, int *ano, int *ehBissexto){
    if (*valido == 1){
        calculaDiaMes(dias,diaReal,mesReal,ehBissexto);

        imprimirResultado(diaReal,mesReal,ano);
    } else{
        printf("Entradas invalidas!");
    }
}

/* 
    -- FUNÇÃO MAIN --

ela não fazer nenhum dos calculos necessários, apenas chamar os subprogramas, fazer leitura e imprimir a saida

ENTRADA: 148 2019
SAIDA: 28/05/2019
*/

int main(){
    // indicar se o ano é bissexto (1) ou não (0)
    int ehBissexto = 0;

    // indicar se a data é valida
    int valido = 1;

    // contador 
    int diaReal = 0;
    int mesReal = 1;

    // -- variáveis de input
    int dias = 0;
    int ano = 0;

    scanf("%d %d", &dias, &ano);

    // -- logica do sistema
    verificaBissexto(&ano, &ehBissexto);

    validarDia(&valido,&dias,&ehBissexto);
    
    Saida(&valido, &dias, &diaReal, &mesReal, &ano, &ehBissexto);
    
    return 0;
}