#include "menuPrincipal.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void logar() {}

void verificar(Conta *contas, int qtdContas) {
    int i;

    printf("Contas cadastradas no sistema:\n");
    for(i = 0; i < qtdContas; i++){
        printf("Nome: %s\n", contas[i].login);
        printf("---------------------------\n");
    }
}

void criar(Conta *contas, int *qtdContas, Conta *conta) {
    printf("Informe o login: ");
    scanf("%s", conta -> login);

    printf("Informe a senha: ");
    scanf("%s", conta -> senha);
    
    contas[*qtdContas] = *conta;

    printf("\nConta criada com sucesso!\n");
    (*qtdContas)++;
}


void menuPrincipal(){
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
        printf("| 3 - Verificar contas   |\n");
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
                verificar(contas, *qtdContas);
                break;
            default:
                printf("Código inválido. Por favor insira o código corretamente.\n");
                break;
        }
    }
}

