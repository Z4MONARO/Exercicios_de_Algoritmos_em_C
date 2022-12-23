/* [DESAFIO] Faça um programa que mostre os 10 primeiros elementos da Sequência
de Fibonacci:
    1 1 2 3 5 8 13 21 ... */

#include <stdio.h>
#include <stdlib.h>

// Definição da fórmula de Fibonacci
// Fn = F(n-1) + F(n - 2)

int main(void)
{
    // Declaração de variáveis
    int antecessor = 0, fibonacciAtual = 0, numeroFibonacci = 1;

    // Imprimindo os 10 primeiros números da sequência de Fibonacci
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", numeroFibonacci);
        antecessor = fibonacciAtual;
        fibonacciAtual = numeroFibonacci;
        numeroFibonacci = antecessor + fibonacciAtual;        
    }
    printf("\n");

    return 0;
}