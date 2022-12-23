/* Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando
na tela uma das mensagens abaixo:
    - O primeiro valor é o maior
    - O segundo valor é o maior
    - Não existe valor maior, os dois são iguais */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int numero1, numero2;

    // Solicitando valores para o usuário
    printf("Digite um numero: ");
    scanf("%i", &numero1);
    printf("Digite outro numero: ");
    scanf("%i", &numero2);

    // Comparando os números
    // Se o primeiro número for MAIOR que o segundo
    printf("\n");
    if (numero1 > numero2)
    {
        // Imprime o resultado
        printf("O primeiro numero (%i) E MAIOR que o segundo numero (%i).\n", numero1, numero2);
    }
    // Senão, se o segundo número for MAIOR que o primeiro
    else if (numero2 > numero1)
    {
        // Imprime o resultado
        printf("O segundo numero (%i) E MAIOR que o primeiro numero (%i).\n", numero2, numero1);
    }
    // Senão, o único caso restante é caso os números sejam IGUAIS
    else
    {
        // Imprime o resultado
        printf("O primeiro e o segundo numero (%i e %i) SAO IGUAIS.\n", numero1, numero2);
    }

    return 0;
}