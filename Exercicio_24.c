/* Faça um algoritmo que pergunte a distância que um passageiro deseja
percorrer em Km. Calcule o preço da passagem cobrando R$ 0.50 por Km para
viagens até 200km e R$ 0.45 para viagens mais longas. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    float distancia, precoPassagem;

    // Solicitando distância para o usuário
    printf("Digite a distancia que deseja percorrer: ");
    scanf("%f", &distancia);

    // Calculando o valor da passagem com base na distância
    printf("\n");
    if (distancia < 200)
    {
        precoPassagem = distancia * 0.5;
    }
    else
    {
        precoPassagem = distancia * 0.45;
    }

    // Imprimindo resultado
    printf("Para uma viagem  de %0.2f km, o preco da passagem sera de R$ %0.2f\n", distancia, precoPassagem);

    return 0;
}