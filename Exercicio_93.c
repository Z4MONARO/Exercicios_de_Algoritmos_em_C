/* Faça um programa que tenha um procedimento chamado Contador() que recebe
três valores como parâmetro: o início, o fim e o incremento de uma contagem. O
programa principal deve solicitar a digitação desses valores e passá-los ao
procedimento, que vai mostrar a contagem na tela.

Ex: Para os valores de início (4), fim (20) e incremento (3) teremos
Contador(4, 20, 3) vai mostrar na tela 4 >> 7 >> 10 >> 13 >> 16 >> 19 >> FIM */

#include <stdio.h>
#include <stdlib.h>

void contador(int inicio, int fim, int incremento);

int main(void)
{
    // Declaração de variáveis
    int valorInicial = 0,  valorFinal = 0, incremento = 0;

    // Solicitando valores para o usuário
    printf("Digite o valor inicial: ");
    scanf("%i", &valorInicial);
    printf("Digite o valor final: ");
    scanf("%i", &valorFinal);
    printf("Digite o incremento: ");
    scanf("%i", &incremento);

    // Passando valores para função contador
    printf("\n");
    contador(valorInicial, valorFinal, incremento);

    return 0;
}

// Função que faz uma contagem recebendo como parâmetro início, fim e incremento
void contador(int inicio, int fim, int incremento)
{
    printf("Contagem: ");
    for (int i = inicio; i < fim; i += incremento)
    {
        printf("%i >> ", i);
    }
    printf("FIM\n");

    return;
}