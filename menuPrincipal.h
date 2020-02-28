#ifndef MENU_PRINCIPAL_H
#define MENU_PRINCIPAL_H
#include <stdio.h>

typedef enum {
    false, true
} boolean;

typedef struct {
    int login;
    int senha;
    double saldo;
} Conta;

void logar();

void criar(Conta *contas, int *qtdContas);

void menuPrincipal();

void verificar();

#endif