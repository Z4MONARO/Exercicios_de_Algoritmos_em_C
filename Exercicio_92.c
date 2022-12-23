/* Crie uma lógica que leia um número inteiro e passe para um procedimento
ParOuImpar() que vai verificar e mostrar na tela se o valor passado como
parâmetro é PAR ou ÍMPAR. */

#include <stdio.h>
#include <stdlib.h>

void parOuImpar(int numero);

int main(void)
{
    // Declaração de variáveis
    int numero;

    // Solicitando número para o usuário
    printf("Digite um numero: ");
    scanf("%i", &numero);

    // Passando número para função parOuImpar
    printf("\n");
    parOuImpar(numero);

    return 0;
}

// Função que exibe se um número é par ou ímpar
void parOuImpar(int numero)
{
    if (numero % 2 == 0)
    {
        printf("O numero %i e PAR.\n", numero);
    }
    else
    {
        printf("O numero %i e IMPAR.\n", numero);
    }

    return;
}