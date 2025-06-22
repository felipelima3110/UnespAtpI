/*
Escreva um programa que aloque um array de inteiros dinamicamente. O tamanho do array deve ser
fornecido por meio do teclado. Os elementos do array devem ser valores atribuídos a partir da entrada
pelo teclado. Imprima os valores do array. Em seguida, realoque a memória do array à metade do
número atual de elementos. Imprima os valores restantes do array para confirmar se eles correspondem
aos valores da primeira metade do array original.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int taml, tamc;
    int ligado = 0;
    int **matriz = NULL;
    int **matriz2 = NULL;
    int *linha = NULL;

    while(ligado!= -1){
        printf("digite o número de linhas da matriz");
        scanf("%d", &taml);
        printf("digite o número de colunas");
        scanf("%d", &tamc);

        matriz = (int**) malloc(taml * sizeof(int*));
        matriz2 = (int**) malloc(taml * sizeof(int*));

        if((matriz && matriz2)==true){
            printf("alocação feita com sucesso!");
        }else{
            printf("algo deu errado na alocação");
        }
        for(int i = 0; i < tamc;i++) {
            matriz[i] = (int*) malloc(tamc * sizeof(int));
        }

        for(int i =0; i< taml; i++){
            for(int j=0; j< tamc; j++){
                printf("Digite o elemento[%d][%d]", i,j);
                scanf("%d", &matriz[i][j]);
            }
        }

        for(int i =0; i< taml; i++){
            for(int j=0; j< tamc; j++){
                printf(" [%d]  ", matriz[i][j]);
            }
            printf("\n");
        }
        for(int i = 0; i < taml; i++){
            for(int j=0; j < tamc;j++){
                if(i<= (taml/2)){
                    matriz[i+taml] = (int*) realloc(matriz, tamc * sizeof(int));

                }else{
                    matriz2[i+ taml] = (int*) malloc(tamc * sizeof(int));
                }

            }

        }
        for(int i =0; i< taml; i++){
            for(int j=0; j< tamc; j++){

                    printf(" [%d] 1 ", matriz[i][j]);
        }
            printf("\n");
        }
        for(int i =0; i< taml; i++){
            for(int j=0; j< tamc; j++){

                    printf(" [%d] 2 ", matriz2[i][j]);
            }
            printf("\n");


    }



    getchar();
    return 0;
}}
