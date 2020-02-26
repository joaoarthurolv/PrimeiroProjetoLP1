#include "menu.h"
#include <stdio.h>

void menu(){
    boolean logado = false;
    int operacao = -1;

    while(operacao != 0){
        printf("+-----------------------+\n");
        printf("|    CAIXA ELETRÔNICO   |\n");
        printf("+-----------------------+\n");
        printf("| 1 - Acessar conta     |\n");
        printf("| 2 - Criar conta       |\n");
        printf("| 3 - Consultar saldo   |\n");
        printf("| 4 - Depositar valor   |\n");
        printf("| 0 - Encerrar sessão   |\n");
        printf("+-----------------------+\n");
        scanf("%d", &operacao);
        switch (operacao) {
            case 1:
                acessar();
                break;
            case 2:
                criar();
                break;
            case 3:
                consultar(logado);
                break;
            case 4:
                depositar(logado);
                break;
        }
    }
}