#include <stdio.h>
#include <string.h>

// Estrutura tipoMusica
typedef struct tipoMusica{
    // string nome[80] que indica o nome da musica
    // int ano que indica o ano que foi lancado

    char nome[80];
    int ano;
}tipoMusica;

// estrutura tipoBanda
typedef struct tipoBanda{
    // string nome[80] que indica o nome da banda
    // int qtd que indica a quantidade de musicas da banda
    // tipoMusica musica[100] que indica a lista de musicas de uma banda

    char nome[80];
    int qtd;
    tipoMusica musicas[100];
}tipoBanda;

void pesquisarNomeMusica(char pesquisa[80],tipoBanda bandas[50],int n){
    // pesquisa é o nome da musica a ser buscada
    // bandas é a lista de bandas no sistema, onde cada uma tem uma lista de musicas
    // n a quantidade de bandas cadastradas

    // verificar se a musica foi encontrada no sistema
    int res_pesquisa = 0;

    // loop entre as bandas cadastradas
    for(int index_bandas = 0; index_bandas < n; index_bandas++){

        // loop entre as musicas cadastradas na banda
        for(int index_musicas = 0; index_musicas < bandas[index_bandas].qtd; index_musicas++){

            // comparar se o nome pesquisado existe na banda
            int resultado = strcmp(bandas[index_bandas].musicas[index_musicas].nome,pesquisa);
            if(resultado == 0){
                // se o strcmp retorna 0 (as strings são iguais), imprimir o nome da banda e o ano
                printf("%s : ano %d\n", bandas[index_bandas].nome,bandas[index_bandas].musicas[index_musicas].ano);
                res_pesquisa = 1;   // avisar à função que foi encontrado um resultado
            }
        }
    }

    // verificar se a pesquisa teve algum resultado
    if(res_pesquisa == 0){
        // se não for encontrado nenhuma musica
        printf("Musica nao encontrada\n");
    }
}

/*
int  main(){
    tipoBanda debugBandas[50];
    strcpy(debugBandas[0].nome,"DECO*27");
    debugBandas[0].qtd = 2;
    strcpy(debugBandas[0].musicas[0].nome, "TELEPATHY");
    debugBandas[0].musicas[0].ano = 2025;
    strcpy(debugBandas[0].musicas[1].nome, "RABBIT HOLE");
    debugBandas[0].musicas[1].ano = 2025;

    char input[80];
    while (scanf("%[^\n]",input) != EOF){
        pesquisarNomeMusica(input,debugBandas,1);
        getchar();
    }
    
    return 0;
}
*/