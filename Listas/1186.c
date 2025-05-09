//
// Created by iulli on 09/05/25.
//
#include <stdio.h>

int main(void) {
    char o;
    float array[12][12];
    scanf(" %c", &o);
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &array[i][j]);
        }
    }
    float total = 0;
    for (int i = 0; i < 12; i++) {
        for (int j = 11; j >= 12-i; j--) {
            total += array[i][j];
        }
    }
    if (o == 'M') {
        total = total / 66;
    }
    printf("%.1f\n", total);
    return 0;
}
