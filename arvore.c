//
// Created by lazarus on 01/09/20.
//

#include <stdlib.h>
#include <stdio.h>
#include "arvore.h"

void inicializa(tipoApontador *no){
    *no = NULL;
    printf("Inicializada!\n");
}

void insere(tipoApontador *no, int valor){
    if(*no == NULL){
        *no = (tipoApontador) malloc(sizeof(tipoNo));
        (*no)->data = valor;
        (*no)->esq = NULL;
        (*no)->dir = NULL;
        printf("Inseriu um nó!\n");
        return;
    }
    if(valor > (*no)->data){
        printf("direita\n");
        insere(&(*no)->dir, valor);
    }
    if(valor < (*no)->data){
        printf("esquerda\n");
        insere(&(*no)->esq, valor);
    }
}

void ordem(tipoApontador *no){
    if(*no != NULL){
        ordem(&(*no)->esq);
        printf("%d\n", (*no)->data);
        ordem(&(*no)->dir);
    }
}

void preOrdem(tipoApontador *no){
    if(*no != NULL){
        printf("%d\n", (*no)->data);
        preOrdem(&(*no)->esq);
        preOrdem(&(*no)->dir);
    }
}

void posOrdem(tipoApontador *no){
    if(*no != NULL){
        posOrdem((&(*no)->esq));
        posOrdem(&(*no)->dir);
        printf("%d\n", (*no)->data);

    }
}