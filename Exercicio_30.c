/* [DESAFIO] Refaça o algoritmo 25, acrescentando o recurso de mostrar que tipo
de triângulo será formado:
    - EQUILÁTERO: todos os lados iguais
    - ISÓSCELES: dois lados iguais
    - ESCALENO: todos os lados diferentes */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int condicaoDeExistencia(float l1, float l2, float l3);
int verificaTipoTriangulo(float l1, float l2, float l3);

int main(void)
{
    // Declaração de variáveis
    int tipoTriangulo;
    float lado1, lado2, lado3;
    int podeFormarTriangulo = 0;

    // Solicitando valores dos lados para o usuário
    printf("Lado 1: ");
    scanf("%f", &lado1);
    printf("Lado 2: ");
    scanf("%f", &lado2);
    printf("Lado 3: ");
    scanf("%f", &lado3);

    // Verificando se os lados fornecidos podem formar ou não um triângulo
    podeFormarTriangulo = condicaoDeExistencia(lado1, lado2, lado3);

    // Verificando o tipo do triângulo
    // Se os lados puderem formar um triângulo (podeFormarTriangulo == 0)
    printf("\n");
    if (podeFormarTriangulo == 0)
    {
        // Verifica o tipo do triângulo e imprime o resultado
        tipoTriangulo = verificaTipoTriangulo(lado1, lado2, lado3);
        switch (tipoTriangulo)
        {
            case 1:
                printf("Os lados %0.2f, %0.2f e %0.2f podem formar um triangulo EQUILATERO.\n", lado1, lado2, lado3);
                break;
            case 2:
                printf("Os lados %0.2f, %0.2f e %0.2f podem formar um triangulo ISOSCELES.\n", lado1, lado2, lado3);
                break;
            case 3:
                printf("Os lados %0.2f, %0.2f e %0.2f podem formar um triangulo ESCALENO.\n", lado1, lado2, lado3);
                break;
            default:
                break;
        }
    }
    // Senão, não pode formar um triângulo
    else
    {
        // Imprime o resultado
        printf("Os lados %0.2f, %0.2f e %0.2f nao podem formar um triangulo.\n", lado1, lado2, lado3);
    }

    return 0;
}

int condicaoDeExistencia(float l1, float l2, float l3)
{
    // Verificando se algum lado é maior que a soma dos outros dois. Se for, não pode formar um triângulo e retorna 1 para o programa principal
    if (l1 > (l2 + l3) || l2 > (l1 + l3) || l3 > (l1 + l2))
    {
        return 1;
    }
    // Se todos os lados passarem pela condicional, retorna 0 para o programa principal, pois os lados podem formar um triângulo
    return 0;
}

int verificaTipoTriangulo(float l1, float l2, float l3)
{
    // Se todos os lados forem iguais, retorna que o tipo do triângulo é EQUILÁTERO (1)
    if ((l1 == l2) && (l2 == l3))
    {
        return 1;
    }
    // Senão, se pelo menos dois lados forem iguais, retorna que o tipo do triângulo é ISÓSCELES (2)
    else if ((l1 == l2) || (l2 == l3) || (l1 == l3))
    {
        return 2;
    }
    // Senão, retorna que o tipo do triângulo é ESCALENO, ou seja, todos os lados são diferentes (3)
    else
    {
        return 3;
    }
}