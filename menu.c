#include <stdio.h>

void menu(){
    int operacao;

    while(operacao != 3){
        printf("+-----------------------+\n");
        printf("|    CAIXA ELETRÔNICO   |\n");
        printf("+-----------------------+\n");
        printf("| 1 - Acessar conta     |\n");
        printf("| 2 - Criar conta       |\n");
        printf("| 3 - Encerrar sessão   |\n");
        printf("+-----------------------+\n");
        scanf("%d", &operacao);
    }
    
}