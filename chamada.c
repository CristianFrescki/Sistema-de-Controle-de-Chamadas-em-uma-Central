#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct chamada{
    char nome[50];
    char motivo [100];
    struct chamada* prox;
}chamada;

chamada* inicio = NULL;
chamada* fim = NULL;

void adicionarChamada () {
    chamada* novaChamada = (chamada*) malloc(sizeof(chamada));
    if (novaChamada == NULL) {
        printf("Erro ao alocar memoria para nova chamada.\n");
        return;
    }
    printf("Digite o nome do responsavel pela chamada: ");
    fgets(novaChamada->nome, sizeof(novaChamada->nome), stdin);
    novaChamada->nome[strcspn(novaChamada->nome, "\n")] = 0; 

    printf("Digite o motivo da chamada: ");
    fgets(novaChamada->motivo, sizeof(novaChamada->motivo), stdin);
    novaChamada->motivo[strcspn(novaChamada->motivo, "\n")] = 0;

    novaChamada->prox = NULL;

    if(fim == NULL) {
        inicio = novaChamada;
        fim = novaChamada; 
    }else {
        fim->prox = novaChamada;
        fim = novaChamada;
    }
    printf("Chamada registrada com sucesso!\n");
}