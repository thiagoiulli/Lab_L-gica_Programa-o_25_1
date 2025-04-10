//
// Created by iulli on 10/04/25.
//
#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("%d eh o maior\n", a);
    }
    else if (b >= a && b >= c) {
        printf("%d eh o maior\n", b);
    }
    else if (c >= a && c >= b) {
        printf("%d eh o maior\n", c);
    }
    return 0;
}