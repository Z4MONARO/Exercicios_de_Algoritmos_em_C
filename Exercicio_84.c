/* Crie um programa que leia o nome e a idade de 9 pessoas e guarde esses
valores em dois vetores, em posições relacionadas. No final, mostre uma listagem
contendo apenas os dados das pessoas menores de idade. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct humano
{
    int idade;
    char nome[10];
}
humano;

int main(void)
{
    // Declaração de variáveis
    humano pessoa[9];

    // Solicitando informações da pessoas
    for (int i = 0; i < 9; i++)
    {
        printf("Pessoa %i\n", (i + 1));
        printf("Nome: ");
        scanf("%s", &pessoa[i].nome);
        printf("Idade: ");
        scanf("%i", &pessoa[i].idade);
        system("cls");        
    }

    // Imprimindo listagem com as pessoas menores de idade
    system("cls");
    printf("Menores de 18 anos: \n");
    printf("\n");
    for (int i = 0; i < 9; i++)
    {
        if (pessoa[i].idade < 18)
        {
            printf("Nome %s\n", pessoa[i].nome);
            printf("Idade: %i\n", pessoa[i].idade);
        }
    }

    return 0;
}