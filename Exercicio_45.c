/* O programa acima (Exercicio_44)  vai ter um problema quando digitarmos o primeiro valor
maior que o último. Resolva esse problema com um código que funcione em qualquer
situação. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    int primeiroValor, ultimoValor, incremento;

    // Solicitando valores ao usuário
    printf("Digite o primeiro valor: ");
    scanf("%i", &primeiroValor);
    printf("Digite o ultimo valor: ");
    scanf("%i", &ultimoValor);
    printf("Digite o incremento: ");
    scanf("%i", &incremento);

    // Mostrando a contagem
    printf("\n");
    // Se o primeiro valor for menor que o último, a contagem ocorre normalmente
    if (primeiroValor < ultimoValor)
    {
        for (int i = primeiroValor; i <= ultimoValor; i+=incremento)
        {
            printf("%i ", i);
        }
        printf("Acabou!\n");
    }
    // Se o último valor for menor que o primeiro valor, há uma troca entre os valores, e a contagem ocorre normalmente
    else if (primeiroValor > ultimoValor)
    {
        int auxiliar = primeiroValor;
        primeiroValor = ultimoValor;
        ultimoValor = auxiliar;

        for (int i = primeiroValor; i <= ultimoValor; i+=incremento)
        {
            printf("%i ", i);
        }
        printf("Acabou!\n");
    }
    
    return 0;
}