/* escreva um programa que leia 15 números inteiros e guarde-os em um vetor. No final,
mostre o vetor inteiro na tela e em seguida mostre em que posições foram
digitados valores que são múltiplos de 10. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    int vetor[15];
    int posicoesMultiplosDe10[15] = {0};

    // Solicitando valores para o usuário
    printf("\n");
    for (int i = 1; i <= 15; i++)
    {
        printf("Valor %i: ", i);
        scanf("%i", &vetor[i]);
        // Se valor do vetor[i] for múltiplo de 10, a posição é armazenada em outro vetor
        if (vetor[i] % 10 == 0)
        {
            posicoesMultiplosDe10[i] = i;
        }
    }

    // Mostrando os resultados
    system("cls");
    for (int i = 1; i <= 15; i++)
    {
        printf("%i ", vetor[i]);
    }
    printf("\n\n");
    printf("Posicoes com valores multiplos de 10: ");
    for (int i = 1; i < 16; i++)
    {
        if ((posicoesMultiplosDe10[i] != 0) && ((posicoesMultiplosDe10[i] > 0) && (posicoesMultiplosDe10[i] < 16)))
        {
            printf("%i ", posicoesMultiplosDe10[i]);
        }
    }
    printf("\n");
    
    return 0;
}