//
// Created by iulli on 10/04/25.
//
#include <stdio.h>

int main(void) {
    int a, b, c, d, e, f, temp;
    scanf("%d %d %d", &a, &b, &c);
    d = a;
    e = b;
    f = c;
    if (d > e) {
        temp = d;
        d = e;
        e = temp;
    }
    if (d > f) {
        temp = d;
        d = f;
        f = temp;
    }
    if (e > f) {
        temp = e;
        e = f;
        f = temp;
    }
    printf("%d\n%d\n%d\n\n", d, e, f);
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}