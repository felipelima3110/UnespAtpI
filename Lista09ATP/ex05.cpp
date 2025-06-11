#include <stdio.h>
#include <stdlib.h>

    int produtoVetorial(int a[3], int b[3]){

        int *nova = (int *)malloc(3 * sizeof(int));
       
        for (int j = 0; j < 2; j++) {
            nova[j] = (a[j+1] * b[j+2]) - (b[j+1] * a[j+2]);
        }
        nova[2]= (a[0]*b[1]) - (a[1]*b[0]);
      
            
        printf(" i = %d, j = %d, k =%d", nova[0],  nova[1],  nova[2]);
            
        free(nova);
    }
int main() {

    int vetorA[3] = {1,-2,10};
    int vetorB[3] = {1,2,-6};
    
    produtoVetorial(vetorA,vetorB);

    getchar();
    return 0;
}