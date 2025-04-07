#include <stdio.h>
#include <stdlib.h>

int main (){

    int a,b, resultado, operacao = 1;

    while(operacao != 0){

        printf("**************************\n");

        printf("Digite a operacao desejada\n1 - soma\n2 - subtração\n3 - multiplicação\n4 - divisão\n0 - sair\n");
        printf("**************************\n");
        scanf("%d", &operacao);

        if (operacao != 0){
            printf("Digite a ", &a);
            scanf("%d", &a);
            printf("Digite b ", &b);
            scanf("%d", &b);
            if (operacao >4 || operacao < 0){
                printf("Operação inválida");
            } else if (operacao == 1){
                resultado = a+b;
            } else if (operacao ==2){
                resultado = abs(a-b);
            } else if (operacao ==3){
                resultado = a*b;
            } else if (operacao ==4){
                resultado = a/b;
            } 

            printf("O resultado é %d \n", resultado);

        } else {
            printf("Tchau!");
        }

    }

    getchar();
    return 0;
}