#include "menuConta.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
OPERAÇÕES DE CONTA

consultar saldo
e saque
o resto faz no menu principal mesmo
porque não precisa de autenticação
*/

void saldo(Conta *contaLogada) {
    printf("Seu saldo atual é de: R$ %lf\n", contaLogada -> saldo);
}

void sacar(Conta *contaLogada) {
    double valorSaque;
    
    printf("Digite o valor do saque: ");
    scanf("%lf", &valorSaque);

    while(valorSaque > contaLogada->saldo){
        printf("O valor do saque é maior que o seu saldo atual. Digite um valor menor!");
        scanf("%lf", &valorSaque);
    }

    contaLogada->saldo = contaLogada->saldo - valorSaque;
}

void pagar() {}

void menuConta(Conta contaLogada, Conta *contas, boolean logado, int lista) {
    int operacao = -1;

    while(operacao != 0){
        printf("+------------------------+\n");
        printf("|    CAIXA ELETRÔNICO    |\n");
        printf("+------------------------+\n");
        printf("|     Conta: %d    |\n", contaLogada.login);
        printf("|    Por favor escolha   |\n");
        printf("|    uma operação para   |\n");
        printf("|     ser realizada.     |\n");
        printf("+------------------------+\n");
        printf("| 1 - Realizar saque     |\n");
        printf("| 2 - Verificar saldo    |\n");
        printf("| 3 - Realizar pagamento |\n");
        printf("| 0 - Encerrar sessão    |\n");
        printf("+------------------------+\n");
        scanf("%d", &operacao);
        switch (operacao) {
            case 1:
                sacar(&contaLogada);
                break;
            case 2:
                saldo(&contaLogada);
                break;
            case 3:
                //pagar();
                break;
            default:
                printf("Código inválido. Por favor insira o código corretamente.\n");
                break;
        }
    }
}