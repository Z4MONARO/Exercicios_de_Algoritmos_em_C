/* Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse
80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba
o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida. */

#include <stdio.h>
#include <stdlib.h>

const int VELOCIDADE_PERMITIDA = 80;

int main(void)
{
    // Declaração de variáveis
    float velocidadeDoVeiculo, valorDaMulta, kmAcimaDoPermitido;

    // Solicitando a velocidade do carro para o usuário
    printf("Digite a velocidade do veiculo (em km/h): ");
    scanf("%f", &velocidadeDoVeiculo);

    // Verificando se o carro foi multado ou não
    printf("\n");
    if (velocidadeDoVeiculo > VELOCIDADE_PERMITIDA)
    {
        // Calculando a quantidade km/h acima do permitido
        kmAcimaDoPermitido = velocidadeDoVeiculo - VELOCIDADE_PERMITIDA;
        // Calculando o valor da multa do veiculo
        valorDaMulta = 5 * kmAcimaDoPermitido;
        // Imprimindo resultado para o usuário
        printf("O veiculo foi multado.\n");
        printf("O valor da multa a ser paga e de R$ %0.2f\n", valorDaMulta);
    }
    else
    {
        // Imprimindo resultado para o usuário
        printf("O veiculo nao foi multado.\n");
    }

    return 0;
}