/*Crie uma função quadrática com variáveis a, b e c declaradas globalmente.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float a = 5;
float b = 2;
float c = 1;


float fun_quadratica(float x){

    float y = a * pow(x,2) + b * x + c;
    return printf("%.2f", y);

}


int main(){

    fun_quadratica(1);

    return 0;
}