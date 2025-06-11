#include <stdio.h>
#include <stdlib.h>

    int somar(int a[3][3], int b[3][3]){

        int **matriz = (int **)malloc(3 * sizeof(int *));
        for (int i = 0; i < 3; i++) {
            matriz[i] = (int *)malloc(3 * sizeof(int));
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matriz[i][j] = a[i][j] + b[i][j];
            }
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        
        for (int i = 0; i < 3; i++) free(matriz[i]);
    }
int main() {

    int matrizA[3][3] = {
        {10,20,30},
        {11,22,33},
        {91,99,95}
    };
    int matrizB[3][3] = {
        {10,20,30},
        {11,22,33},
        {91,99,95}
    };
    
    somar(matrizA,matrizB);

    getchar();
    return 0;
}