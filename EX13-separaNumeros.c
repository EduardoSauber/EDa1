#include <stdio.h>

typedef struct tipoData // estrutura para a data de nascimento
{
    int dia;
    int mes;
    int ano;
} tipoData; // o termo apos as chaves determina o nome do typedef

struct tipoPessoa // estrutura para o armazenamento de dados de uma pessoa
{
    char nome[80]; // armazenaa o nome com limite de 80 casas
    tipoData dtNascimento; // armazena a data de nascimento na estrutura anterior
};

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento){ // funcao que recebe e organiza os dados para a struct tipoPessoa
    struct tipoPessoa pessoa1; // criação da struct no momento que a fuuncao e chamada
    // pessoa1.nome = nome; (ignora isso aqui, coisa de python)

    // loop para copiar os dados armazenados na string do nome para o struct
    int i; 
    for(i = 0;nome[i] != '\0';i++){
        pessoa1.nome[i] = nome[i];
    }
    pessoa1.nome[i] = '\0'; // fecha a string

    pessoa1.dtNascimento.dia = (dt_nascimento%100);         // separacao do dia
    pessoa1.dtNascimento.mes = ((dt_nascimento/100)%100);   // separacao do mes
    pessoa1.dtNascimento.ano = (dt_nascimento/10000);       // separacao do ano

    return pessoa1; // retorna a struct formada
}


/*
int main(){
    char nome_teste[80];
    int data_teste;

    printf("DIGITE SEU NOME: \n");
    fgets(nome_teste,sizeof(nome_teste),stdin);

    printf("DIGITE SUA DATA NO FORMATO 'ANOMESDIA': \n");
    scanf("%d",&data_teste);

    struct tipoPessoa resultado;
    
    resultado = separaInfo(nome_teste,data_teste);

    printf("nome cadastrado: %s", resultado.nome);
    printf("nascimento cadastrado: %d %d %d", resultado.dtNascimento.dia, resultado.dtNascimento.mes, resultado.dtNascimento.ano);

    return 0;
}
*/