/* Faça um algoritmo que leia a idade de vários alunos de uma turma. O programa
vai parar quando for digitada a idade 999. No final, mostre quantos alunos
existem na turma e qual é a média de idade do grupo. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    int i = 0, idade = 0, mediaIdade = 0;

    // Solicitando idades para o usuário, até que ele digite a idade 999
    while (idade != 999)
    {
        printf("Digite a idade do aluno %i (ou 999 para sair): ", (i + 1));
        scanf("%i", &idade);
        // Saindo do loop precocemente para não somar o número de saída na média
        if (idade == 999)
            break;
        i++;
        mediaIdade += idade;
        system("cls");
    }

    // Calculando a média das idades
    mediaIdade /= i;

    // Imprimindo resultados
    system("cls");
    printf("Existem %i alunos, e a media da idade de todos eles resulta em %i.\n", i, mediaIdade);

    return 0;
}