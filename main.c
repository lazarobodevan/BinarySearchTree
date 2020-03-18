#include <stdio.h>
#include <string.h>
#include "BST.h"
int main() {

    tipoNo *arvore;
    FILE *alunos;

    FArvoreVazia(&arvore);
    leArquivo(alunos,&arvore);
    //userPesquisaAluno(&arvore);
    posOrdem(&arvore);

    return 0;
}