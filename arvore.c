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

void antecessor(tipoApontador q, tipoApontador *r){
    tipoApontador aux;
    if((*r)->dir != NULL){
        antecessor(q, &(*r)->dir);
        return;
    }
    q->data = (*r)->data;
    aux = *r;
    *r = (*r)->esq;
    free(aux);
}

void retira(tipoApontador *no, int chave){
    if(*no == NULL){
        printf("Elemento inexistente ou árvore vazia!\n");
        return;

    }else {
        if (chave < (*no)->data) {
            printf("Esquerda!\n");
            retira(&(*no)->esq, chave);
            return;
        }
        if (chave > (*no)->data){
            printf("Direita!\n");
            retira(&(*no)->dir, chave);
            return;
        }
        tipoApontador aux;

        if((*no)->dir == NULL && (*no)->esq != NULL){
            aux = *no;
            *no = (*no)->esq;
            printf("Removido: %d\n", aux->data);
            free(aux);
            printf("Nó substituido pelo filho a esquerda!\n\n");
            return;
        }
        if((*no)->esq != NULL && (*no)->dir != NULL){
            antecessor(*no, &(*no)->esq);
            printf("Nó substituido pelo antecessor!\n");
            return;
        }
        if((*no)->esq == NULL && (*no)->dir != NULL){
            aux = *no;
            *no = (*no)->dir;
            printf("Removido: %d\n", aux->data);
            free(aux);
            printf("No substituido pelo filho a direita!\n\n");
            return;
        }
        *no = NULL;
        aux = *no;
        free(aux);
    }
}