/* Desenvolva um programa que faça o sorteio de 20 números entre 0 e 10 e
mostre na tela:
    a) Quais foram os números sorteados
    b) Quantos números estão acima de 5
    c) Quantos números são divisíveis por 3 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // Declaração de variáveis
    int numerosSorteados[20];
    int numerosMaioresQue5 = 0, numerosDivisiveisPor3 = 0;

    // Sorteando números aleatoriamente
    // Essa função serve para que a função rand() não gerem os mesmos números após cada execução
    srand(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        // Função rand() gerará números em um intervalo de 10
        numerosSorteados[i] = (rand() % 10) + 1;
        // Verificando se o número sorteado é maior que 5
        if (numerosSorteados[i] > 5)
        {
            numerosMaioresQue5++;
        }
        // Verificando se o número sorteado é divisível por 3
        if (numerosSorteados[i] % 3 == 0)
        {
            numerosDivisiveisPor3++;
        }
    }

    // Imprimindo os resultados
    printf("\n");
    printf("Os numeros sorteados sao: ");
    for (int i = 0; i < 20; i++)
    {
        printf("[%i] ", numerosSorteados[i]);
    }
    printf("\n\n");
    printf("Destes, %i sao maiores que 5 e %i sao divisiveis por 3.\n", numerosMaioresQue5, numerosDivisiveisPor3);

    return 0;
}