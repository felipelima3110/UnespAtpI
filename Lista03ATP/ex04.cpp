#include <stdio.h>
#include <stdlib.h>

int main (){

    int resultado, n, a = 0, b = 1;

    printf("Digite o números de termos desejados na cadeia de Fibonacci  ");
    scanf("%d", &n);

    if (n < 0){
        printf("inválido");

    } else{
        
        printf("%d \n", b);
  
            for(int i = 1; i < n; i++){
                resultado = a + b;
                a = b;
                b = resultado;
                printf("%d \n", resultado);

            }
    }

    getchar();
    return 0;
}