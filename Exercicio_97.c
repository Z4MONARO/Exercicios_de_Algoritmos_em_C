/* Refaça o exercício 91, só que agora em forma de função Maior(), mas faça uma
adaptação que vai receber TRÊS números como parâmetro e vai retornar qual foi o
maior entre eles. */

#include <stdio.h>
#include <stdlib.h>

int verificaMaiorNumero(int primeiroNumero, int segundoNumero, int terceiroNumero);

int main(void)
{
    // Declaração de variáveis
    int primeiroNumero = 0, segundoNumero = 0, terceiroNumero = 0, maiorNumero = 0;

    // Solicitando valores para o usuário
    printf("Digite o primeiro numero: ");
    scanf("%i", &primeiroNumero);
    printf("Digite o segundo numero: ");
    scanf("%i", &segundoNumero);
    printf("Digite o terceiro numero: ");
    scanf("%i", &terceiroNumero);

    // Verifica qual o maior número e o armazena em uma variável
    maiorNumero = verificaMaiorNumero(primeiroNumero, segundoNumero, terceiroNumero);

    // Imprimindo resultado
    printf("\n");
    printf("Dos valores digitados, o maior vale %i.\n", maiorNumero);

    return 0;
}

// Função que verifica qual o maior dentre três números
int verificaMaiorNumero(int primeiroNumero, int segundoNumero, int terceiroNumero)
{
    if ((primeiroNumero > segundoNumero) && (segundoNumero > terceiroNumero))
    {
        return primeiroNumero;
    }
    else if ((segundoNumero > primeiroNumero) && (segundoNumero > terceiroNumero))
    {
        return segundoNumero;
    }
    else
    {
        return terceiroNumero;
    }
}