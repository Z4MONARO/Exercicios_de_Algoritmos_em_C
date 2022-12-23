/* Faça um programa que leia o nome de nascimento de uma pessoa, calcule a idade
dela e depois mostre se ela pode ou não votar. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int anoAtual, anoNascimento, idade;

    // Solicitando ano atual e ano de nascimento para o usuário
    printf("Digite o ano atual: ");
    scanf("%i", &anoAtual);
    printf("Digite seu ano de nascimento: ");
    scanf("%i", &anoNascimento);

    // Calculando idade do usuário
    idade = anoAtual - anoNascimento;

    // Se a idade for menor que 16 (idade mínima para voto)
    printf("\n");
    if (idade < 16)
    {
        // Imprime que o usuário ainda não tem a idade necessária para votar
        printf("Voce tem %i anos e ainda nao tem idade necessaria para votar.\n", idade);
    }
    else
    {
        // Senão, informa ao usuário que ele já possui a idade necessária para votar
        printf("Voce tem %i anos e ja tem a idade necessaria para votar.\n", idade);
    }

    return 0;
}