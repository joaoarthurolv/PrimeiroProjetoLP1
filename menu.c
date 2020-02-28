#include "menu.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void logar() {}

void criar(Conta *contas, int *qtdContas, Conta *conta) {
    printf("Informe o login: ");
    scanf("\n%s", conta -> login);

    printf("informe a senha: ");
    scanf("\n%s", conta -> senha);
    
    contas[*qtdContas] = *conta;

    printf("\nConta criada com sucesso!\n");
    (*qtdContas)++;
}

void saldo() {}

void sacar() {}

void depositar() {}

void pagar() {}

void menu(){
    Conta conta;
    Conta *contas;
    int *qtdContas;
    boolean logado = false;
    int operacao = -1, lista = 0;

    qtdContas = (int*)malloc(20*sizeof(int));

    contas = (Conta*)malloc((*qtdContas)*sizeof(Conta));

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
                criar(contas, qtdContas, &conta);
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