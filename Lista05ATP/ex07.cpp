/*Crie uma função calcular_circulo() que calcule o perímetro e a área e os armazena
em duas variáveis (use ponteiros de endereços).*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

float pi = 3.1415f;
float area, perimetro;
float *ptr_area, *ptr_perimetro;

float a_circulo(float raio){

    area = pi * pow(raio,2);

    ptr_area = &area;

    return *ptr_area;


}

float p_circulo(float raio){

    perimetro = 2 * pi * raio;

    ptr_perimetro = &perimetro;

    return *ptr_perimetro;


}


int main(){

    float r;

    printf("Digite um raio");
    scanf("%f", &r);

    a_circulo(r);
    p_circulo(r);
    printf("a área do cículo é %.2f \n", *ptr_area);
    printf("o perímetro do cículo é %.2f \n", *ptr_perimetro);

    getchar();
    return 0;

}