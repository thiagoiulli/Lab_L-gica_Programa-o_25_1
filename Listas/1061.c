//
// Created by iulli on 10/04/25.
//
#include <stdio.h>

int main(void) {
    int Di, Hi, Mi, Si, Df, Hf, Mf, Sf, seconds, minutes, hours, days;
    char* temp;
    scanf("%s", &temp);
    scanf("%d%d", &Di, &Hi);
    scanf("%s", &temp);
    scanf("%d", &Mi);
    scanf("%s", &temp);
    scanf("%d", &Si);
    scanf("%s", &temp);
    scanf("%d%d", &Df, &Hf);
    scanf("%s", &temp);
    scanf("%d", &Mf);
    scanf("%s", &temp);
    scanf("%d", &Sf);
    seconds = Sf - Si;
    minutes = Mf - Mi;
    hours = Hf - Hi;
    days = Df - Di;
    if (seconds < 0) {
        seconds = 60 + seconds;
        minutes --;
    }
    if (minutes < 0) {
        minutes = 60 + minutes;
        hours --;
    }
    if (hours < 0) {
        hours = 24 + hours;
        days --;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", days, hours, minutes, seconds);
    return 0;
}
