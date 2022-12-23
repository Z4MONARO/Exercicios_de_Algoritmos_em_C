/* Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou
ÍMPAR. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int numero;

    // Solicitando número ao usuário
    printf("Digite um numero: ");
    scanf("%i", &numero);

    // Verificando se o número é PAR ou ÍMPAR    
    // Se o resto da divisão for 0, o número é PAR
    printf("\n");
    if (numero % 2 == 0)
    {
        // Imprime o resultado para o usuário
        printf("O numero %i e PAR.\n", numero);
    }
    // Senão, o número é ÍMPAR
    else
    {
        // Imprime o resultado para o usuário
        printf("O numero %i e IMPAR.\n", numero);
    }

    return 0;
}