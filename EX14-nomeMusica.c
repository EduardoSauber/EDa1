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
    tipoMusica musica[100];
}tipoBanda;

void pesquisarNomeMusica(char pesquisa[80],tipoBanda bandas[50],int n){
    // pesquisa é o nome da musica a ser buscada
    // bandas é a lista de bandas no sistema, onde cada uma tem uma lista de musicas
    // n a quantidade de bandas cadastradas

    for(int index_banda = 0; index_banda <= n; index_banda++){
        for(int index_musica = 0; index_musica <= sizeof(bandas[index_banda].musica); index_musica++){

        }
    }

    printf("%s : ano %d");
}
