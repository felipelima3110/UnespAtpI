#include <stdio.h>
#include <stdlib.h>
int main() {
/*
int vetor[3] = {10,20,30};
*/
int matriz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
int* b = &matriz[0][0];

//for (int j = 0; j < 3; j++) {
//printf("%d ", b[0][j]);
int i = 0;
int j = 2;
printf("%d", *(b + i*3 + j));
//}
getchar();
return 0;
}