/* Crie um programa que leia sexo e peso de 8 pessoas, usando a estrutura
"para". No final, mostre na tela:
    a) Quantas mulheres foram cadastradas.
    b) Quantos homens pesam mais de 100kg.
    c) A média de peso entre as mulheres.
    d) O maior peso entre os homens. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct humano
{
    int genero;
    float peso;
}
humano;

int main(void)
{
    // Declaração de variáveis
    humano pessoa[8];
    int mulheresCadastradas = 0, homensComMaisDe100kg = 0;
    float mediaPesoMulheres = 0, homemComMaiorPeso = 0;

    // Solicitando peso e gênero para o usuário
    for (int i = 0; i < 8; i++)
    {   
        // Solicitando dados da pessoa
        printf("Pessoa %i\n", (i + 1));
        printf("[0] Masculino || [1] Feminino \nGenero: ");
        scanf("%i", &pessoa[i].genero);
        printf("Peso (em kg): ");
        scanf("%f", &pessoa[i].peso);
        system("cls");

        // Verificando condições
        // Se a pessoa for do genêro feminino
        // (incrementa-se também a média para cálculo posterior)
        if (pessoa[i].genero == 1)
        {
            mulheresCadastradas++;
            mediaPesoMulheres += pessoa[i].peso;
        }
        // Se a pessoa for homem e pesar mais de 100kg
        if ((pessoa[i].genero == 0) && (pessoa[i].peso > 100))
        {
            homensComMaisDe100kg++;
        }
        // O maior peso entre os homens
        if ((pessoa[i].genero == 0) && (pessoa[i].peso > homemComMaiorPeso))
        {
            homemComMaiorPeso = pessoa[i].peso;
        }
    }

    // Calculando a média de peso das mulheres
    mediaPesoMulheres /= mulheresCadastradas;

    // Imprimindo resultados
    system("cls");
    printf("a) Quantidade de mulheres cadastradas: %i\n", mulheresCadastradas);
    printf("b) Homens que pesam mais de 100kg: %i\n", homensComMaisDe100kg);
    printf("c) Media de peso das mulheres: %0.2f\n", mediaPesoMulheres);
    printf("d) Maior peso entre os homens: %0.2f\n", homemComMaiorPeso);

    return 0;    
}