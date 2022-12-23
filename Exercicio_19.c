/* Crie um algoritmo que leia o nome as duas notas de um aluno, calcule a sua
média e mostra na tela. No final, analise a média e mostre se o aluno teve ou
não um bom aproveitamento (se ficou acima da médai 7.0). */

#include <stdio.h>
#include <stdlib.h>

float calculaMedia(int nota1, int nota2);

int main(void)
{
    // Declaração de variáveis
    float nota1, nota2, media;

    // Solicitando as notas para o usuário
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    // Calculando a média
    media = calculaMedia(nota1, nota2);

    // Imprimindo resultado
    printf("\n");
    printf("A media do aluno foi de %0.2f. ", media);

    // Verificando se o aluno teve um bom aproveitamento (média > 7.0)
    if (media > 7.0)
    {
        printf("O aluno teve um bom aproveitamento (media > 7.0).\n");
    }
    else
    {
        printf("O aluno nao teve um bom aproveitamento (media < 7.0).\n");
    }
}

float calculaMedia(int nota1, int nota2)
{
    return ((nota1 + nota2) / 2);
}