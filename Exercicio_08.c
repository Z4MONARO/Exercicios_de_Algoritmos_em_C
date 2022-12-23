/* Desenvolva um programa que leia uma distância em metros e mostre os valores
relativos em outras medidas.
Ex:
Digite uma distância em metros: 185.72
A distância de 185.72m corresponde a:
0.185772Km                            1857.2dm
1.8572Hm                              18572.0cm
18.572Dam                             185720.0mm */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    float distanciaEmMetros;

    // Solicitando valor ao usuário
    printf("Digite uma distancia em metros: ");
    scanf("%f", &distanciaEmMetros);

    // Imprimindo resultados
    printf("\n");
    printf("A distancia de %0.2fm corresponde a:\n", distanciaEmMetros);

    // Conversão de m para km (metro para kilômetro) (divisão por 1000)
    printf("%f km\n", (distanciaEmMetros / 1000));

    // Conversão de m para hm (metro para hectômetro) (divisão por 100)
    printf("%f hm\n", (distanciaEmMetros / 100));

    // Conversão de m para dam (metro para decâmetro) (divisão por 10)
    printf("%f dam\n", (distanciaEmMetros / 10));

    // Conversão de m para dm (metro para decímetro) (multiplicação por 10)
    printf("%0.1f dm\n", (distanciaEmMetros * 10));

    // Conversão de m para cm (metro para centímetro) (multiplicação por 100)
    printf("%0.1f cm\n", (distanciaEmMetros * 100));

    // Conversão de m para mm (metro para milímetro) (multiplicação por 1000)
    printf("%0.1f mm\n", (distanciaEmMetros * 1000));

    return 0;
}