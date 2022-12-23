/* Faça um programa que possua uma função chamada Potencia(), que vai receber
dois parâmetros números (base e expoente) e vai calcular o resultado da
exponenciação.
Ex: Potencia(5,2) vai calcular 5² = 25 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculaPotencia(int base, int expoente);

int main(void)
{
    // Declaração de variáveis
    int base = 0, expoente = 0, resultadoPotencia = 0;

    // Solicitando base e expoente para o usuário
    printf("Base: ");
    scanf("%i", &base);
    printf("Expoente: ");
    scanf("%i", &expoente);

    // Passando valores e armazenando resultado da potência
    resultadoPotencia = calculaPotencia(base, expoente);

    // Imprimindo resultados
    printf("\n");
    printf("%i elevado ao expoente %i resulta em %i.\n", base, expoente, resultadoPotencia);

    return 0;
}

// Função que calcula a potência de um número inteiro
int calculaPotencia(int base, int expoente)
{
    int potencia = 1;

    for (int i = 1; i <= expoente; i++)
    {
        potencia *= base;
    }

    return potencia;
}