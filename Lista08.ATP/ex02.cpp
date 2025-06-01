/*
2. Faça um programa que armazene todos os valores de um vetor passado pelo
usuário. Peça ao usuário um número n, inicialmente, que representa quantos
números serão armazenados.
*/
#include<stdio.h>
#include<stdlib.h>

int exibir(int *v, int *tam){

    for(int i = 0; i < *tam; i++){
        printf("[%d] ", v[i]);
    }
}

int main(){

    int tamanho;
    int *ptrt;
    int *v;

    printf("Digite o tamanho do vetor\n");
    scanf("%d", &tamanho);

    ptrt = &tamanho;

    v = (int*) malloc(*ptrt * sizeof(int));

    for(int i = 0; i < *ptrt; i++){
        printf("Digite o %d º elemento", i+1);
        scanf("%d", &v[i]);
        
        printf("você adicionou o elemento: %d\n", v[i]);
        printf("\n");
    }

    printf("Os elementos do vetor são:\n");

    exibir(v,ptrt);

    free(v);

    getchar();
    return 0;
}