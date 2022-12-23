/* Desenvolva um algoritmo que mostre uma contagem regressiva de 30 até 1,
marcando os números que forem divisíveis por 4, exatamente como mostrado abaixo:
30 29 [28] 27 27 25 [24] 23 22 21 [20] 19 18 17 [16]... */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Imprimindo contagem
    printf("\n");
    for (int i = 30; i >= 1; i--)
    {
        if (i % 4 == 0)
        {
            printf("[%i] ", i);
        }
        else
        {
            printf("%i ", i);
        }
    }
    printf("\n");

    return 0;
}