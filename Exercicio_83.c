/* [DESAFIO] Crie uma lógica que preencha um vetor de 20 posições com números
aleatórios (entre 0 e 99) gerados pelo computador. Logo em seguida, mostre os
números gerados e depois coloque o vetor em ordem crescente, mostrando no final
os valores ordenados. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // Declaração de variáveis
    int vetor[20];
    int auxiliar = 0;

    // Função para que os números aleatórios não se repitam
    srand(time(NULL));

    // Preenchendo vetor aleatoriamente
    for (int i = 0; i < 20; i++)
    {
        vetor[i] = (rand() % 99) + 1;
    }

    // Mostrando o vetor
    printf("Vetor gerado: \n");
    for (int i = 0; i < 20; i++)
    {
        printf("%i ", vetor[i]);
    }
    printf("\n");

    // Ordenando o vetor de forma crescente
    
    // Algoritmo utilizado: Bubble Sort
    // Este método de ordenação compara o elemento na posição [i] com o elemento da posição[i + 1]
    // Se o elemento[i + 1] > elemento[i], há uma troca
    // Essa função foi copiada do seguinte site: https://www.mygreatlearning.com/blog/bubble-sort/#:~:text=Bubble%20Sort%20Pseudocode,-We%20are%20given&text=We%20start%20with%20the%20first,until%20the%20array%20is%20exhausted.
    for (int j = 0; j < 20 - 1; j++)
    {        
        for (int i = 0; i < 20 - j - 1; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                auxiliar = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = auxiliar;
            }
        }        
    }

    // Imprimindo vetor ordenado
    printf("\n");
    printf("Vetor ordenado de forma crescente: \n");
    for (int i = 0; i < 20; i++)
    {
        printf("%i ", vetor[i]);
    }
    printf("\n");

    return 0;
}