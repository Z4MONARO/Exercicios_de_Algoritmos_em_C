/* Crie um algoritmo que leia o valor inicial da contagem, o valor final e o
incremento, mostrando em seguida todos os valores no intervalo:
Ex: Digite o primeiro valor: 3
Digite o ultimo valor: 10
Digite o incremento: 2
Contagem: 3 5 7 9 Acabou! */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    int primeiroValor, ultimoValor, incremento;

    // Solicitando valores para o usuário
    printf("Digite o primeiro valor: ");
    scanf("%i", &primeiroValor);
    printf("Digite o ultimo valor: ");
    scanf("%i", &ultimoValor);
    printf("Digite o incremento: ");
    scanf("%i", &incremento);

    // Imprimindo contagem
    printf("\n");
    for (int i = primeiroValor; i <= ultimoValor; i+=incremento)
    {
        printf("%i ", i);
    }
    printf("Acabou!\n");
}