/*
4. Dado um vetor dinâmico V de n inteiros, crie uma função que retorne um novo vetor
S alocado dinamicamente que contenha apenas os elementos pares de V.
*/
#include<stdio.h>
#include<stdlib.h>

int novov(int *v){
    
    int contador =0;
    int* vpar = NULL;

    while(contador<=(sizeof(*v))){

        if(v[contador]%2==0){
            
            vpar = (int *)malloc(contador * sizeof(int));
            vpar[contador] = v[contador];
            printf("[%d]", vpar[contador]);
        }
        contador++;
        
    }
    free(vpar);

}
int main(){

    int *novovetor = NULL;
    int u[] = {10,20,30,49,54};

    novov(u); 
    free(novovetor);

    getchar();
    return 0;
}