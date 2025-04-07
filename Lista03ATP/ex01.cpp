#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, fatorial = 1;

    printf("Digite o número do fatorial");
    scanf("%d", &numero);


    for(int i = numero; i >= 1 ; i-- ){
        fatorial = i * fatorial;
        
    }
    printf(" O fatorial de %d é igual a %d", numero, fatorial);

    getchar();
    return 0;
}