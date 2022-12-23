/* Desenvolva uma lógica que leia os valores de A, B e C de uma equação do
segundo grau e mostre o valor de delta. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Declaração de variáveis
    float A, B, C, delta;

    // Solicitando valores da equação ao usuário
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    // Calculando o valor de delta
    delta = pow(B, 2) + (-4 * A * C);

    // Imprimindo o resultado
    printf("Com A valendo %0.2f, B valendo %0.2f e C valendo %0.2f, o valor de delta sera de %0.2f\n", A, B, C, delta);

    return 0;
}