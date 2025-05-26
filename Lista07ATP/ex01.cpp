/*Escreva um programa que receba uma string e imprime a primeira letra pela no
formato:
<palavra> comeca com <letra>*/
#include<iostream>
#include <string>

using namespace std;

string nome = "Felipe";

int main(){

    printf("<palavra> comeca com <%c>", nome[0]);


    getchar();
    return 0;
}
