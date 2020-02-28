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

void criar(Conta *contas, int *qtdContas) {

    if (*qtdContas == 0) {
        contas = malloc(sizeof(Conta));
        *qtdContas++;
    } else {
        *qtdContas++;
        contas = realloc(contas, *qtdContas * sizeof(Conta));
    }
    
    printf("Digite um número de 5 dígitos para ser seu login:\n");
    scanf("%d", contas[*qtdContas - 1].login);
    while (contas[*qtdContas - 1].login > 99999 || contas[*qtdContas - 1].login < 10000) {
        printf("O login da conta não pode ser menor que 10000 nem maior que 99999.\n");
        printf("Digite um número de 5 dígitos para ser seu login:\n");
        scanf("%d", contas[*qtdContas - 1].login);
    }

    printf("Digite um número de 5 dígitos para ser sua senha:\n");
    scanf("%d", contas[*qtdContas - 1].senha);
    while (contas[*qtdContas - 1].senha > 99999 || contas[*qtdContas - 1].senha < 10000) {
        printf("A senha não pode ser menor que 10000 nem maior que 99999.\n");
        printf("Digite um número de 5 dígitos para ser sua senha:\n");
        scanf("%d", contas[*qtdContas - 1].senha);
    }
    
    printf("Conta criada com sucesso!\n");
    printf("Por favor retorne ao menu principal e insira seus dados para logar em sua conta.\n");
}


void menuPrincipal(){
    Conta *contas;
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
        printf("| 3 - Verificar contas   |\n");
        printf("| 0 - Encerrar sessão    |\n");
        printf("+------------------------+\n");
        scanf("%d", &operacao);
        switch (operacao) {
            case 1:
                logar();
                break;
            case 2:
                criar(contas, &lista);
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
