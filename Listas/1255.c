//
// Created by iulli on 28/05/25.
//
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        int maior = 0;
        int letras[26] = {0};
        char str[250];
        fgets(str, 250, stdin);
        str[strcspn(str, "\n")] = '\0';
        for (char *p = str; *p != '\0'; p++) {
            *p = tolower(*p);
            letras[('a'-*p)*-1]++;
        }
        for (int *l = letras; l < letras+26; l++) {
            if (*l > maior) {
                maior = *l;
            }
        }
        for (int *l = letras; l < letras+26; l++) {
            if (*l == maior) {
                printf("%c", 'a' + (l - letras));
            }
        }
        printf("\n");
    }
    return 0;
}
