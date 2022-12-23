/* desenvolva um programa que leia o nome de um funcionário, seu salário,
quantos anos ele trabalha na empresa e mostre seu novo salário, reajustado de
acordo com a tabela a seguir: 
    - Até 3 anos de empresa: aumento de 3%
    - Entre 3 e 10 anos: aumento de 12.5%
    - 10 anos ou mais: aumento de 20% */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    char nome[10];
    float salario, novoSalario;
    int anosNaEmpresa;

    // Solicitando nome, valor do salário e quantidade de anos na empresa para o usuário
    printf("Digite o nome do funcionario: ");
    scanf("%s", nome);
    printf("Digite o salario do funcionario %s: R$ ", nome);
    scanf("%f", &salario);
    printf("Digite a quantos anos o funcionario %s trabalha na empresa: ", nome);
    scanf("%i", &anosNaEmpresa);

    // Calculando novo salário do funcionário
    // Se o funcionário tem até 3 anos de empresa, o salário é aumentado em 3%
    printf("\n");
    if (anosNaEmpresa < 3)
    {
        novoSalario = salario + ((salario * 3) / 100);
    }
    // Senão, se o funcionário tem mais de 3 anos e menos de 10 anos, o salário será aumentado em 12.5%
    else if (anosNaEmpresa > 3 && anosNaEmpresa < 10)
    {
        novoSalario = salario + ((salario * 12.5) / 100);
    }
    // Senão, o último caso restante é caso o funcionário tenha mais de 10 anos de empresa, tendo o salário reajustado em 20%
    else
    {
        novoSalario = salario + ((salario * 20) / 100);
    }

    // Imprimindo resultados
    printf("O funcionario %s, trabalha na empresa a %i anos e passara a receber R$ %0.2f de salario apos o reajuste.\n", nome, anosNaEmpresa, novoSalario);

    return 0;
}