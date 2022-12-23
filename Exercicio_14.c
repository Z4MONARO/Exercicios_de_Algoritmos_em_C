/* A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva
um programa que pergunte a quantidade de Km percorridos por um carro alugado e a
quantiade de dias pelos quais ele foi alugado. Calcule o preço total a pagar,
 sabendo que o carro custa R$90 por dia e R&0.20 por Km rodado. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int quantidadeDias;
    float kmPercorridos, valorKm, valorDias, valorTotal;

    // Solicitando valores para o usuário
    printf("Qual a quantidade de KM percorridos no veiculo? ");
    scanf("%f", &kmPercorridos);
    printf("Qual a quantidades de dias que o veiculo foi alugado? ");
    scanf("%i", &quantidadeDias);

    // Calculando valor total a pagar
    valorKm = kmPercorridos * 0.20;
    valorDias = quantidadeDias * 90;
    valorTotal = valorDias + valorKm;

    // Imprimindo resultado para o usuário
    printf("O carro foi alugado por %i dias, e rodou %0.2f km. O valor total a pagar sera de %0.2f\n", quantidadeDias, kmPercorridos, valorTotal);

    return 0;
}