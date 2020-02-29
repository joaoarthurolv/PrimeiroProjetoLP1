#ifndef MENU_CONTA_H
#define MENU_CONTA_H
#include <stdio.h>

typedef enum {
    false, true
} boolean;

typedef struct {
    int login;
    int senha;
    double saldo;
} Conta;

void saldo();

/**
 * Realiza um saque do usuário logado
 * @param contaLogada Ponteiro de conta logada na aplicação  
*/
void sacar();

/**
 * Verifica o saldo do usuário logado
 * @param contaLogada Ponteiro de conta logada na aplicação 
*/
void depositar();

void pagar();

void menuPrincipal();

#endif