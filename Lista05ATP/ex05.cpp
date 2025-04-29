/*Crie uma função calcula_imc() que recebe peso (kg) e altura (m) e retorna um inteiro
ao depender do Índice de Massa Corporal. Classifique o resultado:
Abaixo de 18.5 → Magreza: 0
18.5–24.9 → Saudável: 1
25.0–29.9 → Sobrepeso: 2
Acima de 30.0 → Obesidade: 3
Faça uma segunda função imprima_imc()que chame a primeira e imprima o
resultado por escrito.
IMC = peso/altura²*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int imc(float peso, float altura){

    float imc = peso/(pow(altura,2));

    if(imc < 18.5){
        return 0;
    } else if (imc >= 18.5 && imc < 25){
        return 1;
    } else if (imc >= 25 && imc < 30){
        return 2;
    } else{
        return 3;
    }

}

void status(int imc){

    if(imc == 0){
        printf("Magreza");
    } else if (imc == 1){
        printf("Saudável");
    }else if (imc == 2){
        printf("Sobrepeso");
    }else if (imc ==3){
        printf("Obesidade");
    }

}


int main(){

    float peso, altura;

    printf("Por favor informe o seu peso (em Kg)\n");
    scanf("%f", &peso);
    printf("Por favor informe a sua altura (em m)\n");
    scanf("%f", &altura);
    
    status(imc(peso, altura));

    getchar();
    return 0;
}