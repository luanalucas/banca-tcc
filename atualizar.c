#include <stdio.h>
#include <stdlib.h>

void atualizar(){ //Segmentation fault
    BANCA *aux = inicio;
    
    int mat;
    int opcao;
    char *aluno = malloc(sizeof(aluno));
    int matricula;
    char *curso = malloc(sizeof(curso));
    char *email_aluno = malloc(sizeof(email_aluno));
    //orientador nome
    char *orientador = malloc(sizeof(orientador));
    //frequencia
    double frequencia;
    //dados avaliadores
    char *avaliadores = malloc(sizeof(avaliadores));
    char *instituicao = malloc(sizeof(instituicao));
    char *email_avaliador = malloc(sizeof(email_avaliador));
    //dados da banca
    char *titulo_banca = malloc(sizeof(titulo_banca));
    char *resumo = malloc(sizeof(resumo));
    double horario;
    char *local = malloc(sizeof(local));

    printf("\n------------------------ATUALIZAR---------------------------------\n");  

    printf("Digite a matricula do aluno: "); //PROCURAR POR matricula
    scanf("%d", &mat);
    
    while(aux->matricula != mat){
        aux = aux->prox;
    }

    printf("1-Aluno: %s\n", aux->aluno);
    printf("2-Matricula: %d\n", aux->matricula);
    printf("3-Curso: %s\n", aux->curso);
    printf("4-Email do aluno: %s\n", aux->email_aluno);
    printf("5-Orientador: %s\n", aux->orientador);
    printf("6-Frequencia: %lf\n", aux->frequencia);
    printf("7-Avaliadores: %s\n", aux->avaliadores);
    printf("8-Instituição: %s\n", aux->instituicao);
    printf("9-E-mail para contato: %s\n", aux->email_avaliador);
    printf("10-Título: %s\n", aux->titulo_banca);
    printf("11-Resumo:  %s\n", aux->resumo);
    printf("12-Horário: %lf\n", aux->horario);
    printf("13-Local: %s\n", aux->local); 

    printf("Digite o numero referente ao campo que voce quer alterar: "); 
    scanf("%d", &opcao);

    switch(opcao){
            case 1: 
                printf("Digite o nome do aluno: ");
                scanf("%s", aluno);
                aux->aluno = aluno; 
                break; 
            case 2: 
                printf("\nDigite a matricula do aluno:");
                scanf("%d", &matricula);
                aux->matricula = matricula; 
                break; 
            case 3: 
                printf("\nDigite o curso do aluno: ");
                scanf("%s", curso);
                aux->curso = curso; 
                break; 
            case 4: 
                printf("\nDigite o e-mail do aluno: ");
                scanf("%s", email_aluno);
                aux->email_aluno = email_aluno; 
                break; 
            case 5: 
                printf("\nDigite o nome do orientador: ");
                scanf("%s", orientador);
                aux->orientador = orientador; 
                break; 
            case 6: 
                printf("\nDigite frequencia: ");
                scanf("%lf", &frequencia);
                aux->frequencia = frequencia; 
                break; 
            case 7: 
                printf("\nDigite o nome dos avaliadores: ");
                scanf("%s", avaliadores);
                aux->avaliadores = avaliadores; 
                break; 
            case 8: 
                printf("\nDigite o e-mail para contato: ");
                scanf("%s", instituicao);
                aux->instituicao = instituicao; 
                break; 
            case 9: 
                printf("\nDigite o e-mail para contato: ");
                scanf("%s", email_avaliador);
                aux->email_avaliador = email_avaliador; 
                break; 
            case 10: 
                printf("\nDigite o título da banca: ");
                scanf("%s", titulo_banca);
                aux->titulo_banca = titulo_banca; 
                break; 
            case 11: 
                printf("\nDigite o resumo: ");
                scanf("%s", resumo);
                aux->resumo = resumo; 
                break; 
            case 12: 
                printf("\nDigite o horario: ");
                scanf("%lf", &horario);
                aux->horario = horario; 
                break; 
            case 13: 
                printf("\nDigite o local: ");
                scanf("%s", local);
                aux->local = local; 
                break;   
        }
    printf("Banca atualizada com sucesso!");
}
