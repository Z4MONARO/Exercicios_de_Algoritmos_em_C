/* Desenvolva um programa que leia 10 números inteiros e guarde-os em um vetor.
No final, mostre quais são os números pares que foram digitados e em que
posições eles foram armazenados.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    int vetor[10] = {0};
    int pares[10] = {0};
    int posicaoPares[10] ={0};

    // Solicitando valores para o usuário
    for (int i = 0; i < 10; i++)
    {
        printf("Valor %i: ", i);
        scanf("%i", &vetor[i]);

        // Se o valor digitado for par, ele é armazenado em um vetor, e sua posição é armazenada em outro vetor
        if ((vetor[i] % 2 == 0) && (vetor[i] != 0))
        {
            pares[i] = vetor[i];
            posicaoPares[i] = i;
        }
    }

    // Exibindo resultados
    system("cls");
    printf("Numeros pares digitados e suas posicoes: \n");
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        if ((pares[i] != 0) || (posicaoPares[i] != 0))
        {
            printf("Posicao [%i]: %i\n", posicaoPares[i], pares[i]);
        }
    }

    return 0;
}