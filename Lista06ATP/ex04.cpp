/*
4. Escreva uma função que calcule base elevada por expoente usando recursão
(assuma expoente positiva).
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int elevadoa(int b, int n){

    int base = b;
    int expoente = n;
    int res = 2;

    if (expoente == 0 && expoente <= 1){
        return 1;
    }

    res = base * elevadoa(base, expoente-1);
    
    return res;
}

int main(){

    int base,x;

    printf("Digite o número da base:\n");
    scanf("%d", &base);

    printf("Digite o número do expoente:\n");
    scanf("%d", &x);

    if ( x < 0){

        printf("Digite um valor do expoente não negativo");

    } else {
        
        printf("O Resultado é:%d\n",elevadoa(base, x));

    }
  
    getchar();
    return 0;
}