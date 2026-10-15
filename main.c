#include <stdio.h>
#include <stdlib.h>

typedef struct No {

    int valor;

    struct No *proximo;
} No;

int main(){


    /*
    --- CRIAÇÃO DO CÓDIGO ATÉ O CHECKPOINT 3 ----

    No primeiro;
    No segundo;
    No terceiro;

    primeiro.valor = 10;
    segundo.valor = 20;
    terceiro.valor = 30;

    primeiro.proximo = &segundo;
    //"&" Obtem o endereço da memória de uma variavel
    //"&segundo" referencia o endereço nó segundo 

    segundo.proximo = &terceiro; 
    
    terceiro.proximo = NULL;

    printf("%d\n", primeiro.proximo->valor);

     return 0;

     */

     No *novo;

     novo = malloc(sizeof(No));

     if(novo == NULL){
        printf("Erro ao alocar memoria. \n");

        return 1;
     }

     return 0;

}