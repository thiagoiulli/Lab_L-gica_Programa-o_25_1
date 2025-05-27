//
// Created by iulli on 27/05/25.
//
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        char str[51];
        int dif;
        fgets(str, 51, stdin);
        str[strcspn(str, "\n")] = '\0';
        scanf("%d", &dif);
        getchar();
        for (char *ptr = str; *ptr != '\0'; ptr++) {
            if (*ptr-dif < 'A') {
                *ptr = 'Z' - dif+1 + (*ptr-'A');
            }
            else {
                *ptr = *ptr-dif;
            }
        }
        printf("%s\n", str);
    }
    return 0;
}
