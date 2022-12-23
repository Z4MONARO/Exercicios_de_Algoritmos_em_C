/* [DESAFIO] Vamos melhorar o jogo que fizemos no exercício 32. A partir de
agora, o computador vai sortear um número entre 1 e 10 e o jogador vai ter 4
tentativas para tentar acertar. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void)
{
    // Limpando a tela para começar apenas com o programa
    system("cls");

    // Declaração de variáveis
    int adivinha = 6, i = 0;

    // Escolhendo um número aleatoriamente
    // Função srand(time(NULL)) serve para que o programa não repita números
    srand(time(NULL));
    int numeroSorteado = (rand() % 10) + 1;

    // Enquanto o número passado pelo usuário não for igual ao número sorteado
    for (i = 4 ; i > 0; i--)
    {
        printf("Qual o numero? ");
        scanf("%i", &adivinha);

        // Se o número do usuário for igual ao número sorteado
        printf("\n");
        if (adivinha == numeroSorteado)
        {
            // Imprime o resultado e sai do loop
            printf("Parabens! Voce acertou! :)\n");
            break;
        }
        // Senão, informa que a adivinha foi incorreta e reinicia o loop
        else if (adivinha != numeroSorteado)
        {
            printf("%i tentativa(s) restante(s).\n", (i - 1));            
        }       

        // Limpa a tela e volta para o início do loop
        Sleep(2000);
        system("cls");
    }

    if (i == 0)
    {
        printf("GAME OVER!\n");
    }

    Sleep(2000);
    return 0;
}