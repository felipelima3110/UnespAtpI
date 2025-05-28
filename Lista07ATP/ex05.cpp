#include <stdio.h>
#include <stdlib.h>

int main(){
int vetor[] = {1, 2, 3, 4, 5};
int tamanho = sizeof(vetor) /sizeof(vetor[0]);
int temp;
int *pt_tamanho = &tamanho;
int *pt_temp = &temp;

printf("vetor original: ");
    for (int i = 0; i < *pt_tamanho; i++){
    printf("%d ", vetor[i]);

}

printf("\n");

for (int i = 0; i < *pt_tamanho / 2; i++){
    *pt_temp = vetor[i];
    vetor[i] = vetor[*pt_tamanho -1 - i];
    vetor[*pt_tamanho -1 - i] = *pt_temp;
}

printf("Vetor invertido: ");
for (int i = 0; i < *pt_tamanho; i++){
    printf("%d ", vetor[i]);
}
printf("\n");

getchar();
return 0;
}