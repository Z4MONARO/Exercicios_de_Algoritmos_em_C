/* Escreva um programa que mostre na tela a seguinte contagem:
    6 7 8 9 10 11 Acabou! */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Imprimindo contagem
    for (int i = 6; i < 12; i++)
    {
        printf("%i ", i);
    }
    printf("Acabou!\n");

    return 0;
}