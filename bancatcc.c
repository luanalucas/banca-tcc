#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "cadastrar.h"
#include "remover.h"
#include "atualizar.h"
#include "manipular_arq.h"

int main(){  

    int x = 1;
    while(x==1){
        int menu;
        printf("\n---------------------------MENU | CRUD---------------------------\n");
        printf("\nPara cadastrar uma banca, digite: 1"); //funcao que possa continuar cadastrando loop, no caso retornar menu
        printf("\nPara exibir as bancas cadastradas, digite: 2");
        printf("\nPara remover uma banca cadastrada, digite: 3");
        printf("\nPara atualizar uma banca, digite: 4");
        printf("\nPara encerrar o programa, digite: 5");
        printf("\n------------------------------------------------------------------\n");
        scanf("%d", &menu);
        
        switch(menu){
            case 1: cadastrarEntrada(); break; //funcionando 
            case 2: imprimir(); break; //funcionando
            case 3: remover(); break; //funcionando 
            case 4: atualizar(); break;
            case 5: x = 0; break; //funcionando
        }
    }
    salvar();

    return 0;
}