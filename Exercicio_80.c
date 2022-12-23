/* Faça um algoritmo que preencha um vetor de 30 posições com números entre 1 e
15 sorteados pelo computador. Depois disso, peça para o usuário digitar um
número (chave) e seu programa deve mostrar em que posições essa chave foi
encontrada. Mostre também quantas vezes a chave foi sorteada. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    int vetor[30] = {0};
    int posicoesChaveEncontrada[30] = {0};
    int chave = 0, vezesChaveEncontrada = 0; 

    // Função para que os valores aleatórios não se repitam
    srand(time(NULL));

    // Atribuindo valores aleatoriamente
    for (int i = 0; i < 30; i++)
    {
        vetor[i] = (rand() % 15) + 1;
    }

    // Solicitando chave ao usuário
    printf("\n");
    printf("Chave: ");
    scanf("%i", &chave);
    printf("\n");

    // Verificando o vetor
    for (int i = 0; i < 30; i++)
    {
        // Se a chave for igual ao vetor[i]
        if (chave == vetor[i])
        {
            // Incrementa o número de aparições da chave
            vezesChaveEncontrada++;

            // Armazena a posição que a chave foi encontrada em uma variável
            posicoesChaveEncontrada[i] = i;        
        }
    }

    // Exibindo resultados
    printf("Posicoes que a chave foi encontrada: ");
    for (int i = 0; i < 30; i++)
    {
        if ((posicoesChaveEncontrada[0] == 0) && (vetor[0] == chave))
        {
            printf("%i ", posicoesChaveEncontrada[0]);   
        }
        else if (posicoesChaveEncontrada[i] != 0)
        {
            printf("%i ", posicoesChaveEncontrada[i]);
        }
    }
    printf("\n");
    printf("Quantidade de vezes que a chave foi sorteada: %i\n", vezesChaveEncontrada);

    return 0;
}