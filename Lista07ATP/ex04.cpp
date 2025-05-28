/*Faça uma função que dados dois vetores A e B de tamanho T, imprima os
elementos que estão em ambos os vetores.*/
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int vetorA[5] = {2,4,6,8,500};
int vetorB[5] = {10,2,30,40,500}; 

int procura(int *v, int *u ){ 
 
    for(int i = 0; i < 5; i++){
    
        for(int j = 0; j < 5; j++){
            
            if(v[i]==u[j]){
                
                printf("o número %d encontra-se nas duas listas\n", v[i]);
           
            }

        }
        
    }

}

int main(){


int *vptr = vetorA; 
int *uptr = vetorB;

procura(uptr,vptr);

    getchar();
    return 0;
}