//
// Created by iulli on 24/04/25.
//
#include <stdio.h>

int main(void) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a+b <= c || a+c <= b || b+c <= a) {
        printf("Area = %.1lf\n", (a+b)*c/2);
    }
    else {
        printf("Perimetro = %.1lf\n", a+b+c);
    }
    return 0;
}