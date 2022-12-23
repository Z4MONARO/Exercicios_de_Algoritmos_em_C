/* Crie um programa que preencha automaticamente (usando a lógica, não apenas
atribuindo diretamente) um vetor númerico com 10 posições, conforme abaixo:

[9][8][7][6][5][4][3][2][1][0]
 0  1  2  3  4  5  6  7  8  9 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int vetor[10];
    
    // Atribuindo valor somente à primeira posição
    vetor[0] = 9;

    // Imprimindo vetor
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        // Se for a primeira posição
        if (i == 0)
        {
            // Imprima sem nenhuma alteração
            printf("%i ", vetor[0]);
        }
        // Senão
        else
        {
            // O valor do vetor[i] recebe o valor do vetor[i - 1] - 1, e imprima vetor[i]
            vetor[i] = vetor[i - 1] - 1;
            printf("%i ", vetor[i]);
        }
            
    }
    printf("\n");

    return 0;
}