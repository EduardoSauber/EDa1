#include <stdio.h>
# include <string.h>

typedef struct tipoBanda{
    char nome[80];  // nome da banda
    int ano;        // ano que ela apresentou
}tipoBanda;

typedef struct tipoShow{
    char nome[80];          //nome do evento
    int qtd;                // quantidades de bandas que apresentam
    tipoBanda bandas[100];   // lista de bandas
}tipoShow;

void pesquisarNomeBanda(char pesquisa[80],tipoShow shows[50], int n){
    // a função recebe uma string pesquisa[80], um array de shows[50], e a quantidade de shows que foram cadastrados

    int resultado_pesquisa = 0; // variável responsável pela verificação se houve exito na pesquisa

    // primeiro loopar em cada evento cadastrado
    for(int index_show = 0; index_show < n; index_show++){

        // buscar em cada evento os possíveis shows cadastrados
        for(int index_banda = 0; index_banda < shows[index_show].qtd; index_banda++){

            int resultado = strcmp(shows[index_show].bandas[index_banda].nome, pesquisa);   // strcmp para agilizar a comparação entre as duas strings
            if(resultado == 0){                                                             // se retornar 0 (as strings são iguais)
                // printar o nome do evento e o ano que a banda apresentou
                printf("%s : ano %d\n", shows[index_show].nome, shows[index_show].bandas[index_banda].ano);
                resultado_pesquisa = 1; // avisar a função que a busca teve exito
            }

        }
    }

    // verificar se a busca teve exito
    if(resultado_pesquisa == 0){
        printf("Banda nao cadastrada\n");
    }
}