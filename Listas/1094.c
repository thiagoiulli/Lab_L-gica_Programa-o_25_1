//
// Created by iulli on 17/04/25.
//
#include <stdio.h>

int main(void) {
    int n;
    float total = 0, totalR = 0, totalC = 0, totalS = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int m;
        char x;
        scanf("%d %c", &m, &x);
        switch (x) {
            case 'R':
                totalR += m;
                break;
            case 'C':
                totalC += m;
                break;
            case 'S':
                totalS += m;
                break;
        }
        total += m;
    }
    printf("Total: %.0f cobaias\n", total);
    printf("Total de coelhos: %.0f\n", totalC);
    printf("Total de ratos: %.0f\n", totalR);
    printf("Total de sapos: %.0f\n", totalS);
    printf("Percentual de coelhos: %.2f %%\n", (totalC * 100) / total);
    printf("Percentual de ratos: %.2f %%\n", (totalR * 100) / total);
    printf("Percentual de sapos: %.2f %%\n", (totalS * 100) / total);
    return 0;
}
