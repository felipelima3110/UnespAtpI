/*Crie uma função celsius_para_fahrenheit() que converte Celsius para Fahrenheit
usando a fórmula:
F = (C × 9/5) + 32.*/

#include<stdio.h>
#include<stdlib.h>

float c_para_f(float c){

    float f = (c *(9/5)) + 32;

    return printf("A temperatura convertida é de %.2f°Fahrenheit", f);

}

int main(){

    float tcelsius;

    printf("Digite a temperatura em °C\n");
    scanf("%f", &tcelsius);

    c_para_f(tcelsius);

    return 0;
}