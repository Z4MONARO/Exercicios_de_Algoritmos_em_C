/* Desenvolva um programa usando a estrutura "para" que mostre na tela a 
seguinte contagem:
    0 5 10 15 20 25 30 35 40 Acabou! */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Imprimindo contagem
    printf("\n");
    for (int i = 0; i <= 40; i += 5)
    {
        printf("%i ", i);
    }
    printf("Acabou!\n");

    return 0;
}