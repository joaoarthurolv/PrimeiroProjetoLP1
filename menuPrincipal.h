#ifndef MENU_PRINCIPAL_H
#define MENU_PRINCIPAL_H
#include <stdio.h>

typedef enum {
    false, true
} boolean;

typedef struct {
    char login[5];
    char senha[5];
    double saldo;
} Conta;

void logar();

void criar(Conta *contas, int *qtdContas, Conta *conta);

void menuPrincipal();

void verificar();

#endif