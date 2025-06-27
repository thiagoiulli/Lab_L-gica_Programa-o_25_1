#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

typedef struct {
    char *nome;
    char cpf[14];
    char *curso;
} usuarios;

typedef struct {
    usuarios *usuario;
    size_t size;
    size_t capacity;
} pessoas;

void exercicio3_lab(pessoas *p) {
    FILE *f = fopen("lab.bin", "wb");
    // fwrite(p->usuario, sizeof(p->usuario), 1, f);
    fwrite(&p->size, sizeof(p->size), 1, f);
    fwrite(&p->capacity, sizeof(p->capacity), 1, f);
    for (int i = 0; i < p->size; i++) {
        fwrite(p->usuario[i].nome, sizeof(char), strlen(p->usuario[i].nome), f);
        fwrite(p->usuario[i].cpf, sizeof(p->usuario->cpf), 1, f);
        fwrite(p->usuario[i].curso, sizeof(char), strlen(p->usuario[i].curso), f);
    }
    fclose(f);
}

void exercicio2_lab_criar(pessoas *p) {
    p->capacity = 0;
    p->size = 0;
    p->usuario = NULL;
}

void exercicio2_lab_incluir(pessoas *p, char *nome, char cpf[14], char *curso) {
    p->usuario = realloc(p->usuario, sizeof(usuarios) + sizeof(usuarios) * (p->size));
    p->capacity++;
    p->usuario[p->size].nome = malloc (sizeof(char) * (strlen(nome) + 1));
    strcpy(p->usuario[p->size].nome, nome);
    strcpy(p->usuario[p->size].cpf, cpf);
    p->usuario[p->size].curso = malloc (sizeof(char) * (strlen(curso) + 1));
    strcpy(p->usuario[p->size].curso, curso);
    p->size++;
}

void exercicio2_lab_listar(pessoas *p, int j) {
    if (j == -1){
        for (int i=0; i < p->size; i++) {
            printf("Usuario %d \n", i+1);
            printf("%s", p->usuario[i].nome);
            printf("\n");
            printf("%s", p->usuario[i].cpf);
            printf("\n");
            printf("%s", p->usuario[i].curso);
            printf("\n");
        }
    }
    else if (j == -2) {
        printf("Usuario não encontrado\n");
    }
    else {
        printf("Usuario %d \n", j+1);
        printf("%s", p->usuario[j].nome);
        printf("\n");
        printf("%s", p->usuario[j].cpf);
        printf("\n");
        printf("%s", p->usuario[j].curso);
        printf("\n");
    }
}

int  exercicio2_lab_buscar(pessoas *p, char cpf[14]) {
    for (int i = 0; i < p->size; i++) {
        if (strcmp(p->usuario[i].cpf, cpf) == 0) {
            return i;
        }
    }
    return -2;
}

void exercicio2_lab_excluir(pessoas *p, char cpf[14]) {
    int i = exercicio2_lab_buscar(p, cpf);
    if (i == -2) {
        return;
    }
    free(p->usuario[i].nome);
    free(p->usuario[i].curso);
    for (int j = i; j < p->size; j++) {
        p->usuario[j] = p->usuario[j+1];
    }
    p->size--;
    p->usuario = realloc(p->usuario, p->size * sizeof(usuarios));
    p->capacity--;
}

void exercicio2_lab() {
    pessoas chamada;
    exercicio2_lab_criar(&chamada);
    exercicio2_lab_incluir(&chamada, "edson arantes", "123.456.789-00", "Computaria");
    exercicio2_lab_incluir(&chamada, "edson arantes 2", "133.456.789-00", "Computaria");
    // exercicio2_lab_listar(&chamada, -1); // lista todos
    exercicio2_lab_excluir(&chamada, "123.456.789-00");
    exercicio2_lab_listar(&chamada, exercicio2_lab_buscar(&chamada, "133.456.789-00"));
    exercicio2_lab_listar(&chamada, exercicio2_lab_buscar(&chamada, "123.456.789-00"));
    printf("%d\n", chamada.size);
    exercicio3_lab(&chamada);
    for (int i = 0; i < chamada.size; i++) {
        free (chamada.usuario[i].nome);
        free (chamada.usuario[i].curso);
    }
    free (chamada.usuario);
}

int main() {
    exercicio2_lab();
    return 0;
}
