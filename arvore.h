//
// Created by lazarus on 01/09/20.
//

typedef struct tipoNo *tipoApontador;
typedef struct tipoNo{
    int data;
    tipoApontador esq, dir;
}tipoNo;

typedef struct Celula{
    tipoNo no;
    struct Celula *pProx;
}TCelula;

typedef struct Fila{
    TCelula *pFrente, *pTras;
}TFila;

//Operacoes da fila
void filaVazia(TFila *fila);
int isFilaVazia(TFila fila);
int enfileira(TFila *fila, tipoApontador no);
int desenfileira(TFila *fila, tipoApontador no);

//---Operacoes da BST
void inicializa(tipoApontador *no);
void insere(tipoApontador *no, int valor);
void ordem(tipoApontador *no);
void preOrdem(tipoApontador *no);
void posOrdem(tipoApontador *no);
int altura(tipoApontador no);
void pesquisa(tipoApontador no, int chave);
void antecessor(tipoApontador q, tipoApontador *r);
void retira(tipoApontador *no, int chave);
void percursoLargura(tipoApontador no, TFila fila);