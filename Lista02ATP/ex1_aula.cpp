#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero;

    printf("Digite um número para testar se ele é positivo ou negativo ==>>");
    scanf("%d", &numero);

    if (numero < 0){
        printf("é negativo");
    } else if(numero ==0){
        printf("é igual a zero");
    } else{
        printf("é positivo");
    }

    getchar();
    return 0;
}