#include <stdio.h>
#include <stdlib.h>

void remover(){ //Segmentation fault BANCA *remover()
    
    char * aluno = malloc(sizeof(aluno));
    int matricula;

    printf("\n------------------------REMOVER---------------------------------\n");  

    printf("\nDigite a matricula do aluno: ");
    scanf("%d", &matricula);

   if(tam == 1 && inicio->matricula == matricula){
        BANCA *lixo = inicio;
        inicio = NULL;
        inicio = NULL;
        free(lixo);
        tam--;
    }else{
        BANCA * aux = inicio;
        while(aux != fim && aux->matricula != matricula){
            aux = aux->prox;
        }

        if(inicio->matricula == matricula){
            inicio = inicio->prox;
        }
        else if(fim->matricula == matricula){
            fim = fim->prox;
        }
        else if(aux->matricula == matricula){
            aux->ant->prox = aux->prox;
            aux->prox->ant = aux->ant;
        }
        else{
            printf("Não foi encontrado! \n");
            return;
        }
        free(aux);
        tam--;
    }
    printf("Banca removida com sucesso!");
}
