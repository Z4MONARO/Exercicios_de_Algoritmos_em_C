/* [DESAFIO] Desenvolva um programa que leia o primeiro termo e a razão de uma
PA (Progressão Aritmética), mostrando na tela os primeiros 10 elementos da PA e
a soma entre todos os valores da sequência. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    int termosPA[10];
    int razao = 0, soma = 0;

    // Solicitando o primeiro valor e a razão da PA para o usuário
    printf("Digite o primeiro termo da PA: ");
    scanf("%i", &termosPA[0]);
    printf("Digite a razao da PA: ");
    scanf("%i", &razao);

    // Mostrando os primeiros 10 elementos
    system("cls");
    printf("Primeiros 10 termos da PA: ");
    printf("%i ", termosPA[0]);
    for (int i = 2; i <= 10; i++)
    {
        termosPA[i] = termosPA[0] + (i - 1) * razao;
        printf("%i ", termosPA[i]);     
    }
    printf("\n");
    
    // Calculando e exibindo soma dos termos
    soma = ((termosPA[0] + termosPA[10]) * 10) / 2;
    printf("A soma entre os valores da PA vale %i\n", soma);

    return 0;
}