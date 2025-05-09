//
// Created by iulli on 07/05/25.
//
#include <stdio.h>
unsigned long long int fib(int n) {
    unsigned long long int f[n + 1];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}


int main(void) {
    int m;
    unsigned long long int total;
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        int n;
        scanf("%d", &n);
        total = fib(n);
        printf("Fib(%d) = %llu\n", n, total);
    }
    return 0;
}