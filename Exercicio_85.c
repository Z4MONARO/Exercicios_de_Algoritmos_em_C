/* Faça um algoritmo que leia o nome, o sexo e o salário de 5 funcionários e
guarde esses dados em três vetores. No final, mostre uma listagem contendo
apenas os dados das funcionários mulheres que ganham mais de R$5 mil. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    char nome[5][10];
    int genero[5];
    float salario[5];

    // Solicitando valores ao usuário
    for (int i = 0; i < 5; i++)
    {
        printf("Funcionario %i\n", (i + 1));
        printf("Nome: ");
        scanf("%s", &nome[i]);
        printf("[0] Masculino || [1] Feminino \nGenero: ");
        scanf("%i", &genero[i]);
        printf("Salario: R$ ");
        scanf("%f", &salario[i]);
        system("cls");
    }

    // Exibindo resultados
    system("cls");
    printf("Funcionarias que recebem mais de R$ 5000,00: \n");
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        // Se o funcionário for do sexo feminino e ganhar mais de R$ 5000.00, os dados são exibidos
        if ((genero[i] == 1) && (salario[i] > 5000.00))
        {
            printf("Funcionaria %i\n", (i + 1));
            printf("Nome: %s\n", nome[i]);
            printf("Salario: R$ %0.2f\n", salario[i]);
            printf("\n");
        }
    }

    return 0;
}