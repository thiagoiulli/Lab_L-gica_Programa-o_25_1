//
// Created by iulli on 30/03/25.
//
#include <stdio.h>

int main(void) {
    double a, b, c, media;
    scanf("%lf %lf %lf", &a, &b, &c);
    media = (a * 2 + b * 3 + c * 5)/10;
    printf("MEDIA = %0.1lf\n", media);
}