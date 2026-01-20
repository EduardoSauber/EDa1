#include <stdio.h>

/*
NA HORA Q MANDAR ISSO PRO MOJ APAGA OS COMENTARIOS PQ ELE RETORNA COMPILATION ERROR DE FOR E WHILE KKKKKKKKKKKKKKKKKKKKKKKKKK
*/

/*
verificar se existe um par de caracteres separado por outro caracter.
Ex.: 
"axa" - 1 par de 'a'
"axax" - 1 par de 'a' e outro par de 'x'

a partir do primeiro index da string, olhar duas casas a frente, se não for '\0' ou '\n' é só verificar se é par
quando terminar esse adiciona +1 no index e olha mais 2 pra frente
*/

// função recursiva
int contarPares(char *string){
    // a função retorna a quantidade de pares de caracteres identificados na string

    // -- QUEBRAS DE RECURSÃO

    // se o index atual for o fim da string
    if (*string == '\0' || *string == '\n'){
        return 0;
    }
    // se o próximo index for o fim da string
    if (*(string+1) == '\0' || *(string+1) == '\n'){
        return 0;
    }

    // -- RECURSÃO

    int valor = 0;  // verificar se encontrou par

    if (*string == *(string+2)){    // atualiza o 'valor' se a variável 2 index à frente é igual 
        valor = 1;
    }
    
    // retorna o valor + as próximas recursões
    return valor + contarPares(string+1);
}

int main(){
    char Input[201];

    fgets(Input,201,stdin);

    printf("%d", contarPares(Input) );

    return 0;
}