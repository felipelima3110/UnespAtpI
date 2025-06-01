/*
3. Repita o exercício anterior, mas dessa vez o valor ‘-1’ define que não haverá mais
valores a serem armazenados no vetor (para tal, use o realloc).
*/
#include<stdio.h>
#include<stdlib.h>

int exibir(int *v, int *tam){

    for(int i = 0; i < *tam; i++){
        printf("[%d] ", v[i]);
    }
}

int main(){

    int tamanho;
    int *ptrt;
    int *novotamanho;
    int *v = NULL;
    int *u = NULL;

    printf("Digite o tamanho do vetor\n");
    scanf("%d", &tamanho);

    ptrt = &tamanho;

    v = (int*) malloc(*ptrt * sizeof(int));

    for(int i = 0; i < *ptrt; i++){
        int entrada;
        printf("Digite o %d º elemento\n", i+1);
        scanf("%d", &entrada);

        if(entrada!=-1){
            v[i] = entrada;
            printf("você adicionou o elemento: %d\n", v[i]);
            printf("\n");

        }else{
            
            u = (int*)realloc(v, (i) * sizeof(int));
            novotamanho = &i;
            break;
        }
        
    }
    
    printf("Os elementos do vetor são:\n");
    exibir(u,novotamanho);


    free(v);
    free(u);

    getchar();
    return 0;
}