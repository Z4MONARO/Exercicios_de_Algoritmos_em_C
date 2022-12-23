/* Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses
valores para um procedimento Somador() que vai calcular e mostrar a soma entre
eles. */

#include <stdio.h>
#include <stdlib.h>

void somador(int n1, int n2);

int main(void)
{
    // Declaração de variáveis
    int numero1 = 0, numero2 = 0;

    // Solicitando números para o usuário
    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%i", &numero2);

    // Passando números na função somador
    printf("\n");
    somador(numero1, numero2);

    return 0;
}

// Função que exibe a soma de dois números inteiros
void somador(int n1, int n2)
{
    printf("A soma entre %i e %i vale %i\n", n1, n2, (n1 + n2));
}