/* Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
entre eles.
Ex:
Digite um valor: 8
Digite outro valor: 5
A soma entre 8 e 5 é igual a 13. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int numero1, numero2, soma;

    // Solicitando valores para o usuário
    printf("Digite um valor: ");
    scanf("%i", &numero1);
    printf("Digite outro numero inteiro: ");
    scanf("%i", &numero2);

    // Imprimindo resultados
    printf("A soma entre os numeros %i e %i e igual a %i.", numero1, numero2, (numero1 + numero2));
    
    return 0;
}