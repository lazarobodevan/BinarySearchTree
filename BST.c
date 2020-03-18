//
// Created by lazarus on 12/03/20.
//

#include "BST.h"
#include <stdlib.h>
#include <string.h>

void leArquivo(FILE *arq, tipoApontador *no){

    TAluno aluno;
    arq = fopen("alunos.txt","r");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    while (!feof(arq)){

        fscanf(arq, "%s - %d - %lf", aluno.nome, &aluno.matricula, &aluno.nota);
        insereAluno(no, aluno);
    }
    fclose(arq);
}

void FArvoreVazia(tipoApontador *no){
    *no = NULL;
    printf("Inicializada!\n");
}

void insereAluno(tipoApontador *no, TAluno aluno){
    if(*no == NULL){
        printf("No nulo\n");
        *no = (tipoApontador) malloc(sizeof(tipoNo));
        (*no)->aluno = aluno;
        (*no)->esq = NULL;
        (*no)->dir = NULL;
        printf("No = %d\n", aluno.matricula);
        return;
    }

    if(aluno.matricula < (*no)->aluno.matricula){
        printf("Esquerda\n");
        insereAluno(&(*no)->esq, aluno);
        return;
    }
    if(aluno.matricula > (*no)->aluno.matricula){
        printf("Direita\n");
        insereAluno(&(*no)->dir, aluno);
        return;
    }
}

void pesquisaAluno(tipoApontador *arvore, int matricula){

    if(*arvore == NULL) {
        printf("\n---------Aluno não encontrado!-------\n");
        return;
    }

    if(matricula == (*arvore)->aluno.matricula){
        printf("\n-------Aluno encontrado!-------\n");
        printf("Nome: %s\n", (*arvore)->aluno.nome);
        printf("Matricula: %d\n", (*arvore)->aluno.matricula);
        printf("Nota: %lf\n", (*arvore)->aluno.nota);
        return;;
    }

    if(matricula < (*arvore)->aluno.matricula){
        printf("Esquerda\n");
        pesquisaAluno(&(*arvore)->esq, matricula);
        return;
    }
    if(matricula > (*arvore)->aluno.matricula){
        printf("Direita\n");
        pesquisaAluno(&(*arvore)->dir, matricula);
        return;
    }
}

void userPesquisaAluno(tipoApontador *no){
    int matricula = 0;
    printf("Insira a matricula: ");
    scanf("%d", &matricula);
    pesquisaAluno(no, matricula);
}

void posOrdem(tipoApontador *arvore){
    // nao funciona hm kk bjs
    if((*arvore)->esq != NULL){
        posOrdem(&(*arvore)->esq);
        printf("%d\n", (*arvore)->aluno.matricula);
        return;
    }
    if((*arvore)->dir != NULL){
        posOrdem(&(*arvore)->dir);
        printf("%d\n", (*arvore)->aluno.matricula);
        return;
    }
}