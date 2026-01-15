#include <stdio.h>

void retornarMinusculo(char *string){
    int i = 0;

    while (string[i] != '\0'){
        // descobri que o fgets deixa um '\n' no final do string
        if (string[i] == '\n'){
            string[i] = '\0';   // onde tiver um '\n' (no caso do exercicio o final do nome completo) vai ser trocado por '\0'
            break;
        }

        // verificar a string inteira, e onde tiver maiuscula trocar por minuscula
        if (string[i] >= 'A' && string[i] <= 'Z'){
            string[i] += 32;    // essa logica e interessante
        }
        i++;
    }
}

int main(){
    // variavel da string do nome completo
    char nome[101];
    fgets(nome,101,stdin);      // recebe o nome completo do usuario
    retornarMinusculo(nome);    // retorna a string com letras minuscula

    char p_nome[101];
    char u_sobrenome[101];

    //  buscar o primeiro nome e o numero de espacos (divisoria)
    int i = 0;
    int div = 0;
    while(nome[i] != '\0'){
        if (nome[i] == ' '){    // se a variavel for um espaco vazio ele atualiza o 'div'
            div = i;
        }
        if (div == 0){          // enquanto o 'div' for 0 ele copia o primeiro nome
            p_nome[i] = nome[i];
            p_nome[i+1] = '\0'; // adiciona um '/0' na seguinte fileira
        }
        i++;
    }

    // buscar o ultimo sobrenome
    i = div+1;
    int j = 0;
    while(nome[i] != '\0'){
        u_sobrenome[j] = nome[i];   // so copia a string a partir do ultimo espaco vazil+1
        i++;
        j++;
    }
    u_sobrenome[j] = '\0';

    printf("%s.%s@unb.br",p_nome,u_sobrenome);
}