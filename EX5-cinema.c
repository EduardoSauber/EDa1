#include <stdio.h>

void imprimirSala(int f, int l, char fileira[], int lugar[], int total){
    int i_lugar,i_fileira,i_ingresso;                                                                   // indexes para os loops
    char lista[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T'};   // nomenclaturas das fileiras até 20

    printf("  ");                                                                                       // espaço duplo para formar o desenho de uma tabela

    for (i_lugar = 1; i_lugar <= l; i_lugar++){ // imprime o numero dos luugares de 1 até o valor l
        if (i_lugar < 10){                      // imprime 0 antes do numero caso n<10
            printf("0%d ",i_lugar);
        } else{                                 // imprime o numero normalmente caso n>=10
            printf("%d ", i_lugar);
        }
    }
    printf("\n");   // quebra de linha para começar a tabela de fileiras
    
    for (i_fileira = f; i_fileira > 0; i_fileira--){    // loop que começa a partir da ultima fileira
        char fileiraAtual = lista[i_fileira-1];
        printf("%c ",fileiraAtual);                     // imprime a fileira atual antes dos lugares

        for (i_lugar = 1; i_lugar <= l; i_lugar++){     // loop para os lugares da fileira atual
            int ocupado = 0;                            // checar se o lugar está ocupado ou vazio

            for (i_ingresso = 0; i_ingresso < total; i_ingresso++){                         // loop que verifica o banco está ocupado
                if (fileira[i_ingresso] == fileiraAtual && lugar[i_ingresso] == i_lugar){   // verifica no array de fileiras e lugares
                    ocupado = 1;
                    break;
                }
            }

            if (ocupado == 1){  // imprime 'XX' naquele que estiver ocupado
                printf("XX ");
            } else{             // imprime '--' naquele que estiver vazio
                printf("-- ");
            }
        }
        printf("\n");   // quebra de linha para a proxima fileira
    }
}

int main(){
    int f;  // numero de fileiras
    int l;  // numero de lugares

    scanf("%d %d", &f, &l); // recebe o primeiro input com o numero de fileiras e lugares
    getchar();              // limpando buffer

    char fileira[501];      // array com limite de todas os bancos possiveis + 1
    int lugar[501];         // array com o limite de todos os bancos possiveis +1

    char string[100];       // variavel string que vai guardar o input do terminal
    int index = 0;          // variavel de index que vai salvar o numero total de ingressos contabilizados
    while (fgets(string,100,stdin) != NULL){                                    // loop de input até chegar ao EOF ou NULL
        sscanf(string,"%c%d",&fileira[index],&lugar[index]);                    // procura na string de input os valores da fileira e do lugar
        //printf("fileira: %c\nlugar: %d\n---\n",fileira[index],lugar[index]);
        index++;                                                                // soma mais 1 no index
    }

    imprimirSala(f,l,fileira,lugar, index); // chama a função de imprimir o mapa da sala com as variáveis coletadas

    return 0;
}