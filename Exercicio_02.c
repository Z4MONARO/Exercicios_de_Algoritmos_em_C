/* Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boas-vindas para ela:
Ex:
Qual é o seu nome? Gustavo
Olá Gustavo, é um prazer te conhecer! */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    char nome[50];

    // Solicitando nome do usuário
    printf("Qual o seu nome? ");
    scanf("%s", nome);

    // Imprimindo frase
    printf("Ola %s, e um prazer te conhecer!\n");
    
    return 0;
}