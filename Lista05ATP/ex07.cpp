/*Crie uma função calcular_circulo() que calcule o perímetro e a área e os armazena
em duas variáveis (use ponteiros de endereços).*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

float pi = 3.1415f;
float area;
float *ptr_area;

float circulo(float raio){

    area = pi * pow(raio,2);

    ptr_area = &area;

    return *ptr_area;


}


int main(){

    float r;

    printf("Digite um raio");
    scanf("%f", &r);

    circulo(r);
    printf("%f", *ptr_area);

    getchar();
    return 0;

}