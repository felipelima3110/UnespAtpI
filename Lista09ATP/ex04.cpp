#include <stdio.h>
#include <stdlib.h>

    int somaDiagonal(int a[3][3]){

        int soma = 0;
  
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if( i == j){
                    
                    soma = a[i][j] + soma;

                } 
            }
        }
        return soma;

    }
int main() {

    int matrizA[3][3] = {
        {10,20,30},
        {11,20,33},
        {91,99,20}
    };

    
    printf("A soma da diagonal principal é:\n %d", somaDiagonal(matrizA));

    getchar();
    return 0;
}