//meu escopo começa aqui, onde o programa compila primeiro?sequencialmente!
#include <stdio.h> //aqui
#include <stdlib.h> //depois aqui... etc
#include <time.h> //tempo
#include <string.h> //string

int ja_sorteado(int numeros[], int qtd, int num) { //ah e aqui verifica se ja foi sorteado de acordo com array numeros, checando elemento a elemento
    for (int i = 0; i < qtd; i++) {
        if (numeros[i] == num)
            return 1; //neste caso, é ideia de algebra booleana
    }
    return 0; //entao, tem que retornar isto para dar certo
}

void gerar_numeros(int numeros[], int qtd, int min, int max) { //sim
    int count = 0; //dava pra meter um for aqui, mas enfim
    while (count < qtd) {
        int num = rand() % (max - min + 1) + min; //sorteia um número entre o valor minimo e maximo
        if (!ja_sorteado(numeros, count, num)) { //se AQUI for false, entra na condicao (APENAS BOOLEANS OU COMPARAÇÕES) ex: 'string' != 'valor'; ou if (!boolean)
            numeros[count++] = num; //enfim é isso, continuando
        }
    }
}

void gerar_cartela(FILE *arquivo) { //CONTINUANDO
    //enfim
    int B[5], I[5], N[4], G[5], O[5]; //tem o FREE no meio
    /*
    B I N G O
    B I N G O
    B I FREE G O
    B I N G O
    B I N G O
    */
   //ai eu gero os números, vou mostrar esta funcao antes de continuarmos
   //entenderam como ele gera os numeros entao? cria a partir de aleatorios e checa se ja foi repetido, a partir de valores minimos e maximos
    gerar_numeros(B, 5, 1, 15); //Qual 'coluna' é (B), quantidade (5), valor mínimo (1) e valor máximo (15)
    //faz isto para todos
    gerar_numeros(I, 5, 16, 30);
    gerar_numeros(N, 4, 31, 45); //so aqui é 4
    gerar_numeros(G, 5, 46, 60);
    gerar_numeros(O, 5, 61, 75);

    //laço para printar todas as linhas da cartela
    for (int linha = 0; linha < 5; linha++) { //é 5x5, entao linha < 5
        fprintf(arquivo, "%d,", B[linha]); //printo aonde? no arquivo (variavel de arquivo), printo o que? vetor B, posicao da linha (vai de 0 até 4, pois tem 5 elementos)
        fprintf(arquivo, "%d,", I[linha]); //mesma coisa! entendeu? dúvidas? bem similar ao printf né
        
        //basicamente, se for o meio, printa FREE
        if (linha == 2)
            fprintf(arquivo, "FREE,");
        else if (linha < 2)
            fprintf(arquivo, "%d,", N[linha]);
        else
            fprintf(arquivo, "%d,", N[linha - 1]); 
        
            //mesma logica do B e I
        fprintf(arquivo, "%d,", G[linha]);
        fprintf(arquivo, "%d", O[linha]);

        //printa uma quebra de linha
        fprintf(arquivo, "\n");
    }

    fprintf(arquivo, "\n");
}

int main() {
    //numero de cartelas que eu quero gerar
    int cartelas;
    printf("Digite a quantidade de cartelas a serem geradas:\n");
    scanf("%d", &cartelas);

    srand(time(NULL)); //valor aleatorio de acordo com tempo (seed) - aquilo que ele explicou


    FILE *arquivo = fopen("cartelas.csv", "w"); //aqui eu abro um arquivo, chamado cartelas.csv, e vou escrever nele
    /*
    fopen - tipos de acesso: w - write (escrever)
    fopen - tipos de acesso: r - read (LER) , etc
    */

   //verifica se criou o arquivo
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    //gera os arquivos a partir de funções (ja vou la)
    for (int i = 0; i < cartelas; i++) { //quantidade de cartelas definido pela variavel cartelas
        gerar_cartela(arquivo); //ela recebe o arquivo como argumento
    }
    //entao, cada cartela é impressa assim, e a quantidade é definida acima pelo laço 
    //CSV é excel
    //vou gerar um

    fclose(arquivo); //fecho o arquivo (tipo aquele free da alocacao dinamica) - sim, mas é conceitual
    printf("Cartelas geradas com sucesso em 'cartelas.csv'!\n"); //printo que deu certo
    //vamos ate as funcoes
    return 0;
}
