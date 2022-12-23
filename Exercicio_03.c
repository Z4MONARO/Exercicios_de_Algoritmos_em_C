/* Crie um programa que leia o nome e o salário de um funcionário, mostrando no final uma mensagem.
Ex:
Nome do Funcionário: Francisco Filho
Salário: 1850.45
O funcionário Francisco Filho tem um salário de R$ 1850.45 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    char nomeFuncionario[10], nomeFuncionario2[10];
    float salarioFuncionario;

    // Solicitando preenchimento pelo usuário
    printf("Nome do funcionario: ");
    // (Duas strings para caso o usuário queira digitar primeiro + segundo nome)
    scanf("%s %s", nomeFuncionario, nomeFuncionario2);
    printf("Salario: ");
    scanf("%f", &salarioFuncionario);

    // Imprimindo resultado
    printf("O funcionario %s %s tem um salario de R$ %0.2f", nomeFuncionario, nomeFuncionario2, salarioFuncionario);
    
    return 0;
}