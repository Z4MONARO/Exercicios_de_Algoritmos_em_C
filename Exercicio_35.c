/* Uma empresa de aluguel de carros precisa cobrar pelos seus serviços. O
aluguel de um carro custa R$ 90 por dia para carro popular e R$ 150 por dia para
carro de luxo. Além disso, o cliente paga por Km percorrido. Faça um programa
que leia o tipo de carro alugado (popular ou luxo), quantos dias de aluguel e
quantos Km foram percorridos. No final mostre o preço a ser pago de acordo com a
tabela a seguir:
    - Carros populares (aluguel de R$ 90 por dia)
        - Até 100km percorridos: R$ 0,20 por Km
        - Acima de 100km percorridos: R$ 0,10 por Km
    - Carros de luxo (aluguel de R$ 150 por dia)
        - Até 200km percorridos: R$ 0,30 por Km
        - Acima de 200km percorridos: R$ 0,25 por Km */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // Declaração de variáveis
    int tipoDeCarro, diasAlugados;
    float kmPercorridos, precoAPagar;

    // Solicitando valores ao usuário
    printf("Tipo de carro alugado: \n[0] Popular \n[1] Luxo \n\n");
    scanf("%i", &tipoDeCarro);
    printf("Quantidade de dias que o carro foi alugado: ");
    scanf("%i", &diasAlugados);
    printf("Quantidade de KM percorridos: ");
    scanf("%f", &kmPercorridos);

    // Esperando 2.5 s e limpando a tela
    Sleep(2500);
    system("cls");

    // Calculando o valor a ser pago de acordo com o tipo de carro
    // Se o carro for popular
    if (tipoDeCarro == 0)
    {
        // Se os km percorridos forem maiores que 100km
        if (kmPercorridos < 100)   
        {
            precoAPagar = (90 * diasAlugados) + (kmPercorridos * 0.20);
        } 
        // Senão, se os km percorridos forem mais que 100km
        else if (kmPercorridos > 100)
        {
            precoAPagar = (90 * diasAlugados) + (kmPercorridos * 0.10);
        }
    }
    // Senão, se o carro for de luxo
    else if (tipoDeCarro == 1)
    {
        if (kmPercorridos < 200)
        {
            precoAPagar = (150 * diasAlugados) + (kmPercorridos * 0.30);
        }
        else if (kmPercorridos > 200)
        {
            precoAPagar = (150 * diasAlugados) + (kmPercorridos * 0.25);
        }
    }

    // Imprimindo resultados
    if (tipoDeCarro == 0)
    {
        printf(" Tipo de carro: POPULAR.\n Dias alugados: %i.\n KM percorridos: %0.2f.\n Valor total a pagar: R$ %0.2f\n", diasAlugados, kmPercorridos, precoAPagar);
    }
    else if (tipoDeCarro == 1)
    {
        printf(" Tipo de carro: LUXO.\n Dias alugados: %i.\n KM percorridos: %0.2f.\n Valor total a pagar: R$ %0.2f\n", diasAlugados, kmPercorridos, precoAPagar);    
    }

    return 0;
}