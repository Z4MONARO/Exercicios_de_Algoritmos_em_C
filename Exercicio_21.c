/* Faça um algoritmo que leia um determinado ano e mostre se ele é ou não
BISSEXTO. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int ano;

    // Solicitando ano para o usuário
    printf("Digite um ano: ");
    scanf("%i", &ano);

    // Verificando se o ano é BISSEXTO
    // Um ano é bissexto se é divisível por 4, não for divisível por 100 ou for divisível por 400
    printf("\n");
    if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400))
    {
        printf("O ano %i E BISSEXTO.\n", ano);
    }
    else
    {
        printf("O ano %i NAO E BISSEXTO.\n", ano);
    }

    return 0;
}