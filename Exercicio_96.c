/* Crie um programa que tenha uma função Media(), que vai receber as 2 notas de
um aluno e retornar a sua média para o programa principal. */

#include <stdio.h>
#include <stdlib.h>

float calcularMedia(float primeiraNota, float segundaNota);

int main(void)
{
    // Declaração de variáveis
    float media = 0, primeiraNota = 0, segundaNota = 0;

    // Solicitando notas para o usuário
    printf("Nota 1: ");
    scanf("%f", &primeiraNota);
    printf("Nota 2: ");
    scanf("%f", &segundaNota);

    // Calculando a média
    media = calcularMedia(primeiraNota, segundaNota);

    // Exibindo resultado
    printf("\n");
    printf("A media do aluno foi de %0.2f\n", media);

    return 0;
}

// Função que calcula média de 2 notas
float calcularMedia(float primeiraNota, float segundaNota)
{
    return ((primeiraNota + segundaNota) / 2);
}