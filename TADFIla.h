//
// Created by lazarus on 18/03/20.
//

#include "BST.h"

typedef struct celula{
    tipoApontador *no;
    struct celula *pProx;
}TCelula;

typedef struct TFila{
    TCelula *pFrente, *pTras;
}TFila;

void iniciaFila(TFila *fila);
void enfileira(TFila *fila, tipoApontador *no);
void imprime(TFila fila);