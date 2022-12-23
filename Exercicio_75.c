/* Crie um programa que preencha automaticamente (usando a lógica, não apenas
atribuindo diretamente) um vetor númerico com 16 posições com os primeiros
elementos da sequência de Fibonacci:

[1][1][2][3][5][8][13][21][34][55][89][144][233][377][610][987]
 0  1  2  3  4  5   6   7   8   9  10   11   12   13   14   15 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int vetorFibonacci[16];
    int antecessor = 0, fibonacciAtual = 0, numeroFibonacci = 1;

    // Atribuindo o valor da primeira posição do vetor de Fibonacci
    vetorFibonacci[0] = numeroFibonacci;

    // Imprimindo os 16 primeiros números da sequência de Fibonacci
    printf("\n");
    for (int i = 0; i < 16; i++)
    {
        if (i == 0)
        {
            printf("%i ", vetorFibonacci[0]);
        }            
        else if (i > 0)
        {
            antecessor = fibonacciAtual;
            fibonacciAtual = numeroFibonacci;
            numeroFibonacci = antecessor + fibonacciAtual;
            vetorFibonacci[i] = numeroFibonacci;   
            printf("%d ", vetorFibonacci[i]);
        }
    }
    printf("\n");

    return 0;
}