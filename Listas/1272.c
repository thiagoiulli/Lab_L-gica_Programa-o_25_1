//
// Created by iulli on 27/05/25.
//
#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        char str[52] = {0};
        char frase[52] = {0};
        char *ptr = frase;
        fgets(str, 52, stdin);
        str[strcspn(str, "\n")] = '\0';
        for (char *p = str; *p != '\0'; p++) {
            if (p == str) {
                if (*p != ' ') {
                    *ptr = *p;
                    *ptr++;
                }
            }
            else {
                if (*p != ' ' && *(p-1) == ' ') {
                    *ptr = *p;
                    *ptr++;
                }
            }
        }
        printf("%s\n", frase);
    }
    return 0;
}
