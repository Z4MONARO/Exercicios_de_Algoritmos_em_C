/* Faça um algoritmo que leia a nota de 10 alunos de uma turma e guarde-as em
um vetor. No final, mostre:
    a) Qual é a média da turma
    b) Quantos alunos estão acima da média da turma
    c) Qual foi a maior nota digitada
    d) Em que posições a maior nota aparece */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    float notas[10];
    float maiorNota = 0, mediaTurma = 0;
    int acimaDaMedia = 0;

    // Solicitando notas para o usuário
    for (int i = 0; i < 10; i++)
    {
        printf("Nota %i: ", (i + 1));
        scanf("%f", &notas[i]);

        // Verificando pela maior nota
        if (notas[i] > maiorNota)
        {
            maiorNota = notas[i];
        }

        // Somando notas à média
        mediaTurma += notas[i];
    }

    // Calculando a média da turma
    mediaTurma /= 10;

    // Verificando quantos alunos estão acima da média da turma
    for (int i = 0; i < 10; i++)
    {
        // Se a nota do aluno for superior à média da turma, a quantidade de alunos acima da média é incrementada
        if (notas[i] > mediaTurma)
        {
            acimaDaMedia++;
        }
    }

    // Imprimindo resultados
    printf("\n");
    printf("Media da turma: %0.1f\n", mediaTurma);
    printf("Alunos acima da media: %i\n", acimaDaMedia);
    printf("Maior nota da turma: %0.2f\n", maiorNota);
    printf("Posicoes nas quais a maior nota aparece: ");
    for (int i = 0; i < 10; i++)
    {
        // Se a nota for igual à maior nota, a posição é impressa
        if (notas[i] == maiorNota)
        {
            printf("%i ", i);
        }
    }
    printf("\n");

    return 0;
}