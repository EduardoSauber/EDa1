#include <stdio.h>

int pa_recursiva(int *v, int primeiro, int ultimo){
    /*
    o vetor 'v' contem n elementos
    n par e maior ou igual a 4

    os valores 'primeiro' e 'ultimo' correspondem às posições do primeiro e ultimo elementos

    a função vai ser chamanda com 'primeiro = 0' e 'ultimo = n-1'

    ela deve retornar 1 se a sequencia é uma PA, e 0 caso contrário
    */

    // fazer uma verificação desde as extremidades até o meio do vetor
    // a soma dessas extremidades devem resultar o mesmo valor

    // quebra de recursão (os indices estão um do lado do outro)
    if (primeiro + 1 >= ultimo - 1){
        return 1;
    }

    // comparação entre a soma dos indices atuais com a soma dos indices seguintes
    if (v[primeiro] + v[ultimo] == v[primeiro + 1] + v[ultimo - 1]){
        // se for igual, chamar a função novamente
        return pa_recursiva(v, primeiro + 1, ultimo - 1);
    } else{
        // caso contrario retornar 0 (quebra uma das propriedades da PA)
        return 0;
    }

}