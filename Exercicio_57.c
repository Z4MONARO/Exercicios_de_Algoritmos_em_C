/* Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários.
No final, mostre o total de salários pagos aos homens e o total pago às
mulheres. O programa vai perguntar ao usuário se ele quer continuar ou não
sempre que ler os dados de um funcionário. */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    float salario = 0, totalSalarioHomens = 0, totalSalarioMulheres = 0;
    int genero = 0, i = 1; 
    char resposta = 'S';

    // Solicitando dados do funcionário para o usuário, enquanto a resposta for diferente de 'N' ou 'n'
    while (true)
    {
        printf("Funcionario %i\n\n", i);
        printf("[0] Masculino || [1] Feminino \nGenero: ");
        scanf("%i", &genero);
        printf("Salario: R$ ");
        scanf("%f", &salario);
        i++;       

        // Verificando condições
        if (genero == 0)
        {
            totalSalarioHomens += salario;
        }
        else if (genero == 1)
        {
            totalSalarioMulheres += salario;
        }

        // Perguntando se o usuário deseja continuar
        printf("\n");
        printf("Deseja continuar? [S/N] ");
        scanf(" %c", &resposta);
        if ((resposta == 78) || (resposta == 110))
        {
            break;
        }
        system("cls");
    }

    // Imprimindo resultados
    system("cls");
    printf("Total dos salarios pagos aos homens: R$ %0.2f\n", totalSalarioHomens);
    printf("Total dos salarios pagos as mulheres: R$ %0.2f\n", totalSalarioMulheres);

    return 0;
}