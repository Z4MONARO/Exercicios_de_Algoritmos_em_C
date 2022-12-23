/* Um programa de vida saudável quer dar pontos em atividades físicas que podem
ser trocados por dinheiro. O sistema funciona assim:
    - Cada hora de atividade física no mês vale pontos
        - Até 10h de atividade no mês: ganha 2 pontos por hora
        - De 10h até 20h de atividade no mês: ganha 5 pontos por hora
        - Acima de 20h de atividade no mês: ganha 10 pontos por hora
    - A cada ponto ganho, o cliente fatura R$ 0,05 (5 centavos)
    
Faça um programa que leia quantas horas de atividade uma pessoa teve por mês,
calcule e mostre quantos pontos ela teve e quanto dinheiro conseguiu ganhar. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int calculaPontos(int horas);

int main(void)
{
    // Declaração de variáveis
    int horasAtividadeFisica, pontosPorHora;
    float valorDosPontos;

    // Solicitando valores para o usuário
    printf("Horas de atividade fisica durante o mes: ");
    scanf("%i", &horasAtividadeFisica);

    // Calculando a quantidade de pontos de acordo com as horas de exercício
    pontosPorHora = calculaPontos(horasAtividadeFisica);

    // Calculando a quantidade de dinheiro recebido por pontos
    valorDosPontos = pontosPorHora * 0.05;

    // Imprimindo resultados
    Sleep(500);
    system("cls");
    printf("Horas de atividade fisica durante o mes: %i\n", horasAtividadeFisica);
    printf("Pontos obtidos: %i\n", pontosPorHora);
    printf("Total acumulado: R$ %0.2f\n", valorDosPontos);

    return 0;

}

int calculaPontos(int horas)
{
    if (horas < 10)
    {
        return (2 * horas);
    }
    else if ((horas > 10) && (horas < 20))
    {
        return (5 * horas);
    }
    else
    {
        return (10 * horas);
    }
}