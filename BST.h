//
// Created by lazarus on 12/03/20.
//
#include <stdio.h>

typedef struct TAluno{
    char nome[20];
    int matricula;
    double nota;
}TAluno;

typedef struct tipoNo *tipoApontador;
typedef struct tipoNo{
    TAluno aluno;
    tipoApontador esq, dir;
}tipoNo;

void FArvoreVazia(tipoApontador *no);
void leArquivo(FILE *arq, tipoApontador *no);
void insereAluno(tipoApontador *no, TAluno aluno);
void userPesquisaAluno(tipoApontador *no);
void pesquisaAluno(tipoApontador *arvore, int matricula);
void posOrdem(tipoApontador *arvore);