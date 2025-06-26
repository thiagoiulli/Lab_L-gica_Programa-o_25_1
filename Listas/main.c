#include <stdio.h>
#include <stdlib.h>

void exercicio1() {
    char c;
    char *p = NULL;
    int i = 1;
    while (scanf("%c", &c) != EOF) {
        p = realloc(p, i * sizeof(c));
        *(p+i-1) = c;
        i++;
    }
    printf("%s\n", p);

    int spaces = 0;
    for (int j = 0; j < i; j++) {
        if (*(p+j) == ' ') {
            spaces++;
        }
    }

    char *q = NULL;
    int count = 0;
    q = malloc((i-spaces) * sizeof(c));
    for (int j = 0; j < i; j++) {
        if (*(p+j+count) != ' ') {
            *(q+j) = *(p+j+count);
        }
        else {
            j--;
            count++;
        }
    }
    printf("%s\n", q);
    free(p);
    free(q);
}

typedef struct {
    u_int *num;
    size_t size;
    size_t capacity;
    size_t impares;
} vec;

void exercicio2_inic(vec *v) {
    v->num = malloc(1* sizeof(int));
    v->capacity = 1;
    v->size = 0;
    v->impares = 0;
}

void exercicio2_inserir(vec *v, u_int n) {
    if (v->capacity - v->size < 1) {
        v->num = realloc(v->num, (v->size *sizeof(int)) + sizeof(int));
        v->capacity++;
    }
    if (n%2 == 0) {
        v->num[v->size] = n;
    }
    else {
        if (v-> impares == 0) {
            for (int i = v->size; i >= 0; i--) {
                v->num[i] = v->num[i-1];
            }
            v->num[0] = n;
        }
        else {
            for (int i = v->size; i >= v->impares; i--) {
                v->num[i] = v->num[i-1];
            }
            v->num[v->impares] = n;
        }
        v->impares++;
    }
    v->size++;
}

void exercicio2_remover(vec *v, u_int n) {
    for (int i = 0; i < v->size; i++) {
        if (v->num[i] == n) {
            for (int j = i; j < v->size - 1; j++) {
                v->num[j] = v->num[j+1];
            }
            if (n%2 != 0) {
                v->impares--;
            }
            v->size--;
            v->num = realloc(v->num, v->size * sizeof(int));
            v->capacity--;
            break;
        }
    }
}

void exercicio2_listar(vec *v) {
    for (int i = 0; i < v->size; i++) {
        printf("%d ", v->num[i]);
    }
    printf("\n");
}

void exercicio2(){
    vec v;
    exercicio2_inic(&v);
    exercicio2_inserir(&v, 2);
    exercicio2_listar(&v);
    exercicio2_inserir(&v, 3);
    exercicio2_listar(&v);
    exercicio2_inserir(&v, 4);
    exercicio2_inserir(&v, 5);
    exercicio2_inserir(&v, 5);
    exercicio2_listar(&v);
    exercicio2_remover(&v, 5);
    exercicio2_listar(&v);
    free(v.num);
}

void exercicio1_lab() {
    FILE *f = fopen("lab.txt", "r");
    char c;
    scanf("%c", &c);
    int count = 0;
    fseek(f, 0, SEEK_END);
    long end = ftell(f);
    for (fseek(f, 0, SEEK_SET); ftell(f) < end;) {
        char temp = fgetc(f);
        if (temp == c) {
            count++;
        }
    }
    printf("%d\n", count);
    fclose(f);
}

void exercicio2_lab() {
}

int main() {
    exercicio2_lab();
    return 0;
}
