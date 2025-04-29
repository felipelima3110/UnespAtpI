/*Crie uma função distancia() que recebe coordenadas (x1, y1) e (x2, y2) e retorna a
distância euclidiana entre os pontos. Use sqrt() da biblioteca <math.h>. para achar a
raíz quadrada.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float distancia(float *x, float *y){

    float radicando, resultado;

    radicando = pow(*x,2) + pow(*y,2);

    resultado = sqrt(radicando);

    return resultado;
}

int main(){

    float x1, x2, y1, y2;


    printf("digite x");
    scanf("%f", &x1);
    printf("digite x");
    scanf("%f", &x2);
    printf("digite y");
    scanf("%f", &y1);
    printf("digite x");
    scanf("%f", &y2);

    float res_x = x2 - x1;
    float res_y = y2 - y1;

    float *ptr_x = res_x;
    float


    

    printf("a diagonal mínima entre x e y é: %f \n", resultado);


    getchar();
    return 0;
}
