/* Escreva um programa que leia o ano de nascimento de um rapaz e mostrea a sua
situação em relação ao alistamento militar.
    - Se estiver antes dos 18 anos, mostre em quantos anos faltam para o
alistamento.
    - Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do
alistamento. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int idade;

    // Solicitando idade para o usuário
    printf("Digite sua idade: ");
    scanf("%i", &idade);

    // Verificando a idade para o alistamento
    printf("\n");
    // Se a idade for menor que 18
    if (idade < 18)
    {
        // A quantidade de anos faltantes para o alistamento será 18 - IDADE
        int anosParaAlistamento = 18 - idade;
        printf("Ainda faltam %i anos para o alistamento militar.\n", anosParaAlistamento);
    }
    // Senão, se a idade for maior que 18
    else if (idade > 18)
    {
        // A quantidade de anos que já se passaram do alistamento será IDADE - 18
        int anosPosAlistamento = idade - 18;
        printf("Ja se passaram %i anos do alistamento militar.\n", anosPosAlistamento);
    }

    return 0;
}