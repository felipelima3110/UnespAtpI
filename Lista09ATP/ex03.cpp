#include <stdio.h>
#include <stdlib.h>

    int encontrar(int a[3][3], int b){

        int contador = 0;
  
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if( b == a[i][j]){
                    
                    contador++;
                    printf("Encontrada %dª ocorrência na linha %d e coluna %d\n", contador, i+1, j+1);

                } 
            }
        }
        if(contador == 0){
            printf("não foi encontrado o número pesquisado");
        }
    }
int main() {

    int n;
    int matrizA[3][3] = {
        {10,20,30},
        {11,20,33},
        {91,99,20}
    };

    printf("Digite o número que desejas procurar\n");
    scanf("%d",&n);
    
    encontrar(matrizA,n);

    getchar();
    return 0;
}