#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero;

    printf("Digite um número para testar se ele é ímpar ou par==>>");
    scanf("%d", &numero);
 
    if (numero % 2 == 1){
        printf("é ímpar");
    }
    else{
        printf("é par");
    }

    getchar();
    return 0;
}