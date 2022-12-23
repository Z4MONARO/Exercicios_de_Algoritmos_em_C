/* Faça um programa usando a estrutura "faça enquanto" que leia vários números.
A cada laço, pergunte se o usuário quer continuar ou não. No final, mostre na
tela:
    a) O somatório entre todos os valores.
    b) Qual foi o menor valor digitado.
    c) A média entre todos os valores.
    d) Quantos valores são pares. */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    int numero = 0, somaValores = 0, menorValor = 0, mediaValores = 0, pares = 0, i = 0;
    char resposta = 'S';

    // Solicitando números para o usuário
    do
    {
        printf("Digite um valor: ");
        scanf("%i", &numero);
        
        // Menor valor digitado
        if (i == 0)
        {
            menorValor = numero;
        }
        else if (numero < menorValor)
        {
            menorValor = numero;
        }

        // Somando valores e a média (sem divisão por enquanto)
        somaValores += numero;
        mediaValores += numero; 
        i++;

        // Verificando se os valores são pares
        if (numero % 2 == 0)
        {
            pares++;
        }

        printf("\n");
        printf("Deseja continuar? [S/N] ");
        scanf(" %c", &resposta);
        // Verificando a resposta do usuário
        if ((resposta == 78) || (resposta == 110))
        {
            break;
        }
        system("cls");
    }
    while (true);

    // Calculando a média
    mediaValores /= i;

    // Imprimindo resultados
    system("cls");
    printf("a) Somatorio de todos os valores: %i\n", somaValores);
    printf("b) Menor valor digitado: %i\n", menorValor);
    printf("c) Media dos valores: %i\n", mediaValores);
    printf("d) Valores pares: %i\n", pares);
}