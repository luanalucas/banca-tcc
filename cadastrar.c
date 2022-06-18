#include <stdio.h>
#include <stdlib.h>

void cadastrar(char *aluno, int matricula, char *curso, char *email_aluno, char *orientador, double frequencia, char *avaliadores,
char *instituicao, char *email_avaliador, char *titulo_banca, char *resumo, double horario, char *local, int pos){

    if(pos >= 0 && pos <= tam){
   
        BANCA * novo = malloc(sizeof(BANCA));
        novo->aluno = aluno;
        novo->matricula = matricula;
        novo->curso = curso;
        novo->email_aluno = email_aluno;
        novo->orientador = orientador;
        novo->frequencia = frequencia;
        novo->avaliadores = avaliadores;
        novo->instituicao = instituicao;
        novo->email_avaliador = email_avaliador;
        novo->titulo_banca = titulo_banca;
        novo->resumo = resumo;
        novo->horario = horario;
        novo->local = local;
        novo->prox = NULL;
        novo->ant = NULL;
   
        if(inicio == NULL){ 
            inicio = novo;
            fim = novo;
            tam++;
        }else if(pos == 0){
            inicio->ant = novo;
            novo->prox = inicio;
            inicio = novo;
            tam++;
        }else if(pos == tam){ 
            novo->ant = fim;
            fim->prox = novo;
            fim = novo;
            tam++;
        }else{ // 
           
            BANCA * aux = inicio;
            for(int i = 0; i < pos; i++){
                aux = aux->prox;
            }
            novo->prox = aux;
            novo->ant = aux->ant;
            aux->ant->prox = novo;
            aux->ant = novo;
            tam++;
        }
   
    }else{
        printf("Comando invalido\n");
    }
}

void cadastrarEntrada(){
   
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
       
        printf("""\n------------------------CADASTRAR---------------------------------\n""");  

        printf("Digite o nome do aluno: ");
        scanf("%s", aluno);
        printf("\nDigite a matricula do aluno:");
        scanf("%d", &matricula);
        printf("\nDigite o curso do aluno: ");
        scanf("%s", curso);
        printf("\nDigite o e-mail do aluno: ");
        scanf("%s", email_aluno);
        printf("\nDigite o nome do orientador: ");
        scanf("%s", orientador);
        printf("\nDigite frequencia: ");
        scanf("%lf", &frequencia);
        printf("\nDigite o nome dos avaliadores: ");
        scanf("%s", avaliadores);
        printf("\nDigite a instituicao: ");
        scanf("%s", instituicao);
        printf("\nDigite o e-mail para contato: ");
        scanf("%s", email_avaliador);
        printf("\nDigite o título da banca: ");
        scanf("%s", titulo_banca);
        printf("\nDigite o resumo: ");
        scanf("%s", resumo);
        printf("\nDigite o horario: ");
        scanf("%lf", &horario);
        printf("\nDigite o local: ");
        scanf("%s", local);

        cadastrar(aluno, matricula, curso, email_aluno, orientador, frequencia, avaliadores, instituicao, email_avaliador, titulo_banca, resumo, horario, local, 0);
        printf("Banca cadastrada com sucesso!");
}