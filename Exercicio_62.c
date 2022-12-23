/* Faça um programa usando a estrutura "faça enquanto" que leia a idade de
várias pessoas. A cada laço, você deverá perguntar para o usuário se ele quer ou
não continuar a digitar dados. No final, quando o usuário decidir parar, mostre
na tela:
    a) Quantas idades foram digitadas
    b) Qual é a média entre as idades digitadas
    c) Quantas pessoas tem 21 anos ou mais. */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    char resposta = 'S';
    int idade = 0, maioresQue21Anos = 0, i = 0;
    float mediaIdades = 0;

    // Solicitando dados ao usuário
    do
    {
        // Perguntando idade
        printf("Digite uma idade: ");
        scanf("%i", &idade);

        // Verificando condições
        // Se a idade for maior que 21 anos, a variável maioresQue21Anos é incrementada
        if (idade >= 21)
        {
            maioresQue21Anos++;
        }

        // Somando a média
        mediaIdades += idade;

        // Incrementando a quantidade de idades (variável i)
        i++;

        // Perguntando se o usuário deseja continuar ou não
        printf("\n");
        printf("Deseja continuar? [S/N] ");
        scanf(" %c", &resposta);
        if ((resposta == 78) || (resposta == 110))
        {
            break;
        }
        system("cls");
    }
    while (true);

    // Calculando média das idades
    mediaIdades /= i;

    // Imprimindo resultados
    system("cls");
    printf("a) Idades digitadas: %i\n", i);
    printf("b) Media das idades: %0.2f\n", mediaIdades);
    printf("c) Pessoas com 21 anos ou mais: %i\n", maioresQue21Anos);

    return 0;
}