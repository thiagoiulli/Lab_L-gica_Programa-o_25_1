//
// Created by iulli on 10/04/25.
//
#include <math.h>
#include <stdio.h>

int main(void) {
    double x1, y1, x2, y2, distance;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("%.4lf\n", distance);
    return 0;
}