/* Crie um programa que tenha uma função SuperSomador(), que vai receber dois
números como parâmetro e depois retornar a soma de todos os valores no
intervalo entre os valores recebidos.
Ex:
SuperSomador(1, 6) vai somar 1 + 2 + 3 + 4 + 5 + 6 e vai retornar 21
SuperSomador(15, 19) vai somar 15 + 16 + 17 + 18 + 19 e vai retornar 85 */

#include <stdio.h>
#include <stdlib.h>

int somaEntreIntervalos(int inicio, int fim);

int main(void)
{
    // Declaração de variáveis
    int primeiroValor = 0, ultimoValor = 0, somaIntervalo = 0;

    // Solicitando valores para o usuário
    printf("Digite o primeiro valor: ");
    scanf("%i", &primeiroValor);
    printf("Digite o ultimo valor: ");
    scanf("%i", &ultimoValor);

    // Passando valores e armazenando a soma dos valores no intervalo em uma variável
    somaIntervalo = somaEntreIntervalos(primeiroValor, ultimoValor);

    // Exibindo resultados
    printf("\n");
    printf("A soma dos valores no intervalo entre %i e %i vale %i.\n", primeiroValor, ultimoValor, somaIntervalo);

    return 0;
}

int somaEntreIntervalos(int inicio, int fim)
{
    int somaIntervalo = 0;

    for (int i = inicio; i <= fim; i++)
    {
        somaIntervalo += i;
    }

    return somaIntervalo;
}