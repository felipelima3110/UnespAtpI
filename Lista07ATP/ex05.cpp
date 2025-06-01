/*
5. Simule uma matriz 3x3 preenchida com 0, usando um único vetor alocado
dinamicamente. Imprima o vetor no formato de matriz.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

int tamanho = 3;

int* matriz_linha = (int*)calloc(tamanho, sizeof(int));
int* matriz_coluna = (int*)calloc(tamanho, sizeof(int));

for(int i =0; i< tamanho;i++){
    for(int j=0; j< tamanho; j++){
        printf("[%d %d]  ", matriz_linha[i], matriz_coluna[j]);
        
    }
    printf("\n");
}

free(matriz_linha);
free(matriz_coluna);

getchar();
return 0;
}