//
// Created by iulli on 26/05/25.
//
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    char *tecla[] = {
        "2", "22", "222",    // a, b, c
        "3", "33", "333",    // d, e, f
        "4", "44", "444",    // g, h, i
        "5", "55", "555",    // j, k, l
        "6", "66", "666",    // m, n, o
        "7", "77", "777", "7777", // p, q, r, s
        "8", "88", "888",    // t, u, v
        "9", "99", "999", "9999"  // w, x, y, z
    };
    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        char str[142];
        fgets(str, 142, stdin);
        str[strcspn(str, "\n")] = '\0';
        char teclas[1000] = "";
        teclas[0] = '\0';
        int pos = 0;
        for (char *ptr = str; *ptr != '\0'; ptr++) {
            if (isupper(*ptr)) {
                strcat(teclas, "#");
                *ptr = tolower(*ptr);
                strcat(teclas, tecla[*ptr - 'a']);
            }
            else if (*ptr == ' ') {
                strcat(teclas, "0");
            }
            else if (islower(*ptr)) {
                if (tecla[*ptr - 'a'][0] == teclas[strlen(teclas) - 1]) {
                    strcat(teclas, "*");
                }
                strcat(teclas, tecla[*ptr - 'a']);
            }
        }
        printf("%s\n", teclas);
    }
    return 0;
}
