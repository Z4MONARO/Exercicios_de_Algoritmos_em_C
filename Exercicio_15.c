/* Crie um programa que leia o número de dias trabalhados em um mês e mostre o
salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganhar R$25
por hora trabalhada. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int diasTrabalhados, salario, valorDia;

    // Solicitando valores para o usuário
    printf("Digite a quantidade de dias que o funcionario trabalhou no mes: ");
    scanf("%i", &diasTrabalhados);

    // Calculando o salário do funcionário
    valorDia = 8 * 25;
    salario = diasTrabalhados * valorDia;

    // Imprimindo o salário do funcionário para o usuário
    printf("\n");
    printf("O funcionario trabalhou %i dias durante o mes, e recebera de salario o valor de R$%i\n", diasTrabalhados, salario);

    return 0;
}