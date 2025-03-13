#include <stdio.h>

int main (){

//variaveis
int tabuleiro [10][10] = {0};
printf("Tabuleiro de batalha naval sem peças: \n");   
for (int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        printf("%d", tabuleiro[i][j]);
    }
    printf("\n");

}

int tamanho_navio = 3;
//tamanho navios

int linha_navio_horizontal = 5;
int coluna_navio_horizontal = 6;

for (int i = 0; i < tamanho_navio; i++)
{
    tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] = 3; 
} 
 
//define o posicionamento dos navios

int linha_navio_vertical = 2;
int coluna_navio_vertical = 4;

for (int i = 0; i < tamanho_navio; i++)
{
    tabuleiro[linha_navio_vertical + i][coluna_navio_vertical] = 3;
}

printf("\nTabuleiro de batalha naval com as peças:\n");
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);     // Mostra cada posição do tabuleiro
    }
    printf("\n");
}







    return 0;
}