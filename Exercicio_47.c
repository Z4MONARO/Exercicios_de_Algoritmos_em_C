/* Desenvolva um aplicativo que mostre na tela o resultado da expressão 500 +
450 + 400 + 350 + 300 + ... + 50 + 0. */

#include <stdio.h>
#include <stdio.h>

int main(void)
{
    // Declaração de variáveis
    int soma = 0;

    // Calculando a soma
    for (int i = 500; i > 0; i -= 50)
    {
        soma = soma + i;
    }

    // Imprimindo resultado
    printf("\n");
    printf("A soma da expressao 500 + 450 + 400 + 350 + 300 + ... + 50 + 0 resulta em %i\n", soma);

    return 0;
}