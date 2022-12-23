/* Crie um programa que leia o sexo e a idade de várias pessoas. O programa vai
perguntar se o usuário quer continuar ou não a cada pessoa. No final, mostre:
    a) Qual é a maior idade lida
    b) Quantos homens foram cadastrados
    c) Qual é a idade da mulher mais jovem
    d) Qual é a média de idade entre os homens */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração de variáveis
    int idade = 0, genero = 0, maiorIdadeLida = 0, homensCadastrados = 0, mulherMaisJovem = 999, mediaIdadeHomens = 0;
    char resposta = 'S';

    // Solicitando valores para o usuário até que ele deseje sair do programa
    while (true)
    {   
        // Solicitando gênero e idade
        printf("[0] Masculino || [1] Feminino \nGenero: ");
        scanf("%i", &genero);
        printf("Idade: ");
        scanf("%i", &idade);

        // Verificando condições
        if (idade > maiorIdadeLida)
        {
            maiorIdadeLida = idade;
        }
        if (genero == 0)
        {
            homensCadastrados++;
            mediaIdadeHomens += idade;
        }
        if (genero == 1)
        {
            if (idade < mulherMaisJovem)
            {
                mulherMaisJovem = idade;
            }
        }

        // Perguntando se o usuário deseja continuar
        printf("\n");
        printf("Deseja continuar? [S/N] ");
        scanf(" %c", &resposta);
        // Verificando resposta e saindo do programa
        if ((resposta == 78) || (resposta == 110))
        {
            break;
        }
        system("cls");
    }

    // Calculando média da idade dos homens
    mediaIdadeHomens /= homensCadastrados;

    // Imprimindo resultados
    system("cls");
    printf("Maior idade lida: %i\n", maiorIdadeLida);
    printf("Quantidade de homens cadastrados: %i\n", homensCadastrados);
    printf("Idade da mulher mais jovem: %i\n", mulherMaisJovem);
    printf("Media da idade entre os homens: %i\n", mediaIdadeHomens);

    return 0;
}