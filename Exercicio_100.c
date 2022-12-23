/* Melhore o exercício 96, criando além da função Media() uma outra função
chamada Situacao(), que vai retornar para o programa principal se o aluno está
APROVADO, em RECUPERAÇÃO ou REPROVADO. Essa nova função, vai receber como
parâmetro o resultado retornado pela função Media(). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calcularMedia(float primeiraNota, float segundaNota);
int verificaSituacaoAluno(float media);

int main(void)
{
    // Declaração de variáveis
    char situacaoAluno[15];
    float media = 0, primeiraNota = 0, segundaNota = 0;

    // Solicitando notas para o usuário
    printf("Nota 1: ");
    scanf("%f", &primeiraNota);
    printf("Nota 2: ");
    scanf("%f", &segundaNota);

    // Calculando a média
    media = calcularMedia(primeiraNota, segundaNota);

    // Verificando situação do aluno
    switch (verificaSituacaoAluno(media))
    {
        case 1:
            strcpy(situacaoAluno, "REPROVADO");
            break;
        case 2:
            strcpy(situacaoAluno, "EM RECUPERACAO");
            break;
        case 3:
            strcpy(situacaoAluno, "APROVADO");
            break;
        default:
            break;
    }

    // Imprimindo resultados
    printf("\n");
    printf("Media: %0.1f. Aluno %s.\n", media, situacaoAluno);

    return 0;
}

// Função que calcula média de 2 notas
float calcularMedia(float primeiraNota, float segundaNota)
{
    return ((primeiraNota + segundaNota) / 2);
}

// Função que analisa a situação do aluno com base na média
int verificaSituacaoAluno(float media)
{
    if (media < 4.9)
    {
        return 1;
    }
    else if ((media >= 5.0) && (media < 7.0))
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
