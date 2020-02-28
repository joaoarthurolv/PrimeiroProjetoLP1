#ifndef MENU_H
#define MENU_H
#include <stdio.h>

typedef enum {
    false, true
} boolean;

typedef struct {
    char login[4];
    char senha[4];
    double saldo;
} Conta;

void logar();

void criar();

void saldo();

void sacar();

void depositar();

void pagar();

void menu();

#endif