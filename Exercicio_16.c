/* [DESAFIO] Escreva um programa para calcular a redução do tempo de vida de um
fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos ele
já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule
quantos dias de vida um fumante perderá e exiba o total de dias. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int cigarrosPorDia, anosQueFuma;
    float minutosPerdidos, diasPerdidos;

    // Solicitando valores para o usuario
    printf("Quantos cigarros voce fuma por dia? ");
    scanf("%i", &cigarrosPorDia);
    printf("Ja fuma ha quantos anos? ");
    scanf("%i", &anosQueFuma);

    // Calculando os dias perdidos
    minutosPerdidos = (anosQueFuma * 365) * (10 * cigarrosPorDia);
    diasPerdidos = minutosPerdidos/ (24 * 60);

    // Exibindo o resultado
    printf("\n");
    printf("Voce fuma %i cigarros por dia, ja fuma ha %i anos e ja perdeu %0.2f dias de vida.\n", cigarrosPorDia, anosQueFuma, diasPerdidos);

    return 0;
}