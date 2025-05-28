//
// Created by iulli on 28/05/25.
//
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char cpf[16];
    while (fgets(cpf, 16, stdin) != NULL) {
        cpf[15] = '\0';
        cpf[14] = '\0';
        int soma1 = 0, soma2 = 0;
        int m = 1;
        for (char *p = &cpf[0]; m < 10; p++) {
            if (*p != '.') {
                soma1 += (*p - '0') * m;
                soma2 += (*p - '0') * (10-m);
                m++;
            }
        }
        soma1 = soma1 % 11;
        soma2 = soma2 % 11;
        if (soma1 == 10) {
            soma1 = 0;
        }
        if (soma2 == 10) {
            soma2 = 0;
        }
        if (cpf[12]-'0' == soma1 && cpf[13]-'0' == soma2) {
            printf("CPF valido\n");
        }
        else {
            printf("CPF invalido\n");
        }
    }
    return 0;
}
