/*
2. Faça uma função recursiva que retorne a soma de todos os números de 1 até n.
*/

#include<stdio.h>
#include<stdlib.h>

int soma(int n){
    if (n <= 1){
        return 1;
    }else{
        return n + soma(n-1);
    }

}


int main(){

    int x = 5;
    
    printf("Digite o número n:\n");
    scanf("%d", &x);

    printf("A PA de razão 1 com n termos é: %d\n", soma(x));

    getchar();
    return 0;
}
