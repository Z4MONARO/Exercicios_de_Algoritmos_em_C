/* Crie um programa que mostre na tela a seguinte contagem, usando a estrutura
"faça enquanto"
    0 3 6 9 12 15 18 21 24 27 30 Acabou! */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int i = 0;

    // Imprimindo contagem
    printf("\n");
    do
    {
        printf("%i ", i);
        i += 3;
    }
    while (i <= 30);
    printf("Acabou!\n");

    return 0;
}