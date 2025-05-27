//
// Created by iulli on 27/05/25.
//
#include <stdio.h>
#include <string.h>

int main(void) {
    int n, k;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        int a = 0;
        scanf("%d", &k);
        getchar();
        char language[100];
        char temp[100];
        fgets(language, 100, stdin);
        language[strcspn(language, "\n")] = '\0';
        for (int j = 1; j < k; j++) {
            fgets(temp, 100, stdin);
            temp[strcspn(temp, "\n")] = '\0';
            if (strcmp(temp, language) != 0) {
                a = -1;
            }
        }
        if (a == 0) {
            printf("%s\n", language);
        }
        else {
            printf("ingles\n");
        }
    }
    return 0;
}
