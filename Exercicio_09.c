/* Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$)
e mostre quantos dólares ela pode comprar. Considere U$ 1.00 = R$ 3.45 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    const float DOLAR = 3.45;
    float reais;

    // Solicitando valor (em R$) ao usuário
    printf("Digite quantos reais deseja converter para dolar: ");
    scanf("%f", &reais);

    // Imprimindo resultados
    printf("Assumindo o valor do dolar em R$ %0.2f, com R$ %0.2f voce pode adquirir %0.2f dolares.\n", DOLAR, reais, (reais / DOLAR));

    return 0;
}