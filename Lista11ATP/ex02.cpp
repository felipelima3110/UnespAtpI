#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double arredonda(double valor, int casas =0){
    int fator = 1;
    for(int i = 0; i<casas; i++){
        fator *=10;
    } 
    return(double)(int)(valor *fator + 0.5)/(double)fator;
}

int main(int argc, char *argv[]){
    printf("numero de entradas = %d\n", argc);
    printf("executavel=%s\n", argv[0]);
    printf("n1=%s\n", argv[1]);
    printf("n2=%s\n", argv[2]);

    double x;
    int basedez,casa;

    x = atof(argv[1]);
    casa = atoi(argv[2]);

    printf("%f", arredonda(x,casa));

    getchar();
    return 0 ;
}