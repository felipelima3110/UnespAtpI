#include <stdio.h>
#include <stdlib.h>

int main (){

    int resultado, n, a = 0, b = 1;

    printf("Digite o termo máximo desejado na cadeia de Fibonacci  ");
    scanf("%d", &n);

    if (n < 0){
        printf("inválido");

    } else{
        
        printf("%d \n", b);
  
            while ( resultado <= n){
                resultado = a + b;
                a = b;
                b = resultado;

                if (resultado <= n){
                    printf("%d \n", resultado);
                } 
                

            }
    }

    getchar();
    return 0;
}