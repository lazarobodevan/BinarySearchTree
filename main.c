#include <stdio.h>
#include "arvore.h"
int main() {
    tipoApontador no;
    tipoApontador aux;
    TFila fila;
    filaVazia(&fila);
    inicializa(&no);
    inicializa(&aux);

    insere(&no, 20);
    insere(&no, 10);
    insere(&no, 5);
    insere(&no, 2);
    insere(&no, 4);
    insere(&no, 6);
    insere(&no, 7);
    insere(&no, 15);
    insere(&no, 18);
    insere(&no, 12);
    insere(&no, 17);
    insere(&no, 19);


/*
    printf("\n--------------\n");
    ordem(&no);
    retira(&no, 10);
    preOrdem(&no);
    printf("\n");
    */
    percursoLargura(no, fila);
    return 0;
}