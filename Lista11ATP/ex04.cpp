#include<stdio.h>
#include<fstream>
#include<string.h>
#include<time.h>

int preencher(int t, FILE *f){
    int i,j, soma, resultado;
    int** matriz;
    int* linha;
    srand(time(NULL));

    matriz = (int**)malloc(t * sizeof(int*));
    for(int i = 0; i < t; i++)
    matriz[i] = (int*) malloc(t * sizeof(int));
    if(matriz ==NULL){
        printf("Teve erro na alocação, fera");
    }


    for(i =0; i<t; i++){
        for(j = 0; j<t; j++){
            matriz[i][j] = 1 + rand()%98;
            resultado = fprintf(f, "[%d ]", matriz[i][j]);
            if (resultado == EOF)
            printf("Erro na gravação\n");
            
        }
        fprintf(f, "\n");
    }
    for (int i = 0; i < t; i++) free(matriz[i]);
}
int main(){

    FILE *f;
    int i, j, soma, resultado;
    
    int matriz1[2][2] = {
        {1,2},{3,4}
    };
        int matriz2[2][2] = {
        {11,22},{33,44}
    };

    f = fopen("mat3.txt", "w");
    if(f == NULL){
        printf("Problemas na criação do arquivo\n");
        return 1;
    }

    for(i =0; i<2; i++){
        for(j = 0; j<2; j++){
            soma = 0;
            soma = matriz1[i][j] + matriz2[i][j];
            resultado = fprintf(f, "%d,", soma);
                if (resultado == EOF)
                    printf("Erro na gravação\n");
                
        }
        fprintf(f, "\n");
    }
    preencher(4,f);

    fclose(f);
    getchar();
    return 0;
}