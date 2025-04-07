#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, divisor;

    printf("Digite o número pra testar se é primo");
    scanf("%d", &numero);

    for(int i = numero; i >= 1 ; i-- ){
        if( numero%i == 0){
            divisor += 1;
        }
    }

    if (divisor >2 && numero > 1){
        printf(" O número %d não é primo pois tem %d divisores", numero, divisor);
    } else if (divisor == 2 && numero > 1){
        printf(" O número %d é primo ", numero);
    } else {
        printf(" O número %d não é primo por ser 0, 1 ou negativo", numero);
    }

    getchar();
    return 0;
}