#ifndef MENU_H
#define MENU_H
#include <stdio.h>

typedef enum {
    false, true
} boolean;

typedef struct {
    char* login;
    char* senha;
    double saldo;

} Conta;

void menu();

#endif