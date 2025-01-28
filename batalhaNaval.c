#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int opcao,tabuleiro[LINHAS][COLUNAS] = {
    {3,3,3,3,0,0,0,0,0,0},
    {0,0,0,0,3,0,0,0,0,0},
    {0,0,0,0,3,0,0,0,0,0},
    {0,0,0,0,3,0,0,0,0,0},
    {0,0,0,0,3,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,3,0,0,3,0,0,0},
    {0,0,3,0,0,0,0,3,0,0},
    {0,3,0,0,0,0,0,0,3,0},
    {3,0,0,0,0,0,0,0,0,3}
  };
      
    printf("Digite uma opção para ativar uma habilidade especial (1-cone, 2-octaedro, 3-cruz): ");
    scanf("%d", &opcao);

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
           
            
        }
         printf("\n");
    }
      printf("\n");
    switch (opcao)
    {
    case 1:
        for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
         
      int tabuleiro[LINHAS][COLUNAS] = {
                {3,3,3,3,0,0,0,0,0,0},
                {0,0,0,0,3,0,0,0,0,0},
                {0,0,0,0,3,0,0,1,0,0},
                {0,0,0,0,3,0,1,1,1,0},
                {0,0,0,0,3,1,1,1,1,1},
                {0,0,0,0,0,0,0,0,0,0},
                {0,0,0,3,0,0,3,0,0,0},
                {0,0,3,0,0,0,0,3,0,0},
                {0,3,0,0,0,0,0,0,3,0},
                {3,0,0,0,0,0,0,0,0,3}
            };
             printf("%d ", tabuleiro[i][j]);
            
                    }

                      printf("\n");
                }
        break;

        case 2:
        for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
         
      int tabuleiro[LINHAS][COLUNAS] = {
                {3,3,3,3,0,0,0,1,0,0},
                {0,0,0,0,3,0,1,1,1,0},
                {0,0,0,0,3,0,0,1,0,0},
                {0,0,0,0,3,0,0,0,0,0},
                {0,0,0,0,3,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0},
                {0,0,0,3,0,0,3,0,0,0},
                {0,0,3,0,0,0,0,3,0,0},
                {0,3,0,0,0,0,0,0,3,0},
                {3,0,0,0,0,0,0,0,0,3}
            };
             printf("%d ", tabuleiro[i][j]);
            
                    }

                      printf("\n");
                }
        break;
      case 3:
        for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
         
      int tabuleiro[LINHAS][COLUNAS] = {
                {3,3,3,3,0,0,0,1,0,0},
                {0,0,0,0,3,1,1,1,1,1},
                {0,0,0,0,3,0,0,1,0,0},
                {0,0,0,0,3,0,0,0,0,0},
                {0,0,0,0,3,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0},
                {0,0,0,3,0,0,3,0,0,0},
                {0,0,3,0,0,0,0,3,0,0},
                {0,3,0,0,0,0,0,0,3,0},
                {3,0,0,0,0,0,0,0,0,3}
            };
             printf("%d ", tabuleiro[i][j]);
            
                    }

                      printf("\n");
                }
        break;
    
    
    default:
     printf("Opção inválida\n");
        break;
    }
      return 0;
}

 

    
    
