/* [DESAFIO] Crie um jogo de JoKenPo (Pedra-Papel-Tesoura) */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declarção de variáveis
    int player1, player2, scorePlayer1 = 0, scorePlayer2 = 0, vencedor;

    // Começando o jogo
    // Cada jogo possuirá 3 rodadas
    for (int i = 0; i < 3; i++)
    {
        // Solicitando aos players suas jogadas
        printf("PLAYER 1: \n [0] Pedra\n [1] Papel\n [2] Tesoura\n\n");
        scanf("%i", &player1);
        printf("PLAYER 2: \n [0] Pedra\n [1] Papel\n [2] Tesoura\n\n");
        scanf("%i", &player2);

        // Analizando jogadas e atribuindo pontuações
        printf("\n");
        // Se os jogadores jogarem a mesma coisa, nenhum ponto será registrado 
        if (player1 == player2)
        {
            printf("Empate! Nenhum dos jogares pontuou!\n");
        }
        // Senão, se o jogador 1 jogou PEDRA x TESOURA ou PAPEL x PEDRA ou TESOURA x PAPEL, a pontuação do jogador 1 é incrementada
        else if (((player1 == 0) && (player2 == 2)) || ((player1 == 1) && (player2 == 0)) || ((player1 == 2) && (player2 == 1)))
        {
            scorePlayer1++;
            printf("O jogador 1 pontuou!\n");
        }
        // Senão, se o jogador 2 jogou PEDRA x TESOURA ou PAPEL x PEDRA ou TESOURA x PAPEL, a pontuação do jogador 2 é incrementada
        else if (((player2 == 0) && (player1 == 2)) || ((player2 == 1) && (player1 == 0)) || ((player2 == 2) && (player1 == 1)))
        {
            scorePlayer2++;
            printf("O jogador 2 pontuou!\n");
        }

        Sleep(5000);
        system("cls");
    }

    // Verificando quem venceu o jogo
    if (scorePlayer1 > scorePlayer2)
    {
        vencedor = 1;
    }
    else
    {
        vencedor = 2;
    }

    // Mostrando os resultado de cada jogador para o usuário
    printf("Fim de jogo! O jogador 1 fez %i pontos, e o jogador 2 fez %i pontos. O jogador %i venceu!\n", scorePlayer1, scorePlayer2, vencedor);

    return 0;
}