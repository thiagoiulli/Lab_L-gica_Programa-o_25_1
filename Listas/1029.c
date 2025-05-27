//
// Created by iulli on 27/05/25.
//
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int fib(int n, int *contagem) {
    if (n == 1) {
        return 1;
    }
    if (n <= 0) {
        return 0;
    }
    *contagem += 2;
    return (fib(n - 1, contagem) + fib(n - 2, contagem));
}

int main(void) {
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        int t;
        scanf("%d", &t);
        int acessos = 0;
        int *contagem = &acessos;
        printf("fib(%d) = %d calls = %d\n", t, acessos, fib(t, contagem));
    }

    return 0;
}
