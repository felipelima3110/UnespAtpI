/*Use incremento para realizar o exercício anterior com apenas duas variáveis.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n1, n2;

    printf("digite o primeiro número: ");
    scanf("%d", &n1);
    printf("digite o segundo número: ");
    scanf("%d", &n2);
    n1 = n1 + n2;
    printf("O resultado da soma é: %d", n1);

    getchar();
    return 0;


}
