/* Crie um programa que leia 6 números inteiros e no final mostre quantos deeles
são pares e quantos são ímpares. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int numeros[6];
    int pares = 0, impares = 0;

    // Solicitando valores ao usuário
    for (int i = 0; i < 6; i++)
    {
        printf("Digite o %i valor: ", (i + 1));
        scanf("%i", &numeros[i]);

        // Verificando se o número é PAR ou ÍMPAR
        if (numeros[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    // Imprimindo resultado
    printf("\n");
    printf("Dos 6 valores digitados, %i sao PARES e %i sao IMPARES.\n", pares, impares);

    return 0;
}