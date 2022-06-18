#include <stdio.h>
#include <stdlib.h>

void imprimir(){
    BANCA * aux = inicio;
    for(int i = 0; i < tam; i++){
        printf("\n------------------------BANCAS CADASTRADAS---------------------------------\n");        
        printf("Aluno: %s\n", aux->aluno);
        printf("Matricula: %d\n", aux->matricula);
        printf("Curso: %s\n", aux->curso);
        printf("Email do aluno: %s\n", aux->email_aluno);
        printf("Orientador: %s\n", aux->orientador);
        printf("Frequencia: %lf\n", aux->frequencia);
        printf("Avaliadores: %s\n", aux->avaliadores);
        printf("Instituição: %s\n", aux->instituicao);
        printf("E-mail para contato: %s\n", aux->email_avaliador);
        printf("Título: %s\n", aux->titulo_banca);
        printf("Resumo:  %s\n", aux->resumo);
        printf("Horário: %lf\n", aux->horario);
        printf("Local: %s\n", aux->local); 

        aux = aux->prox;
    }
}
