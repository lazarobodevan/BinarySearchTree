#include <stdio.h>
#include "arvore.h"
int main() {
    tipoApontador no;
    inicializa(&no);

    insere(&no, 20);
    insere(&no, 10);
    insere(&no, 5);
    insere(&no, 2);
    insere(&no, 4);
    insere(&no, 6);
    insere(&no, 7);
    insere(&no, 15);
    insere(&no, 18);
    insere(&no, 12);
    insere(&no, 17);
    insere(&no, 19);



    printf("\n--------------\n");
    //ordem(&no);
    printf("\n");
    //preOrdem(&no);
    printf("\n");
    //posOrdem(&no);
    printf("%d\n", altura(no));
    pesquisa(no, 0);
    return 0;
}