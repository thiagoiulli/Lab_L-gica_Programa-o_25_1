//
// Created by iulli on 30/03/25.
//
#include <stdio.h>

int main(void) {
    double a, b, media;
    scanf("%lf %lf", &a, &b);
    media = (a * 3.5 + b * 7.5)/11;
    printf("MEDIA = %0.5lf\n", media);
}