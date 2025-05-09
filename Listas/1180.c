//
// Created by iulli on 07/05/25.
//
#include <stdio.h>

int main(void) {
    int n;
    int menor = 100000000000;
    int posicao;
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        if (x[i] < menor) {
            menor = x[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    return 0;
}