//
// Created by lazarus on 01/09/20.
//

typedef struct tipoNo *tipoApontador;
typedef struct tipoNo{
    int data;
    tipoApontador esq, dir;
}tipoNo;

void inicializa(tipoApontador *no);
void insere(tipoApontador *no, int valor);
void ordem(tipoApontador *no);
void preOrdem(tipoApontador *no);
void posOrdem(tipoApontador *no);
int altura(tipoApontador no);
void pesquisa(tipoApontador no, int chave);