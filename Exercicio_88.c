/* Crie um programa que melhore o procedimento Gerador() da questão anterior
para que mostre uma mensagem várias vezes.
Ex: Ao chamar Gerador("Aprendendo Portugol", 4) aparece:
+-------=======-------+
   Aprendendo Portugol
   Aprendendo Portugol
   Aprendendo Portugol
   Aprendendo Portugol
+-------=======-------+*/

#include <stdio.h>
#include <stdlib.h>

void gerador(char frase[], int numeroExecucoes);

int main(void)
{
    // Declaração de variáveis
    char frase[30];
    int numeroExecucoes = 0;

    // Solicitando frase e número de execuções ao usuário
    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);
    printf("Digite quantas vezes quer que a frase se repita: ");
    scanf("%i", &numeroExecucoes);

    // Passando frase e número na função gerador()
    gerador(frase, numeroExecucoes);

    return 0;
}

// Função que imprime frase com bordas, repetidas n vezes
void gerador(char frase[], int numeroExecucoes)
{
    printf("\n");
    printf("+-------=======-------+\n");
    for (int i = 0; i < numeroExecucoes; i++)
    {
        printf("   %s\n", frase);
    }
    printf("+-------=======-------+\n");

    return;
}