//
// Created by iulli on 09/05/25.
//
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    char frase[n+1];
    int c;
    for (int i = 0; i < n; i++) {
        scanf("%x", &c);
        frase[i] = (char)c;
    }
    frase[n] = '\0';
    printf("%s\n", frase);
    return 0;
}
