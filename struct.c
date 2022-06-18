#include <stdio.h>
#include <stdlib.h>

typedef struct Banca{
    //dados aluno
    char *aluno;
    int matricula;
    char *curso;
    char *email_aluno;

    //orientador nome
    char *orientador;

    //frequencia
    double frequencia;

    //dados avaliadores
    char *avaliadores;
    char *instituicao;
    char *email_avaliador;

    //dados da banca
    char *titulo_banca;
    char *resumo;
    double horario;
    char *local;
    
    //dados aluno
    struct Banca * prox;
    struct Banca * ant;
}BANCA;

BANCA * inicio = NULL;
BANCA * fim = NULL;

int tam = 0;
