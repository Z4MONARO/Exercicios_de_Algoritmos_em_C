/* Uma empresa precisa reajustar o salário dos seus funcionários, dando um
aumento de acordo com alguns fatores. Faça um programa que leia o salário atual,
o gênero do funcionário e há quantos anos esse funcionário trabalha na empresa.
No final, mostre seu novo salário, baseado na tabela a seguir:

- Mulheres
    - menos de 15 anos de empresa: +5%
    - de 15 até 20 anos de empresa: +12%
    - mais de 20 anos de empresa: +23%
- Homens
    - menos de 20 anos de empresa: +3%
    - de 20 até 30 anos de empresa: +13%
    - mais de 30 anos de empresa: +25% */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct pessoa
{
    float salarioAtual;
    int genero, anosNaEmpresa;
}
pessoa;

float calcularSalario(int genero, int anos, float salario);

int main(void)
{
    // Declaração de variáveis
    pessoa *funcionario = malloc(sizeof(pessoa));
    if (funcionario == NULL)
    {
        printf("Nao foi possivel alocar espaco na memoria.\n");
        return 1;
    }
    float novoSalario = 0;

    // Solicitando dados do funcionário para o usuário
    printf("Salario atual do funcionario: R$ ");
    scanf("%f", &funcionario->salarioAtual);
    printf("[0] Masculino || [1] Feminino \nGenero do funcionario: ");
    scanf("%i", &funcionario->genero);
    printf("Anos de empresa: ");
    scanf("%i", &funcionario->anosNaEmpresa);

    // Calculando o novo salario do funcionario
    novoSalario = calcularSalario(funcionario->genero, funcionario->anosNaEmpresa, funcionario->salarioAtual);

    // Imprimindo resultados
    printf("\n"); 
    printf("Novo salario do funcionario sera de R$ %0.2f\n", novoSalario);

    free(funcionario);
    return 0;
}

// Função para calcular o novo salário do funcionário
float calcularSalario(int genero, int anos, float salario)
{   
    float salarioReajustado;
    // Se o funcionário for do gênero FEMININO
    if (genero == 1)
    {
        // Calculando de acordo com a quantidade de anos de empresa
        if (anos < 15)
        {
            salarioReajustado = (salario + ((salario * 5) / 100));
        }
        else if ((anos >= 15) && (anos < 20))
        {
            salarioReajustado = (salario + ((salario * 12) / 100));
        }
        else if (anos >= 20)
        {
            salarioReajustado = (salario + ((salario * 23) / 100));
        }
    }
    // Senão, se o funcionário for do genêro MASCULINO
    else if (genero == 0)
    {
        // Calculando de acordo com a quantidade de anos de empresa
        if (anos < 20)
        {
            salarioReajustado = (salario + ((salario * 3) / 100));
        }
        else if ((anos >= 20) && (anos < 30))
        {
            salarioReajustado = (salario + ((salario * 13) / 100));
        }
        else if (anos >= 30)
        {
            salarioReajustado = (salario + ((salario * 25) / 100));
        }
    }

    return salarioReajustado;
}