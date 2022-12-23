/* Faça um programa que leia 7 nomes de pessoas e guarde-os em um vetor. No
final, mostre uma listagem com todos os nomes informados, na ordem inversa
daquela em que foram informados. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    char nomes[7][10];
    char nome[10];

    // Solicitando nomes para o usuário
    for (int i = 0; i < 7; i++)
    {
        printf("Nome %i: ", (i + 1));
        scanf("%s", &nome);
        strcpy(nomes[i], nome);
    }

    // Limpando a tela
    system("cls");

    // Imprimindo nomes na ordem inversa
    for (int i = 6; i >= 0; i--)
    {
        printf("Nome %i: %s\n", (i + 1), nomes[i]);
    }

    return 0;
}