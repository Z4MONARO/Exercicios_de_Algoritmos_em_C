/* Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o
seu novo salário, com 15% de aumento. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    float salarioAtual, salarioReajustado;

    // Solicitando valor do salário para o usuário
    printf("Digite o valor do salario: ");
    scanf("%f", &salarioAtual);

    // Calculando novo salário
    salarioReajustado = salarioAtual + ((salarioAtual * 15) / 100);

    // Imprimindo o resultado
    printf("O salario do funcionario, que valia R$ %0.2f, com um reajuste de 15%%, passara a valer R$ %0.2f\n", salarioAtual, salarioReajustado);

    return 0;
}