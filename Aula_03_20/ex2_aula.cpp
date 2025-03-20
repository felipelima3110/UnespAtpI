#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero;

    printf("Digite um número para se extrair o módulo ==>>");
    scanf("%d", &numero);

    if (numero < 0){

        numero *= -1;
        printf("seu módulo é: %d", numero);

    } else if(numero > 0){

        /*numero = numero;*/
        printf("seu módulo é: %d", numero);

    } else{
        printf("é igual a zero");

    }

    getchar();
    return 0;
}