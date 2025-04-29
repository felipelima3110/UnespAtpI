/*Crie uma função eh_primo() que recebe um número inteiro e retorna 1 se for primo
ou 0 caso contrário.*/
#include<stdio.h>
#include<stdlib.h>

void eh_primo(int numero){

    int contador = 0;

    if(numero <= 1){
        printf("O número %d não eh primo", numero);

    } else {

        for(int i = 2; i <= numero; i++){
            if(numero % i == 0){
                contador +=1;
            }
    
        }
    
        if (contador > 2){

            printf("Não é primo");

        }else{
    
            printf("eh primo");
            
        }
    
    }

}

int main(){
    
    int n;
    
    printf( "digite o nº que desejas saber se eh_primo ou não\n");
    scanf("%d", &n);
    
    eh_primo(n);
    
    return 0;
}