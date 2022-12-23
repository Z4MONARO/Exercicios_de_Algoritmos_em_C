/* [DESAFIO] Crie um jogo onde o computador vai sortear um número 1 e 5, e o
jogador vai tentar descobrir qual foi o valor sorteado. */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(void)
{
    // Limpando a tela para começar apenas com o programa
    system("cls");

    // Declaração de variáveis
    int adivinha = 6;

    // Escolhendo um número aleatoriamente
    srand(time(NULL));
    int numeroSorteado = (rand() % 5) + 1;

    // Enquanto o número passado pelo usuário não for igual ao número sorteado
    while (adivinha != numeroSorteado)
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
            printf("Ainda nao... Tente novamente!\n");
        }

        // Limpa a tela e volta para o início do loop
        Sleep(2000);
        system("cls");
    }

    Sleep(2000);
    return 0;
}