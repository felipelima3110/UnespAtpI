#include <stdio.h>
#include <stdlib.h>
int main() {
    int **matriz = (int **)malloc(2 * sizeof(int *));

    for (int i = 0; i < 2; i++) {
    matriz[i] = (int *)malloc(3 * sizeof(int));
}
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = 0;
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        
        printf("\n");
    }
// Liberação
    for (int i = 0; i < 2; i++) free(matriz[i]);

    int linha, coluna;

    linha = 2;
    coluna = 1;
    
    free(matriz);
    getchar();
    return 0;
}