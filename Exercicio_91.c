/* Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses
valores para um procedimento Maior() que vai verificar qual deles é o maior e
mostrá-lo na tela. Caso os dois valores sejam iguais, mostrar uma mensagem
informando essa característica. */

#include <stdio.h>
#include <stdlib.h>

void maior(int n1, int n2);

int main(void)
{
    // Declaração de variáveis
    int numero1 = 0, numero2 = 0;

    // Solicitando números para o usuário
    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%i", &numero2);

    // Passando números na função maior
    printf("\n");
    maior(numero1, numero2);

    return 0;
}

// Função que recebe dois números e exibe se um é maior que o outro (ou se são iguais)
void maior(int n1, int n2)
{
    if (n1 > n2)
    {
        printf("%i > %i\n", n1, n2);
    }
    else if (n2 > n1)
    {
        printf("%i > %i\n", n2, n1);  
    }
    else
    {
        printf("%i = %i\n", n1, n2);
    }

    return;
}