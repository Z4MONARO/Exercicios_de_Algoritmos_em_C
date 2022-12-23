/* Escreva um programa para aprovar ou não o empréstimo bancário para a compra
de uma casa. O programa vai perguntar o valor da casa, o salário do comprador e
em quantos anos ele vai pagar. Calcule o valor da prestação mensal, sabendo que
ela não pode exceder 30% do salário ou então o empréstimo será negado. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    float valorImovel, salarioComprador, prestacaoMensal, valorMaximoParcela;
    int anosParaPagar;

    // Solicitando dados ao usuário
    printf("Valor do imovel: R$ ");
    scanf("%f", &valorImovel);
    printf("Salario do comprador: R$ ");
    scanf("%f", &salarioComprador);
    printf("Anos para pagar o imovel: ");
    scanf("%i", &anosParaPagar);

    // Calculando o valor máximo que uma parcela pode ter
    valorMaximoParcela = ((salarioComprador * 30) / 100);

    // Calculando o valor da parcela do imóvel
    prestacaoMensal = valorImovel / ((anosParaPagar * 365) / 12);

    system("cls");

    // Verificando se o valor da prestação do imóvel é maior que o valor máximo da prestação
    // Se o valor da prestação for maior que o valor máximo da parcela, o empréstimo será NEGADO
    if (prestacaoMensal > valorMaximoParcela)
    {
        printf("O valor da prestacao mensal (R$ %0.2f) superou o valor maximo que uma parcela pode ter (R$ %0.2f). Emprestimo NEGADO.\n", prestacaoMensal, valorMaximoParcela);
    }
    // Senão, se o valor da prestção for menor que o valor máximo da parcela, o empréstimo será APROVADO
    else if (prestacaoMensal < valorMaximoParcela)
    {
        printf("O valor da prestacao mensal (R$ %0.2f) foi inferior ao valor maximo de uma parcela (R$ %0.2f). Emprestimo APROVADO.\n", prestacaoMensal, valorMaximoParcela);
    }

    return 0;
}