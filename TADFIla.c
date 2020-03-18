//
// Created by lazarus on 18/03/20.
//

#include "TADFIla.h"
#include <stdlib.h>

void iniciaFila(TFila *fila){
    fila->pFrente = (TCelula *) malloc(sizeof(TCelula));
    fila->pTras = fila->pFrente;
    fila->pFrente->pProx = NULL;
}

void enfileira(TFila *fila, tipoApontador *no){
    TCelula *pNovo;
    pNovo = (TCelula*) malloc(sizeof(TCelula));
    if(pNovo == NULL)
        return;

    fila->pTras->pProx = pNovo;
    fila->pTras = pNovo;
    pNovo->no = no;
    pNovo->pProx = NULL;
}