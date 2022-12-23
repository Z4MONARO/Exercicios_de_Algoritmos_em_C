/* O Índice de Massa Comrpórea (IMC) é um valor calculado baseado na altura e no
peso de uma pessoa. De acordo com o valor do IMC, podemos classificar o
indivíduo dentro de certas faixas. 
    - Abaixo de 18.5: Abaixo do peso
    - Entre 18.5 e 25: Peso ideal
    - Entre 25 e 30: Sobrepeso
    - Entre 30 e 40: Obesidade
    - Acima de 40: Obesidade mórbida
Obs: O IMC é calculado pela expressão peso/altura² (peso dividido pelo quadrado
da altura) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Declaração de variáveis
    float peso, altura, IMC;

    // Solicitando peso e altura para o usuário
    printf("Peso (em kg): ");
    scanf("%f", &peso);
    printf("Altura (em m): ");
    scanf("%f", &altura);

    // Calculando o IMC
    IMC = peso / pow(altura, 2);

    // Mostrando o IMC e a classificação
    printf("\n");
    printf("IMC: %0.1f. ", IMC);
    if (IMC < 18.5)
    {
        printf("Abaixo do peso.\n");
    }
    else if ((IMC > 18.5) && (IMC < 25))
    {
        printf("Peso ideal.\n");
    }
    else if ((IMC > 25) && (IMC < 30))
    {
        printf("Sobrepeso.\n");
    }
    else if ((IMC > 30) && (IMC < 40))
    {
        printf("Obesidade.\n");
    }
    else
    {
        printf("Obesidade morbida.\n");
    }

    return 0;
}