/* Faça um programa que preencha automaticamente um vetor númerico com 8
psoicões, conforme abaixo:
    [999][999][999][999][999][999][999][999]
      0    1    2    3    4    5    6    7 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int vetor[8];

    // Atribuindo o valor e imprimindo o vetor
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        vetor[i] = 999;
        printf("%i ", vetor[i]);
    }
    printf("\n");

    return 0;
}