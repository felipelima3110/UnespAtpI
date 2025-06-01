/*
1.Peça ao usuário um número n, aloque um vetor de inteiros com n posições,
preencha com valores sequenciais e imprima.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int tamanho;
    int *ptrt;
    int *v;

    printf("Digite o tamanho do vetor");
    scanf("%d", &tamanho);

    ptrt = &tamanho;

    v = (int*) malloc(*ptrt * sizeof(int));

    for(int i = 1; i <= *ptrt; i++){
        v[i] = i;
        printf("%d\n", v[i]);
    }

    free(v);

    getchar();
    return 0;
}