/* Crie um programa que melhore o procedimento Gerador() da questão anterior
para que o programador possa escolher uma entre três bordas:

    +-------=======-------+ Borda 1
    ~~~~~~~~:::::::~~~~~~~~ Borda 2
    <<<<<<<<------->>>>>>>> Borda 3
    
Ex: Uma chamada válida seria Gerador("Portugol Studio", 3, 2)
~~~~~~~~:::::::~~~~~~~~
   Portugol Studio
   Portugol Studio
   Portugol Studio
~~~~~~~~:::::::~~~~~~~~ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void gerador(char frase[], int numeroExecucoes, int tipoDeBorda);

int main(void)
{
    // Declaração de variáveis
    char frase[30];
    int numeroExecucoes = 0, tipoDeBorda = 0;

    // Solicitando frase, número de execuções e tipo de borda para o usuário
    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);
    printf("Digite quantas vezes quer que a frase se repita: ");
    scanf("%i", &numeroExecucoes);
    printf("+-------=======-------+ Borda 1\n");
    printf("~~~~~~~~:::::::~~~~~~~~ Borda 2\n");
    printf("<<<<<<<<------->>>>>>>> Borda 3\n");
    printf("Tipo de borda: ");
    scanf("%i", &tipoDeBorda);

    // Passando dados inseridos pelo usuário como parâmetro pra função gerador
    system("cls");
    gerador(frase, numeroExecucoes, tipoDeBorda);

    return 0;
}

// Função que imprime uma frase n vezes, com uma borda escolhida pelo usuário
void gerador(char frase[], int numeroExecucoes, int tipoDeBorda)
{
    // Declaração de variáveis
    char borda[24];

    // Copiando o tipo de borda escolhida para variável local
    switch (tipoDeBorda)
    {
        case 1:
            strcpy(borda, "+-------=======-------+");
            break;
        case 2:
            strcpy(borda, "~~~~~~~~:::::::~~~~~~~~");
            break;
        case 3:
            strcpy(borda, "<<<<<<<<------->>>>>>>>");
            break;
        default:
            break;
    }

    printf("\n");
    printf("%s\n", borda);
    for (int i = 0; i < numeroExecucoes; i++)
    {
        printf("   %s\n", frase);
    }
    printf("%s\n", borda);

    return;
}