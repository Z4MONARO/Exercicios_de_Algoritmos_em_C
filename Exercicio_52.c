/* Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final:
    a) Qual é a média de idade do grupo
    b) Quantas pessoas tem mais de 18 anos
    c) Quantas pessoas tem menos de 5 anos
    d) Qual foi a maior idade lida */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int idades[10];
    int maioresQue18 = 0, menoresQue5 = 0, maiorIdadeLida = 0, media = 0;

    // Solicitando idades para o usuário
    for (int i = 0; i < 10; i++)
    {
        printf("Idade %i: ", (i + 1));
        scanf("%i", &idades[i]);

        // Se a idade lida for maior que 18, a variável maioresQue18 é incrementada
        if (idades[i] > 18)
        {
            maioresQue18++;
        }
        // Se a idade lida for menor que 5, a variável menoresQue5 é incrementada
        if (idades[i] < 5)
        {
            menoresQue5++;
        }
        // Se a idade lida for maior que a maior idade lida, a variável maiorIdadeLida recebe o valor de idades[i]
        if (idades[i] > maiorIdadeLida)
        {
            maiorIdadeLida = idades[i];
        }
        // Somando idades na média
        media = media + idades[i];
    }

    // Calculando a média
    media = media / 10;

    // Imprimindo resultados
    printf("\n");
    printf("Maior idade lida: %i\n", maiorIdadeLida);
    printf("Maiores de 18 anos: %i\n", maioresQue18);
    printf("Menores de 5 anos: %i\n", menoresQue5);
    printf("Media das idades: %i\n", media);

    return 0;
}