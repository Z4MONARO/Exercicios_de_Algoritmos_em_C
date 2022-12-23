/* Faça um programa que leia a idade e o sexo de 5 pessoas, mostrando no final:
    a) Quantos homens foram cadastrados
    b) Quantas mulheres foram cadastradas
    c) A média de idade do grupo
    d) A média de idade dos homens
    e) Quantas mulheres tem mais de 20 anos */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    int genero = 0, idade = 0, homensCadastrados = 0, mulheresCadastradas = 0, mulheresMaisDe20Anos = 0;
    int mediaIdadeGrupo = 0, mediaIdadeHomens = 0;

    // Solicitando dados para o usuário
    for (int i = 0; i < 5; i++)
    {
        system("cls");
        printf("Pessoa %i \n[0] Masculino || [1] Feminino \nGenero: ", (i + 1));
        scanf("%i", &genero);
        printf("Idade: ");
        scanf("%i", &idade);
        Sleep(500);

        // Realizando classificações
        if (genero == 0)
        {
            homensCadastrados++;
            mediaIdadeHomens = mediaIdadeHomens + idade;
        }            
        else if (genero == 1)
        {
            mulheresCadastradas++;
            if (idade > 20)
            {
                mulheresMaisDe20Anos++;
            }
        }
        mediaIdadeGrupo = mediaIdadeGrupo + idade;
    }

    // Calculando médias
    mediaIdadeHomens = mediaIdadeHomens / homensCadastrados;
    mediaIdadeGrupo = mediaIdadeGrupo / 5;

    // Limpando a tela e exibindo resultados
    system("cls");
    printf("a) Homens cadastrados: %i\n", homensCadastrados);
    printf("b) Mulheres cadastradas: %i\n", mulheresCadastradas);
    printf("c) Media de idade do grupo: %i\n", mediaIdadeGrupo);
    printf("d) Media de idade dos homens: %i\n", mediaIdadeHomens);
    printf("e) Mulheres com mais de 20 anos: %i\n", mulheresMaisDe20Anos);

    return 0;
}