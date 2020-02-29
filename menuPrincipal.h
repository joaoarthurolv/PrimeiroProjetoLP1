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

/**
 * Realiza o login do usuário.
 * @param contas Ponteiro de contas cadastradas 
 * @param qtdContas Quantidade de contas cadastradas 
 * @param conta Conta que vai receber os valores digitados pelo usuario
*/
void logar(Conta *contas, int *qtdContas, Conta *conta);

int buscarConta(Conta *contas, int qtdContas, int login);

/**
 * Verifica se já existe um usuário com aquele login
 * @param contas Ponteiro de contas cadastradas 
 * @param qtdContas Quantidade de contas cadastradas 
 * @param login Login a ser verificado
 * @return retorna 1 ou 0 para verificação de verdadeiro e falso
*/
int verificarDistinto(Conta *contas, int qtdContas, int login);

/**
 * Cria um usuário.
 * @param contas Ponteiro de contas cadastradas 
 * @param qtdContas Quantidade de contas cadastradas 
*/
void criar(Conta *contas, int *qtdContas);

/**
 * Deposita uma quantidade de dinheiro numa conta
 * @param contas Ponteiro de contas cadastradas 
 * @param qtdContas Quantidade de contas cadastradas 
*/
void depositar(Conta *contas, int qtdContas);

/**
 * Chama o menu principal da aplicação
*/
void menuPrincipal();

#endif