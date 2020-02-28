#ifndef MENU_CONTA_H
#define MENU_CONTA_H
#include <stdio.h>

typedef enum {
    false, true
} boolean;

typedef struct {
    char login[4];
    char senha[4];
    double saldo;
} Conta;

void saldo();

void sacar();

void depositar();

void pagar();

void menuPrincipal();

#endif