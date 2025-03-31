#include<stdio.h>
#include<stdlib.h>

int main(){

    int idade, tempo;

    printf("Digite a idade da pessoa==>>");
    scanf("%d", &idade);

    printf("Digite o tempo de serviço==>>");
    scanf("%d", &tempo);

    if (idade >= 65 || tempo >= 30){
        printf("pode se aposentar");
    } else if (idade >= 60 && tempo >= 25){
        printf("Pode se aposentar");
    } else {
        printf("infelizmente deverá trabalhar/esperar mais :/");
    }

    getchar();
    return 0;
}