/* Faça um algoritmo que pergunte ao usuário um número inteiro e positivo
qualquer e mostre uma contagem até esse valor:
Ex: Digite um valor: 35
Contagem: 1 2 3 4 5 6 7 ... 33 34 35 Acabou! */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int numero;

    // Solicitando número ao usuário
    printf("Digite um valor: ");
    scanf("%i", &numero);

    // Imprimindo contagem
    printf("Contagem: ");
    for (int i = 1; i <= numero; i++)
    {
        printf("%i ", i);
    }
    printf("Acabou!\n");

    return 0;
}