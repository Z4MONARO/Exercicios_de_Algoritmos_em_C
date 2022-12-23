/* [DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta.
Analise seus comprimentos e diga se é possível formar um triângulo com essas
retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento
de cada lado deve ser menor que a soma dos outros dois. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    float segmento1, segmento2, segmento3;

    // Solicitando segmentos de reta para o usuário
    printf("Digite o primeiro segmento de reta: ");
    scanf("%f", &segmento1);
    printf("Digite o segundo segmento de reta: ");
    scanf("%f", &segmento2);
    printf("Digite o terceiro segmento de reta: ");
    scanf("%f", &segmento3);

    // Verificando se os três segmentos pode formar um triângulo
    printf("\n");
    if ((segmento1 > (segmento2 + segmento3)) || (segmento2 > (segmento1 + segmento3)) || (segmento3 > (segmento1 + segmento2)))
    {
        // Imprimindo resultado
        printf("Os segmentos de reta %0.2f, %0.2f e %0.2f NAO PODEM formar um triangulo.\n", segmento1, segmento2, segmento3);
    }
    else
    {
        // Imprimindo resultado
        printf("Os segmentos de reta %0.2f, %0.2f e %0.2f PODEM formar um triangulo.\n", segmento1, segmento2, segmento3);
    }

    return 0;
}