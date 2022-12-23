/* Escreva um programa que leia um número qualquer e mostre a tabuada desse
número, usando a estrutura "para".
Ex: Digite um valor: 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15 ... */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int numero = 0;

    // Solicitando número ao usuário
    printf("Digite um valor: ");
    scanf("%i", &numero);

    // Mostrando a tabuada do número
    printf("\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%i x %i = %i\n", numero, i, (numero * i));
    }

    return 0;
}