#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main () {

    int tabuleiro[LINHAS][COLUNAS];

    //INICIALIZAR TABULEIRO
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = 0;
        }
    }

    //ATAQUES ESPECIAIS
    
    //CONE [2]
    // Ponta do cone
    tabuleiro[6][4] = 2;  
    // Linha do meio (3 posições)
    for (int i = -1; i <= 1; i++) { 
        tabuleiro[7][4 + i] = 2;
    }
    // Base do cone (5 posições)
    for (int j = -2; j <= 2; j++) {  
        tabuleiro[8][4 + j] = 2;
    }

    //CRUZ [4]
    for (int i = 0; i < 5; i++) {
        tabuleiro[3][0 + i] = 4;
        tabuleiro[1 + i][2] = 4;
    }
    
    //OCTAEDRO [6]
    for (int i = 0; i < 3; i++) {
        tabuleiro[1][6 + i] = 6;
        tabuleiro[0 + i][7] = 6;
    }

    //FORMATAÇÃO E EXIBIÇÃO DO TABULEIRO
    printf("=~~= Batalha x Naval =~~=\n");
    printf("    ");

    for (int i = 0; i < COLUNAS; i++) {
        printf("%c ", 'A' + i);
    }
    printf("\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < COLUNAS; j++){
        printf("%2d", tabuleiro[i][j]);
            }
     printf("\n");
        }
        
    return 0;
}