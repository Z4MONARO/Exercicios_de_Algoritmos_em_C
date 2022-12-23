/* Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
sucessor.
Ex:
Digite um número: 9
O antecessor de 9 é 8
O sucessor de 9 é 10 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int numero = 0;

    // Solicitando valor para o usuário
    printf("Digite um numero: ");
    scanf("%i", &numero);

    // Imprimindo antecessor e sucessor do número passado pelo usuário
    printf("O antecessor de %i e %i\n", numero, (numero - 1));
    printf("O sucessor de %i e %i\n", numero, (numero + 1));

    return 0;
}