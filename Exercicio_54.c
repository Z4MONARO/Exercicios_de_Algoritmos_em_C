/* Desenvolva um aplicativo que leia o peso e a altura de 7 pessoas, mostrando
no final:
    a) Qual foi a média de altura do grupo.
    b) Quantas pessoas pesam mais de 90kg.
    c) Quantas pessoas que pesam menos de 50kg tem menos de 1.60m.
    d) Quantas pessoas que medem mais de 1.90m pesam mais de 100kg. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct pessoa
{
    float altura;
    float peso;
}
pessoa;

int main(void)
{
    // Declaração de variáveis
    float mediaAlturaGrupo = 0;
    int pesamMaisDe90kg = 0, menosDe160mComMenosDe50kg = 0, maisDe100kgCom190m = 0;
    pessoa pessoas[7];

    // Solicitando dados para o usuário
    for (int i = 0; i < 7; i++)
    {
        system("cls");
        printf("Pessoa %i\n", (i + 1));
        printf("Altura (em metros): ");
        scanf("%f", &pessoas[i].altura);
        printf("Peso (em kg): ");
        scanf("%f", &pessoas[i].peso);

        // Somando as alturas na variável mediaAlturaGrupo
        mediaAlturaGrupo = mediaAlturaGrupo + pessoas[i].altura;

        // Verificando condições
        // Se a pessoa pesar mais de 90kg
        if (pessoas[i].peso > 90)
        {
            pesamMaisDe90kg++;
        }
        // Se a pessoa tiver mais de 1.90m e mais de 100kg
        if ((pessoas[i].altura > 1.90) && (pessoas[i].peso > 100))
        {
            maisDe100kgCom190m++;
        }
        // Se a pessoa pesar menos de 50kg e tiver menos de 1.60m
        if ((pessoas[i].peso < 50) && (pessoas[i].altura < 1.60))
        {
            menosDe160mComMenosDe50kg++;
        }
    }

    // Calculando a média da altura do grupo
    mediaAlturaGrupo = mediaAlturaGrupo / 7;

    // Imprimindo resultados
    Sleep(2000);
    system("cls");
    printf("a) Media de altura do grupo: %0.2fm\n", mediaAlturaGrupo);
    printf("b) Pessoas que pesam mais de 90kg: %i\n", pesamMaisDe90kg);
    printf("c) Pessoas que pesam menos de 50kg e tem menos de 1.60m: %i\n", menosDe160mComMenosDe50kg);
    printf("d) Pessoas com 1.90m que pesam mais de 100kg: %i\n", maisDe100kgCom190m);

    return 0;
}