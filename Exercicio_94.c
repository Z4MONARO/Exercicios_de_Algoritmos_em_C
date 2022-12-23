/* [DESAFIO] Desenvolva um aplicativo que tenha um procedimento chamado
Fibonacci() que recebe um único valor inteiro como parâmetro, indicando quantos
termos da sequência serão mostrados na tela. O seu procedimento deve receber
esse valor e mostrar a quantidade de elementos solicitados.
Obs: Use os exercícios 70 e 75 para te ajudar na solução.
Ex:
Fibonacci(5) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> FIM
Fibonacci(9) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> 8 >> 13 >> 21 >> 34 >> FIM */

#include <stdio.h>
#include <stdlib.h>

void fibonacci(int quantidadeDeElementos);

int main(void)
{
    // Declaração de variáveis
    int quantidadeDeElementos = 0;

    // Solicitando valor ao usuário
    printf("\n");
    printf("Digite a quantidade de elementos da sequencia de Fibonacci deseja ver: ");
    scanf("%i", &quantidadeDeElementos);

    // Passando valor inserido como parâmetro para função fibonacci
    printf("\n");
    fibonacci(quantidadeDeElementos);

    return 0;
}

// Função que mostra um n quantidade de elementos da sequência de Fibonacci
void fibonacci(int quantidadeDeElementos)
{
    // Declaração de variáveis locais
    int antecessor = 0, fibonacciAtual = 0, numeroFibonacci = 1;

    // Imprimindo sequência de Fibonacci
    printf("Fibonacci: ");
    for (int i = 0; i < quantidadeDeElementos; i++)
    {
        printf("%i >> ", numeroFibonacci);
        antecessor = fibonacciAtual;
        fibonacciAtual = numeroFibonacci;
        numeroFibonacci = antecessor + fibonacciAtual;
    }
    printf("FIM\n");

    return;        
}