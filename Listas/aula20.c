//
// Created by iulli on 25/06/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    struct produto {
        char nome[30];
        int codigo;
        float preco;
    };
    //passo a
    struct produto produtos[10];

    //passo b
    strcpy(produtos[0].nome, "Pe de Moleque");
    produtos[0].codigo = 13205;
    produtos[0].preco = 0.2;
    strcpy(produtos[1].nome, "Cocada Baiana");
    produtos[1].codigo = 15202;
    produtos[1].preco = 0.5;

    // passo c

    struct produto *p;
    p = malloc(10*sizeof(struct produto));

    struct produto *pp = &p[0];
    strcpy(pp->nome, "Pe de Moleque");
    pp->codigo = 132025;
    pp->preco = 0.2;

    pp++;
    strcpy(pp->nome, "Cocada Baiana");
    pp->codigo = 15202;
    pp->preco = 0.5;

    //passo d
    for (pp = &p[0]; pp < &p[2]; pp++) {
        printf("%s\n", pp->nome);
        printf("%d\n", pp->codigo);
        printf("%.2f\n", pp->preco);
    }

    free(p);
    return 0;
}
