/* Faça um programa que leia as duas notas de um aluno em uma matéria e mostre
na tela a sua média na disciplina.
Ex:
Nota 1: 4.5
Nota 2: 8.5
A média entre 4.5 e 8.5 é igual a 6.5 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    float nota1, nota2, media;

    // Solicitando notas para o usuário
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    // Fazendo o cálculo da média e armazenando o resultado em uma variável
    media = (nota1 + nota2) / 2;

    // Imprimindo resultados
    printf("A media entre %0.1f e %0.1f e igual a %0.1f\n", nota1, nota2, media);

    return 0;
}