/* Crie um programa que preencha automaticamente (usando a lógica, não apenas
atribuindo diretamente) um vetor númerico com 10 posições, conforme abaixo:

[5][3][5][3][5][3][5][3][5][3]
 0  1  2  3  4  5  6  7  8  9 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int vetor[10];

    // Preenchendo e imprimindo o vetor com a condição solicitada
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        // Se a posição do vetor for PAR, o vetor[i] recebe 5
        if (i % 2 == 0)
        {
            vetor[i] = 5;
        }
        // Senão for PAR, é ÍMPAR, e recebe 3
        else
        {
            vetor[i] = 3;
        }

        // Imprimindo o vetor na posição i
        printf("%i ", vetor[i]);
    }
    printf("\n");

    return 0;
}