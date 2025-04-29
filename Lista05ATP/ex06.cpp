/*Crie uma função eh_palindromo() que recebe um número inteiro e retorna 1 se for
palíndromo (ex: 121) ou 0 caso contrário.*/
#include<stdio.h>
#include<stdlib.h>

void perorre_dir_esq(int numero){


   
   for(int i = numero; i >= 1; i--){

        int resposta /= i;
        resposta = i;
        printf("antes %d - :)\n", resposta);
        //if( i < 10){

          //  printf("antes %d - :)\n", i);
            //break;
            //}
    }
    
    //int i = 10;

   /*
   while(numero >= i){
        int resposta = numero/i;

        printf("%d \n", resposta);

        i = i-10;
    }
   */ 
       // int numero2 = numero;
        
       
    

  
}



int main(){

    int numero = 4207;

    perorre_dir_esq(numero);

    getchar();
    return 0;
}