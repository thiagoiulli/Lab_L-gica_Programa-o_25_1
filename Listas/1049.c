//
// Created by iulli on 28/05/25.
//
#include <stdio.h>
#include <string.h>

int main(void) {
    char categorias[3][20];
    fgets(categorias[0], 20, stdin);
    fgets(categorias[1], 20, stdin);
    fgets(categorias[2], 20, stdin);
    categorias[0][strcspn(categorias[0], "\n")] = '\0';
    categorias[1][strcspn(categorias[1], "\n")] = '\0';
    categorias[2][strcspn(categorias[2], "\n")] = '\0';
    char *categoria = categorias[0];
    if (strcmp(categoria, "vertebrado") == 0) {
        categoria += 20;
        if (strcmp(categoria, "ave") == 0) {
            categoria += 20;
            if (strcmp(categoria, "carnivoro") == 0) {
                printf("aguia\n");
            }
            else {
                printf("pomba\n");
            }
        }
        else {
            categoria += 20;
            if (strcmp(categoria, "onivoro") == 0) {
                printf("homem\n");
            }
            else {
                printf("vaca\n");
            }
        }
    }
    else {
        categoria += 20;
        if (strcmp(categoria, "inseto") == 0) {
            categoria += 20;
            if (strcmp(categoria, "hematofago") == 0) {
                printf("pulga\n");
            }
            else {
                printf("lagarta\n");
            }
        }
        else {
            categoria += 20;
            if (strcmp(categoria, "hematofago") == 0) {
                printf("sanguessuga\n");
            }
            else {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
