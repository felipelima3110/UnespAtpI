#include <stdio.h>
#include <stdlib.h>

int main (){

    int linha;

    printf("Digite o tamanho de linhas do triângulo");

    scanf("%d", &linha);

    for(int i = 1; i <= linha; i++){
        for(int j = 1; j <= i; j++){
            
            printf("*");
        }
        printf( "\n");

    }

    getchar();
    return 0;
}