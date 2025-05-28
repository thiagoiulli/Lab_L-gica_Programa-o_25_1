//
// Created by iulli on 28/05/25.
//
#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        int encaixa = 0;
        char n1[1000];
        char n2[1000];
        scanf("%s", &n1);
        scanf("%s", &n2);
        n1[strcspn(n1, "\n")] = '\0';
        n2[strcspn(n2, "\n")] = '\0';
        char *p = n1 + strlen(n1)-1;
        char *q = n2 + strlen(n2)-1;
        for (; q >= n2; q--, *p--) {
            if (*q != *p) {
                encaixa = -1;
            }
        }
        if (encaixa == -1) {
            printf("nao encaixa\n");
        }
        else if (encaixa == 0) {
            printf("encaixa\n");
        }
    }
    return 0;
}
