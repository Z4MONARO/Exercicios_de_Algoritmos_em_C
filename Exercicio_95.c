/* Refaça o exercício 90, só que agora em forma de função Somador(), que vai
receber dois parâmetros e vai retornar a soma entre eles para o
programa principal. */

#include <stdio.h>
#include <stdlib.h>

int calcularSoma(int numero1, int numero2);

int main(void)
{
    // Declaração de variáveis
    int numero1 = 0, numero2 = 0, soma = 0;

    // Solicitando valores para o usuário
    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%i", &numero2);

    // Calculando soma pela função e armazenando valor em uma variável
    soma = calcularSoma(numero1, numero2);

    // Imprimindo resultado
    printf("\n");
    printf("A soma entre %i e %i resulta em %i\n", numero1, numero2, soma);

    return 0;
}

// Função que retorna a soma de dois valores
int calcularSoma(int numero1, int numero2)
{
    return numero1 + numero2;
}