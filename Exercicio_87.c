/* Crie um programa que melhore o procedimento Gerador() da questão anterior
para que mostre uma mensagem personalizada, passada como parâmetro.
Ex: Ao chamar Gerador("Aprendendo Portugol") aparece:
+-------=======-------+
   Aprendendo Portugol
+-------=======-------+ */

#include <stdio.h>
#include <stdlib.h>

// Função que imprime frase com efeito personalizado
void gerador(char frase[]);

int main(void)
{
    // Declaração de variáveis
    char frase[30];

    // Solicitando frase para o usuário
    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    // Passando frase para Gerador()
    gerador(frase);

    return 0;
}

void gerador(char frase[])
{
    printf("\n");
    printf("+-------=======-------+\n");
    printf("   %s\n", frase);
    printf("+-------=======-------+\n");

    return;
}