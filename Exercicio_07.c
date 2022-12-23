/* Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
sua terça parte.
Ex:
Digite um número: 3.5
O dobro de 3.5 é 7.0
A terça parte de 3.5 é 1.16666 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    float numero = 0;

    // Solicitando valor ao usuário
    printf("Digite um numero: ");
    scanf("%f", &numero);

    // Imprimindo resultados
    printf("O dobro de %0.1f e %0.1f\n", numero, (numero * 2));
    printf("A terca parte de %0.1f e %f\n", numero, (numero / 3));

    return 0;
}