#include <stdio.h>
#include <stdlib.h>


int alocar(int a, int b){

int entrada;

int **matriz = NULL;

matriz = (int **)malloc(a * sizeof(int *));

    for (int i = 0; i < a; i++) {
        matriz[i] = (int *)malloc(b * sizeof(int));
    }
    if(matriz == NULL){
        printf("Erro na alocação");
    }
  
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {

            printf("Digite o elemento da %d linha e %d coluna:\n", i+1, j+1);
            scanf("%d", &entrada);
            matriz[i][j] = entrada;
        }
    }
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                printf("[%d] ", matriz[i][j]);

            }
            printf("\n");
        }
    for (int i = 0; i < 3; i++) free(matriz[i]);
}
int main() {

    int linhas,colunas;

    printf("Digite o número de linhas que desejas\n");
    scanf("%d",&linhas);
    printf("Digite o número de colunas que desejas\n");
    scanf("%d",&colunas);
    
    alocar(linhas,colunas);

    getchar();
    return 0;
}