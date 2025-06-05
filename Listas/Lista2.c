#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int exercicio1(void) {
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    char *p;
    for(p = str; *p != '\0'; p++) {
        printf("%c", *p);
    }
    printf("\n");
    for(p--; p >= str; p--) {
        printf("%c", *p);
    }
    printf("\n");
    return 0;
}

int exercicio2(void) {
    char str[100];
    char p1[20];
    char p2[20];
    char str2[100];
    fgets(str, 100, stdin);
    char *ptr = p1;
    char *p;
    for (p=str; *p != ' '; p++) {
        *ptr = *p;
        ptr++;
    }
    *ptr = '\0';
    ptr = p2;
    char *pp;
    for (pp=str + strlen(str)-1; *pp != ' '; pp--) {
        *ptr = *pp;
        ptr++;
    }
    char *bkp = pp;
    ptr--;
    for (pp = str2; ptr>= p2; pp++) {
        *pp = *ptr;
        ptr--;
    }
    for (; p <= bkp; pp++) {
        *pp = *p;
        p++;
    }
    for (ptr = p1; *ptr != '\0'; pp++) {
        *pp = *ptr;
        ptr++;
    }
    printf("%s", str2);
}

int exercicio3(void) {
    srand(time(NULL));
    int quantidade = 0, soma = 0;
    int matriz[3][3];
    for (int *p = &matriz[0][0]; p <= &matriz[2][2]; p++) {
        *p = rand() % 100;
        if (*p > 50) {
            quantidade++;
        }
        soma += *p;
        printf("%d\n", *p);
    }
    printf("%d %d\n", soma, quantidade);
}

char *reverse(char s[]) {
    static int i = 0;
    int len = strlen(s) - i - 1;
    char temp;

    if (i < len) {
        temp = s[i];
        s[i] = s[len];
        s[len] = temp;
        i++;
        reverse(s);
    }
    return s;
}
int exercicio4() {
    char string[100];
    fgets(string, 100, stdin);
    printf("%s", reverse(string));
}

int divisao(int a, int b) {
    int total = 0;
    if (a < b) {
        return 0;
    }
    total += divisao(a-b, b);
    return total+1;
}
int exercicio5(void) {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n", divisao(a, b));
}

int main(int argc, char *argv[]) {
    int n;
    printf("selecione o exercicio (1-5): ");
    scanf("%d", &n);
    printf("\nDigite o input do exercicio:\n");
    switch (n) {
        case 1:
            exercicio1();
            break;
        case 2:
            exercicio2();
            break;
        case 3:
            exercicio3();
            break;
        case 4:
            exercicio4();
            break;
        case 5:
            exercicio5();
            break;
    }
}
