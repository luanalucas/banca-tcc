#include <stdio.h>
#include <stdlib.h>

void salvar(){
    BANCA * aux = inicio;
    FILE * file;
    
    file = fopen ("arquivo.txt","w"); //abrindo arquivo
        if(file == NULL){
                printf("Erro na abertura!\n");
                system("pause");
                exit(1);//aborta o programa
        }
    //fseek(file, 2*sizeof(struct BANCA), SEEK_SET);
    //rewind(file);
    //fread(&c,sizeof(struct BANCA),1,file);
        
    for(int i = 0; i < tam; i++){ 

        fprintf(file, "Aluno: %s\n", aux->aluno);
        fprintf(file, "Matricula: %d\n", aux->matricula);
        fprintf(file, "Curso: %s\n", aux->curso);
        fprintf(file, "Email do aluno: %s\n", aux->email_aluno);
        fprintf(file, "Orientador: %s\n", aux->orientador);
        fprintf(file, "Frequencia: %s\n", aux->frequencia);
        fprintf(file, "Avaliadores: %s\n", aux->avaliadores);
        fprintf(file, "Instituição: %s\n", aux->instituicao);
        fprintf(file, "E-mail para contato: %s\n", aux->email_avaliador);
        fprintf(file, "Título: %s\n", aux->titulo_banca);
        fprintf(file, "Resumo:  %s\n", aux->resumo);
        fprintf(file, "Horário: %f\n", aux->horario);
        fprintf(file, "Local: %s\n", aux->local);       



        aux = aux->prox;
    }
    fclose(file);
    system("pause");
}

/*void carregarArquivo(file){
    file = fopen ("arquivo.txt","rb"); //abrindo arquivo
        if(file == NULL){
                printf("Erro na abertura!\n");
                system("pause");
                exit(1);//aborta o programa
        }
    BANCA cad;
    fread(&cad,sizeof(struct BANCA),1,file);
    printf("%s\n%d\n%s\n%s\n%s\n%f\n%s\n%s\n%s\n%s\n%f\n%s\n", cad.aluno, cad.matricula, cad. curso, cad.curso, cad.email_aluno, cad.orientador, cad.frquencia, cad.avaliadores,
    cad.institucao, cad.email_avaliador, cad.titulo_banca, cad.resumo, cad.horario, cad.local);  
}*/
