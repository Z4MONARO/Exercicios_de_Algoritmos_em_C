/* Desenvolva um programa que mostre na tela a seguinte contagem:
    100 95 90 85 80 ... 0 Acabou! */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Imprimindo contagem
    for (int i = 100; i > -1; i -= 5)
    {
        printf("%i ", i);
    }
    printf("Acabou!\n");

    return 0;
}