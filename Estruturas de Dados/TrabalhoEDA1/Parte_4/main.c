//Gustavo de Oliveira Ferreira
#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"

int main(){
    arvore *arv = create_tree();
    int vetor[8] = {10, 15, 13, 20, 14, 19, 21, 16};

    no *a0 = create_no(vetor[0]);
    no *a1 = create_no(vetor[1]);
    no *a2 = create_no(vetor[2]);
    no *a3 = create_no(vetor[3]);
    no *a4 = create_no(vetor[4]);
    no *a5 = create_no(vetor[5]);
    no *a6 = create_no(vetor[6]);
    no *a7 = create_no(vetor[7]);

    insert(arv, a0);
    insert(arv, a1);
    insert(arv, a2);
    insert(arv, a3);
    insert(arv, a4);
    insert(arv, a5);
    insert(arv, a6);
    insert(arv, a7);


    printf("Tamanho: %ld\nPreOrdem: ", size(arv));
    PreOrdem(raiz(arv));
    printf("\nInOrdem: ");
    InOrdem(raiz(arv));
    printf("\nPosOrdem: ");
    PosOrdem(raiz(arv));
    printf("\n");

    printf("Altura da abb: %d\n", altura(raiz(arv)));


    printf("Depois de remover alguns nós...\n");
    remover_abb(arv, a7);

    printf("Tamanho: %ld\nPreOrdem: ", size(arv));
    PreOrdem(raiz(arv));
    printf("\nInOrdem: ");
    InOrdem(raiz(arv));
    printf("\nPosOrdem: ");
    PosOrdem(raiz(arv));
    printf("\n");

    printf("Pré destruição: %d\n", isEmpty(arv));
    destroyTree(arv, raiz(arv));
    printf("Pós destruição: %d\n", isEmpty(arv));
    free(arv);
    InOrdem(raiz(arv));

    // printf("\n%d\n", isEmpty(arv)); //Verifica se a arvore está vazia
    // printf("%d\n", arv->tam); //Verifica o tamanho da arvore

    // printf("%d\n", isEmpty(arv));

    // PosOrdem(raiz(arv));
    // scanf("%d%d", &a, &b);

    // printf("A area é: %d\n", calcArea(a, b));


    // insert_iterativa(arv, create_no(7));
    // insert_recursiva(arv, raiz(arv), create_no(5));
    // insert_recursiva(arv, raiz(arv), create_no(10));

    return 0;
}