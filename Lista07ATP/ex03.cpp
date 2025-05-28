#include <stdio.h>
#include <stdlib.h>

bool encontra(int *v, int t, int *e){

    bool encontrado = false;

for(int i =0; i < t; i++){
    if(v[i]==*e){
        encontrado = true;
    }
}
	return encontrado;
}


int main(){

int tamanho, elemento;
int vetorA[5] = {15,30,40,45,60};
int *ptrv = vetorA;
int *ptre;

printf("Digite o tamanho do vetor");
scanf("%d", &tamanho);
printf("Digite o elemento a se pesquisar");
scanf("%d", &elemento);

ptre = &elemento;

if(encontra(ptrv, tamanho, ptre)){
    printf("O elemento %i  no vetor de tamanho %d  foi Encontrado!", *ptre, tamanho);
} else{
    printf("Não encontrado");
}

printf("\n");

getchar();
return 0;
}