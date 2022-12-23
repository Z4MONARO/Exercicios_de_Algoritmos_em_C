/*Crie um programa que leia vários números pelo teclado e mostre no final o
somatório entre eles.
Obs: O programa será interrompido quando o número 1111 for digitado. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    int numero = 0, soma = 0;

    // Solicitando valores para o usuário
    while (numero != 1111)
    {
        printf("Digite um valor (1111 para sair): ");
        scanf("%i", &numero);
        
        // Se o número for 1111, sai do loop antes de fazer a soma
        if (numero == 1111)
        {
            break;
        }

        soma += numero;
    }

    // Imprimindo resultados
    system("cls");
    printf("A soma dos valores digitados resulta em %i\n", soma);

    return 0;
}