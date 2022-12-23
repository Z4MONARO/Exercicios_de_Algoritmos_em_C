/* Crie um programa que leia a idade de 8 pessoas e guarde-as em um vetor. No
final, mostre:
    a) Qual é a média de idade das pessoas cadastradas
    b) Em quais posições temos pessoas com mais de 25 anos
    c) Qual foi a maior idade digitada (podem haver repetições)
    d) Em que posições digitamos a maior idade */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    int idade[8];
    int maiorIdade = 0, mediaIdade = 0;

    // Solicitando idades para o usuário
    for (int i = 0; i < 8; i++)
    {
        printf("Idade %i: ", i);
        scanf("%i", &idade[i]);

        // Verificando pela maior idade
        if (idade[i] > maiorIdade)
        {
            maiorIdade = idade[i];
        }

        // Somando idades à média
        mediaIdade += idade[i];
    }

    // Calculando média das idades
    mediaIdade /= 8;

    // Imprimindo resultados
    system("cls");
    printf("A media de idades das pessoas cadastradas vale %i\n", mediaIdade);
    printf("Posicoes que possuem pessoas com mais de 25 anos: ");
    for (int i = 0; i < 8; i++)
    {
        // Se a idade for maior que 25, imprime a posição
        if (idade[i] > 25)
        {
            printf("%i ", i);
        }
    }
    printf("\n");
    printf("Maior idade digitada: %i\n", maiorIdade);
    printf("Posicoes que a maior idade foi digitada: ");
    for (int i = 0; i < 8; i++)
    {
        // Se a idade for igual a maior idade digitada, imprime a posição
        if (idade[i] == maiorIdade)
        {
            printf("%i ", i);
        }
    }
    printf("\n");

    return 0;
}