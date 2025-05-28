//
// Created by iulli on 28/05/25.
//
#include <stdio.h>

int main(void) {
    int n;
    while (scanf("%d", &n) != EOF) {
        char comida[n][25];
        int dia[n];
        int ordem[n];
        for(int i = 0; i < n; i++) {
            scanf("%s %d", comida[i], &dia[i]);
        }
        for(int i = n-1; i >= 0; i--) {
            int maior = 0, indice = -1;
            for (int j = 0; j < n; j++) {
                if (dia[j] > maior) {
                    maior = dia[j];
                    indice = j;
                }
            }
            ordem[i] = indice;
            dia[indice] = -1;
        }
        for(int i = 0; i < n; i++) {
            if (i == n-1) {
                printf("%s\n", comida[ordem[i]]);
            }
            else {
                printf("%s ", comida[ordem[i]]);
            }
        }
    }
    return 0;
}
