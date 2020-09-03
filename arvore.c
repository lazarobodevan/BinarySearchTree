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

int altura(tipoApontador no){
    int he, hd;
    if(no == NULL){
        return -1;
    }else{
        he = altura(no->esq);
        hd = altura(no->dir);
        if(he < hd)
            return hd+1;
        else
            return he+1;
    }
}

void pesquisa(tipoApontador no, int chave){
    if(no == NULL){
        printf("Ja to cancelada mesmo kkkkkkkkkkkk\n");
        return;
    }
    if(chave < no->data){
        printf("esquerda\n");
        pesquisa(no->esq, chave);
    }else if(chave > no->data){
        printf("direita\n");
        pesquisa(no->dir, chave);
    }else if(chave == no->data){
        printf("Encontrei!\n");
        printf("Valor: %d\n", no->data);
        return;
    }

}