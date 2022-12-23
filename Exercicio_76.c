/* Crie um programa que preencha automaticamente um vetor númerico com 7
números gerados aleatoriamente pelo computador e depois mostre os valores
gerados na tela. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // Declaração de variáveis
    int vetor[7];

    // Função para evitar que os números se repitam a cada execução
    srand(time(NULL));

    // Preenchendo o vetor com valores aleatórios
    printf("\n");
    for (int i = 0; i < 7; i++)
    {   
        // Atribuindo ao vetor valores aleatórios de 1 a 100
        vetor[i] = (rand() % 100) + 1;
        // Imprimindo o vetor
        printf("%i ", vetor[i]);
    }
    printf("\n");

    return 0;
}