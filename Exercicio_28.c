/* Faça um programa que leia a largura e o comprimento de um terreno
retangular, calculando e mostrando a sua área em m². O programa também
deve mostrar a classificação desse terreno, de acordo com a lista abaixo:
    - Abaixo de 100m² = TERRENO POPULAR
    - Entre 100m² e 500m² = TERRENO MASTER
    - Acima de 500m² = TERRENO VIP */

#include <stdio.h>
#include <stdlib.h>

float calculaArea(float l, float c);

int main(void)
{
    // Declaração de variáveis
    float largura, comprimento, area;

    // Solicitando largura e comprimento para o usuário
    printf("Largura do terreno (em metros): ");
    scanf("%f", &largura);
    printf("Comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    // Calculando a área
    area = calculaArea(largura, comprimento);

    // Imprimindo a classificação do terreno
    // Se o terreno tiver menos de 100 m², é um TERRENO POPULAR
    printf("\n");
    if (area < 100.00)
    {
        printf("Com uma area de %0.2f m/quadrados, o terreno recebe a classificacao de: TERRENO POPULAR. (abaixo de 100 m/quadrados)\n", area);
    }
    // Senão, se o terreno tiver mais de 100 m² e menos de 500 m², é um TERRENO MASTER
    else if (area > 100.00 && area < 500.00)
    {
        printf("Com uma area de %0.2f m/quadrados, o terreno recebe a classificacao de: TERRENO MASTER. (entre 100 e 500 m/quadrados)\n", area);
    }
    // Senão, o único caso restante é caso a área do terreno seja maior que 500 m², ou seja, é um TERRENO VIP
    else
    {
        printf("Com uma area de %0.2f m/quadrados, o terreno recebe a classificacao de: TERRENO VIP. (acima de 500 m/quadrados)\n", area);
    }
}

// Função que retorna a área de um terreno
float calculaArea(float l, float c)
{
    return l * c;
}