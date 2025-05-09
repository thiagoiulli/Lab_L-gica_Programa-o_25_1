//
// Created by iulli on 09/05/25.
//
#include <stdio.h>

int main(void) {
    int c;
    scanf("%d", &c);
    char o;
    scanf(" %c", &o);
    double array[12][12];
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &array[i][j]);
        }
    }
    double total = 0;
    for (int i = 0; i < 12; i++) {
        total += array[i][c];
    }
    if (o == 'M') {
        total = total / 12;
    }
    printf("%.1lf\n", total);
    return 0;
}
