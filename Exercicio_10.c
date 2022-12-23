/* Faça um algoritmo que leia a largura e altura de uma parede, calcule e
mostre a área a ser pintada e a quantidade de tinta necessária para o serviço,
sabendo que cada litro de tinta pinta uma área de 2 metros quadrados. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    float altura, largura, area, litrosDeTinta;

    // Solicitando altura e largura da parede para o usuário
    printf("Digite a altura da parede a ser pintada: ");
    scanf("%f", &altura);
    printf("Digite a largura da parede a ser pintada: ");
    scanf("%f", &largura);

    // Calculando a área e a quantidade de litros de tinta necessária
    area = altura * largura;
    litrosDeTinta = area / 2;

    // Imprimindo os resultados
    printf("Para pintar uma parede de area %0.2f m/quadrados, sera necessario utilizar %0.2f litros de tinta.\n", area, litrosDeTinta);

    return 0;
}