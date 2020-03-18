#include <stdio.h>
#include <string.h>
#include "BST.h"
int main() {

    tipoNo *arvore;
    FILE *alunos;

    FArvoreVazia(&arvore);
    leArquivo(alunos,&arvore);
    //posOrdem(&arvore);
    //preOrdem(&arvore);
    ordem(&arvore);
    //userPesquisaAluno(&arvore);

    return 0;
}