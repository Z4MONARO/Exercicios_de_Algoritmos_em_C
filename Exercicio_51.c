/* Faça um aplciativo que leia o preço de 8 produtos. No final, mostre na tela
qual foi o maior e qual foi o menor preço digitados. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    float produtos[8];
    float maiorPreco = 0, menorPreco = 0;

    // Solicitando valores do produtos para o usuário
    for (int i = 0; i < 8; i++)
    {
        printf("Digite o valor do produto %i: R$ ", (i + 1));
        scanf("%f", &produtos[i]);

        // Para a primeira execução, atribui valores do menor e maior preço para o produto digitado
        if (i == 0)
        {
            menorPreco = produtos[0];
            maiorPreco = produtos[0];
        }
        // Senão, faz as comparações e atribui o valor do menor e maior produto
        else
        {
            if (produtos[i] > maiorPreco)
            {
                maiorPreco = produtos[i];
            }
            else if (produtos[i] < menorPreco)
            {
                menorPreco = produtos[i];
            }
        }
    }

    // Imprimindo resultados
    printf("\n");
    printf("Dos produtos digitados, o MENOR PRECO foi R$ %0.2f e o MAIOR PRECO foi R$ %0.2f\n", menorPreco, maiorPreco);

    return 0;
}