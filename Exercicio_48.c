/* Faça um programa que leia 7 números inteiros e no final mostre o somatório
entre eles. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int numeros[7];
    int soma = 0;

    // Solicitando valores para o usuário
    for (int i = 0; i < 7; i++)
    {
        printf("Digite o %i valor: ", (i + 1));
        scanf("%i", &numeros[i]);
        // Realizando a soma dos valores
        soma = soma + numeros[i];
    }

    // Imprimindo resultado
    printf("\n");
    printf("A soma dos valores digitados resulta em %i\n", soma);

    return 0;
}