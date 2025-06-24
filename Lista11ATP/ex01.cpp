#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Arquivos:
//  valores padroes em funções
//  argumentos
//  leitura e escrita em arquivos

int main(int argc, char *argv[]){
    printf("número de entradas = %d\n",argc);
    printf("executável=%s\n", argv[0]);
    printf("n1=%s\n", argv[1]);
    printf("n2=%s\n", argv[2]);

    int x,y;
    int contador =0;

    x= atoi(argv[1]);
    y =atoi(argv[2]);

    for(int i = x; i < y; i++){
        contador =0;
        for(int j = 1; j< y; j++){
            if(i%j==0){
                contador++;
            }
        }
        if (contador<=2){
            printf("é primo %d\n", i);
            
        }
    }
        

    return 0;
    getchar();
}