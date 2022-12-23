/* Faça um programa usando a estrutura "para" que leia um número inteiro
positivo e mostre na tela uma contagem de 0 até o valor digitado:
Ex: Digite um valor: 9
Contagem: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, FIM! */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int numero = 0;

    // Solicitando número ao usuário
    printf("Digite um valor: ");
    scanf("%i", &numero);

    // Mostrando contagem
    printf("\n");
    printf("Contagem: ");
    for (int i = 0; i <= numero; i++)
    {
        printf("%i, ", i);
    }
    printf("FIM!\n");

    return 0;
}