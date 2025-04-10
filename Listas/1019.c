//
// Created by iulli on 10/04/25.
//
#include <stdio.h>

int main(void) {
    int n, minutos, horas;
    scanf("%d",&n);
    horas = n/3600;
    n = n%3600;
    minutos = n/60;
    n = n%60;
    printf("%d:%d:%d\n",horas,minutos,n);
    return 0;
}