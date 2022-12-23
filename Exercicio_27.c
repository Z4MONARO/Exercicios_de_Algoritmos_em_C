/* Crie um programa que leia duas notas de um aluno e calcule a sua média,
mostrando uma mensagem no final, de acordo com a média atingida:
    - Média até 4.9: REPROVADO
    - Média entre 5.0 e 6.9: RECUPERAÇÃO
    - Média 7.0 ou superior: APROVADO */

#include <stdio.h>
#include <stdlib.h>

float calculaMedia(float n1, float n2);

int main(void)
{
    // Declaração de variáveis
    float nota1, nota2, media;

    // Solicitando notas para o usuário
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    // Calculando a média
    media = calculaMedia(nota1, nota2);

    // Imprimindo resultado de acordo com a média
    // Se a média for menor que 4.9, o aluno está REPROVADO
    printf("\n");
    if (media < 4.9)
    {
        printf("Media final: %0.1f. Aluno REPROVADO.\n", media);
    }
    // Senão, se a média estiver entre 5.0 e 6.9, o aluno está EM RECUPERAÇÃO
    else if (media > 5.0 && media < 7.0)
    {
        printf("Media final: %0.1f. Aluno EM RECUPERACAO.\n", media);
    }
    // Senão, o único caso restante é a média ser maior que 7.0, aluno está APROVADO
    else
    {
        printf("Media final: %0.1f. Aluno APROVADO.\n", media);
    }
}

// Função que retorna a média entre as notas
float calculaMedia(float n1, float n2)
{
    return (n1 + n2) / 2;
}