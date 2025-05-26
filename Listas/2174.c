//
// Created by iulli on 26/05/25.
//
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[151][20] = {0};
    int n, m = 0;
    scanf("%d ", &n);
    for (int i=0; i<n; i++) {
        char temp[20];
        fgets(temp, 20, stdin);
        temp[strcspn(temp, "\n")] = '\0';
        for(int j=0; j<=m; j++) {
            if (j == m && strcmp(nome[j], temp) != 0) {
                strcat(nome[j], temp);
                m++;
                break;
            }
            if (strlen(nome[j]) > 0 && strcmp(nome[j], temp) == 0) {
                break;
            }
        }
    }
    printf("Falta(m) %d pomekon(s).\n", 151-m);
    return 0;
}
