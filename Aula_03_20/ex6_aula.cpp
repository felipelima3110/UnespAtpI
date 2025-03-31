/*Escreva um programa que dado os lados de um triângulo, ele classifica em equilátero, isóceles, escaleno ou inválido*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2, n3;
  
    printf("digite comprimento do primeiro lado:  ");
    scanf("%d", &n1);
    
    printf("digite comprimento do segundo lado:  ");
    scanf("%d", &n2);

    printf("digite comprimento do terceiro lado:  ");
    scanf("%d", &n3);

    if ((n1 || n2 || n3) <= 0){

        printf("Dados inválidos! não existe lado negativo ou igual a zero!");  

    } else if (n1 + n2 <= n3 || n1 + n3 <= n2 || n2 + n3 <= n1){
        
        printf("Tem valor errado ae! não é triângulo");
        
    } else {

        if ((n1 == n2) && (n2 == n3)){
            printf("Eis um triângulo equilátero");
        } else if ((n1 != n2)&&(n2 != n3)&&(n3 != n1)){
            printf("Eis um triangulo escaleno");
        } else{
            printf("Eis um triangulo isóceles");
        } 

    }

    getchar();
    return 0;
}