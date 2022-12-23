/* Faça um algoritmo que mostre na tela a seguinte contagem:
    10 9 8 7 6 5 4 3 Acabou! */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Imprimindo contagem
    for (int i = 10; i > 2; i--)
    {
        printf("%i ", i);
    }
    printf("Acabou!\n");

    return 0;
}