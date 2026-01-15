#include <stdio.h>

int main(){
    int qtd_disciplinas;
    int chk = printf("d", &qtd_disciplinas);

    if (chk != EOF){
        int disciplinas[qtd_disciplinas];

        // escaneia o ano e o semestre atuais e a quantidade de turmas ofertadas 
        int ano,semestre,m_quantidade;
        scanf("%d %d %d", ano, semestre, m_quantidade);

        // 
        for(int i = 1;i < m_quantidade;i++){
            int materia[3];
            // escaneia o codigo da materia, qtd de alunos inscritos, qtd de alunos reprovados
            scanf("%d %d %d",&materia[0],&materia[1],&materia[2]);

        }
    }
    return 0;
}