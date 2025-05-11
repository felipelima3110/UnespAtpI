/*
3. Faça uma função recursiva que retorne a quantidade de dígitos de um número
inteiro.
*/
#include<stdio.h>
#include<stdlib.h>

int digitos(int n){

    int contador = n;
 
    if (contador < 10){
        return 1;
    }
    
    return 1 + digitos(contador/10);
}

int main(){

    int x;

    printf("Digite o número a se contar os dígitos:\n");
    scanf("%d", &x);

    printf("%d",digitos(x));
    
    getchar();
    return 0;
}