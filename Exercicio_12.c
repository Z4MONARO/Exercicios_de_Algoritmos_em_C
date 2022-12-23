/* Crie um programa que leia o preço de um produto, calcule e mostre o seu
PREÇO PROMOCIONAL, com 5% de desconto. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    float precoNormal, precoPromocional;

    // Solicitando o preço do produto ao usuário
    printf("Digite o preco normal do produto: R$");
    scanf("%f", &precoNormal);

    // Calculando o preço promocional
    precoPromocional = precoNormal - ((precoNormal * 5) / 100);

    // Imprimindo o resultado
    printf("O preco promocional do produto sera de R$ %0.2f\n", precoPromocional);

    return 0;
}