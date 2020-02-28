#include "menu.h"
#include <stdio.h>

void logar() {}

void criar() {}

void saldo() {}

void sacar() {}

void depositar() {}

void pagar() {}

void menu(){
    Conta *conta = NULL;
    boolean logado = false;
    int operacao = -1, lista = 0;

    while(operacao != 0){
        printf("+------------------------+\n");
        printf("|    CAIXA ELETRÔNICO    |\n");
        printf("+------------------------+\n");
        printf("|     Seja bem-vindo!    |\n");
        printf("|    Por favor escolha   |\n");
        printf("|    uma operação para   |\n");
        printf("|     ser realizada.     |\n");
        printf("+------------------------+\n");
        printf("| 1 - Acessar conta      |\n");
        printf("| 2 - Criar conta        |\n");
        printf("| 3 - Depositar valor    |\n");
        printf("| 4 - Realizar pagamento |\n");
        printf("| 0 - Encerrar sessão    |\n");
        printf("+------------------------+\n");
        scanf("%d", &operacao);
        switch (operacao) {
            case 1:
                logar();
                break;
            case 2:
                criar();
                break;
            case 3:
                depositar();
                break;
            case 4:
                pagar();
                break;
            default:
                printf("Código inválido. Por favor insira o código corretamente.\n");
                break;
        }
    }
}