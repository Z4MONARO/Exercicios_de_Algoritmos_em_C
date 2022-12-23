/* Crie um aplicativo que mostre na tela a seguinte contagem:
    0 3 6 9 12 15 18 Acabou! */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Imprimindo contagem
    for (int i = 0; i < 21; i+=3)
    {
        printf("%i ", i);
    }
    printf("Acabou!\n");

    return 0;
}