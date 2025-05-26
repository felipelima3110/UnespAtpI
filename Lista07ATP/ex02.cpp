/*
Crie um programa que:
○ Declare dois vetores A e B de tamanho 5;
○ Leia os valores para ambos os vetores;
○ Imprima os valores de maneira intercalada (A[0], B[0], A[1], B[1]...).
*/
#include<iostream>
#include <string>
#include<stdio.h>
#include<stdlib.h>


using namespace std;


int vetorA[5] = {2,4,6,8,10};
int vetorB[5] = {10,20,30,40,50}; 

int main(){

    for(int i = 0; i < 5; i++){
        printf("A[%d], ", vetorA[i]);
        printf("B[%d] \n", vetorB[i]);
    }



    getchar();
    return 0;
}



