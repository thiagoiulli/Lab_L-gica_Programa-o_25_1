//
// Created by iulli on 24/04/25.
//
#include <stdio.h>

int main(void) {
    float salary, total = 0;
    scanf("%f", &salary);
    if (salary <= 2000) {
        printf("Isento\n");
        return 0;
    }
    if (salary <= 3000) {
        total += (salary-2000)*8/100;
    }
    else if (salary <= 4500) {
        total += (salary-3000)*18/100;
        total += (salary-(salary-3000)-2000)*8/100;
    }
    else {
        total += (salary-4500)*28/100;
        total += (salary-(salary-4500)-3000)*18/100;
        total += (salary-(salary-3000)-2000)*8/100;
    }
    printf("R$ %.2f\n", total);
    return 0;
}