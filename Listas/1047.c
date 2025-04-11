//
// Created by iulli on 10/04/25.
//
#include <stdio.h>

int main(void) {
    int Hi, Mi, Hf, Mf, minutes, hours;
    scanf("%d%d%d%d", &Hi, &Mi, &Hf, &Mf);
    hours = Hf - Hi;
    minutes = Mf - Mi;
    if (minutes < 0) {
        minutes = 60 + minutes;
        hours --;
    }
    if (hours < 0) {
        hours = 24 + hours;
    }
    if (hours == 0 && minutes == 0) {
        hours = 24;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);
    return 0;
}