//
// Created by iulli on 22/05/25.
//
#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int menor, maior;
        scanf("%d %d", &menor, &maior);
        char string[1000000] = {0};
        for (int j = menor; j <= maior; j++) {
            char temp[1000000] = {0};
            sprintf(temp, "%d", j);
            strcat(string, temp);
        }
        size_t len = strlen(string);
        printf("%s", string);
        for (char *ptr = string+len-1; ptr >= string; ptr--) {
            printf("%c", *ptr);
        }
        printf("\n");
    }
    return 0;
}
