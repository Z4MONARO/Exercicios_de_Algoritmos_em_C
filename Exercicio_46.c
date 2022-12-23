/* Crie um programa que calcule e mostre na tela o resultado da soma entre 6 +
8 + 10 + 12 + 14 + ... + 98 + 100. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int soma = 0;

    // Calculando soma
    for (int i = 6; i <= 100; i += 2)
    {
        soma = soma + i;
    }

    // Imprimindo resultado
    printf("A soma de 6 + 8 + 10 + 12 + 14 + ... + 98 + 100 resulta em %i\n", soma);

    return 0;
}