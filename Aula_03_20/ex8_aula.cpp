/*Escreva um programa que dado os lados de um triângulo, ele classifica em retângulo ou não*/
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>

using namespace std;

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
        int lados[3] = {n1, n2, n3};
            sort(lados, lados+3);

            if (abs(pow(lados[0], 2) + pow(lados[1], 2) - pow(lados[2], 2)) == 0){
                printf("é triangulo retangulo");
            } else {
                printf("Não é retângulo");
            }

    }

    getchar();
    return 0;
}