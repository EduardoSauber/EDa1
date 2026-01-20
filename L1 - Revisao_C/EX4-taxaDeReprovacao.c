#include <stdio.h>

int main(){
    int qtd_disciplinas;

    // só pra ter certeza que enviaram algum dado pro programa
    if (scanf("%d", &qtd_disciplinas) != EOF){

        // valores do ano, semestre e quantidade de materias ofertadas atualmente
        int ano,semestre,m_quantidade;
        
        // loop entre os anos e os semestres ofertados 
        while(scanf("%d %d %d", &ano, &semestre, &m_quantidade) != EOF){

            // um array de mapeamento de todas as materias ofertadas
            int mapa_materias[qtd_disciplinas];  // [codigo da materia]

            // como o array tem todas as materias, limpamos o lixo para que todas tenham -1 reprovações
            for(int i = 0; i <= qtd_disciplinas; i++){
                mapa_materias[i] = -1;
            }
            int maior_reprovacao = -1; // maior reprovação entre as materias ofertadas

            // loop para analisar a situação das materias ofertadas
            for(int index = 0; index < m_quantidade; index++){
                // o programa recebe o codigo, a qtd de matriculados, e a qtd de aprovados
                int codigo,matriculados,aprovados;
                scanf("%d %d %d",&codigo,&matriculados,&aprovados);

                int reprovados = matriculados - aprovados;  // calculo para a qtd de alunos reprovados
                // se a materia tiver uma qtd de reprovação maior, o valor de maior reprovação é alterado
                if(reprovados > maior_reprovacao){
                    maior_reprovacao = reprovados;
                }

                // envia o numero de reprovados no indice=codigo
                mapa_materias[codigo] = reprovados;
            }

            // saida
            printf("%d/%d\n",ano,semestre);
            for(int k = 0; k < qtd_disciplinas; k++){
                // verifica se a turma foi ofertada
                if(mapa_materias[k] != -1){
                    // se a materia tiver o numero de reprovaçÕes igual ao maior valor, imprime o codigo
                    if(mapa_materias[k] == maior_reprovacao){
                        printf("%d ",k);
                    }
                }
            }
            printf("\n\n");
            
        }
        
    }
    return 0;
}