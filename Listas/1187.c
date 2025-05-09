//
// Created by iulli on 09/05/25.
//
#include <stdio.h>

int main(void) {
    char o;
    double array[12][12];
    scanf(" %c", &o);
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &array[i][j]);
        }
    }
    double total = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = i+1; j < 11-i; j++) {
            total += array[i][j];
        }
    }
    if (o == 'M') {
        total = total / 30;
    }
    printf("%.1lf\n", total);
    return 0;
}
