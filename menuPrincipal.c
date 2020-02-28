#include "menuPrincipal.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void logar() {}

void verificar(Conta *contas, int qtdContas) {

    // Não vejo necessidade de fazer essa função
    // O usuário não precisa verificar as contas cadastradas
    // Vou fazer uma função para evitar conflito na hora de criar
    // novas contas. Para evitar repetição de logins.
    // ass. Felipe Costa

    int i;

    printf("Contas cadastradas no sistema:\n");
    for(i = 0; i < qtdContas; i++){
        printf("Nome: %s\n", contas[i].login);
        printf("---------------------------\n");
    }
}

int buscarConta(Conta *contas, int qtdContas, int login) {
    for (int i = 0; i < qtdContas; i++) {
        if (contas[i].login == login) {
            return i;
        }
    }
    return -1;
}

int distinto(Conta *contas, int qtdContas, int login) {
    for (int i = 0; i < qtdContas; i++) {
        if (contas[i].login == login) {
            return 0;
        }
    }
    return 1;
}

void criar(Conta *contas, int *qtdContas) {

    if (*qtdContas == 0) {
        contas = malloc(sizeof(Conta));
        *qtdContas++;
    } else {
        *qtdContas++;
        contas = realloc(contas, *qtdContas * sizeof(Conta));
    }
    
    contas[*qtdContas - 1].saldo = 0;
    printf("Digite um número de 5 dígitos para ser seu login:\n");
    scanf("%d", contas[*qtdContas - 1].login);
    while (contas[*qtdContas - 1].login > 99999 || contas[*qtdContas - 1].login < 10000) {
        printf("O login da conta não pode ser menor que 10000 nem maior que 99999.\n");
        printf("Digite um número de 5 dígitos para ser seu login:\n");
        scanf("%d", contas[*qtdContas - 1].login);
    }
    while (!distinto(contas, *qtdContas, contas[*qtdContas - 1].login)) {
        printf("Já existe um login com esse número.\n");
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

void depositar(Conta *contas, int qtdContas) {
    int login, indice;
    float valor;
    printf("Digite o login da conta beneficiária:\n");
    scanf("%d", &login);
    while (distinto(contas, qtdContas, login)) {
        printf("Essa conta beneficiária não existe.\n");
        printf("Digite o login correto da conta beneficiária:\n");
        scanf("%d", &login);
    }
    printf("Digite o valor a ser depositado:\n");
    scanf("%f", &valor);
    while (valor <= 0) {
        printf("O valor depositado deve ser maior que zero.");
        printf("Digite o valor correto a ser depositado:\n");
        scanf("%f", &valor);
    }
    indice = buscarConta(contas, qtdContas, login);
    if (indice != -1) {
        contas[indice].saldo += valor;
        printf("Depósito realizado com sucesso!\n");
    }
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

