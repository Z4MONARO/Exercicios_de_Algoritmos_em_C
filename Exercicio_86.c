/* Crie um programa que tenha um procedimento Gerador() que, quando chamado.
mostre a mesagem "Olá, mundo!" com algum componente visual (linhas)
Ex: Ao chamar Gerador() aparece:
+-------=======-------+
   Olá, mundo!
+-------=======-------+ */

#include <stdio.h>
#include <stdlib.h>

void gerador(void);

int main(void)
{
    // Chamando função gerador
    gerador();

    return 0;
}

// Função que imprime mensagem na tela com componentes visuais
void gerador(void)
{
    printf("\n");
    printf("+-------=======-------+\n");
    printf("      Ola, mundo!\n");
    printf("+-------=======-------+\n");
}