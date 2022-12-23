/* Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos
para todos, mas especialmente para mulheres. Faça um programa que leia nome,
sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendo
que:
    - Homens ganham 5% de desconto
    - Mulheres ganham 13% de desconto */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    float valorCompra, valorTotal;
    int sexo;
    char nome[10];

    // Solicitando preenchimento dos dados pelo usuário
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Sexo [0] Masculino || [1] Feminino: ");
    scanf("%i", &sexo);
    printf("Valor total da sua compra: R$ ");
    scanf("%f", &valorCompra);

    // Calculando desconto de acordo com o sexo
    if (sexo == 0)
    {
        valorTotal = valorCompra - ((valorCompra * 5) / 100);
    }
    else
    {
        valorTotal = valorCompra - ((valorCompra * 13) / 100);
    }

    // Imprimindo resultados
    printf("\n");
    if (sexo == 0)
    {
        printf("O cliente %s, do sexo masculino, ganhou 5%% de desconto, e o valor total da sua compra foi de R$ %0.2f\n", nome, valorTotal);
    }
    else
    {
        printf("A cliente %s, do sexo feminino, ganhou 13%% de desconto, e o valor total da sua compra foi de R$ %0.2f\n", nome, valorTotal);
    }

    return 0;
}