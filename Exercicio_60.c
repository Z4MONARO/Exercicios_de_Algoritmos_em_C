/* Desenvolva um algoritmo que leia o nome, a idade e o sexo de várias pessoas.
O programa vai perguntar se o usuário quer ou não continuar. No final, mostre:
    a) O nome da pessoa mais velha
    b) O nome da mulher mais jovem
    c) A média de idade do grupo
    d) Quantos homens tem mais de 30 anos
    e) Quantas mulheres tem menos de 18 anos */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Criando um struct que tem o nome, a idade e o genero de um humano
typedef struct humano
{
    char nome[10];
    int idade, genero;
}
humano;

int main(void)
{
    // Declaração de variáveis
    // Criando uma variável pessoa, e alocando memória para essa variável
    humano *pessoa = malloc(sizeof(humano));
    if (pessoa == NULL)
    {
        printf("Nao foi possivel alocar espaco para a pessoa.\n");
        return 1;
    }
    // Criando demais variáveis
    char resposta = 'S';
    char pessoaMaisVelha[10];
    char mulherMaisJovem[10];
    int homensMaisDe30Anos = 0, mediaGrupo = 0, quantidadePessoas = 0, mulheresMenoresDe18Anos = 0, maiorIdade = 0, idadeMulherMaisJovem = 999;

    // Solicitando informações para o usuário
    while (true)
    {
        printf("Nome: ");
        scanf("%s", &pessoa->nome);
        printf("Idade: ");
        scanf("%i", &pessoa->idade);
        printf("[0] Masculino || [1] Feminino : ");
        scanf("%i", &pessoa->genero);

        // Verificando condições
        mediaGrupo += pessoa->idade;
        quantidadePessoas++;
        // Se a idade for maior que a maior idade
        if (pessoa->idade > maiorIdade)
        {
            // A variável maiorIdade recebe a idade da pessoa
            maiorIdade = pessoa->idade;
            // O nome da pessoa é copiado para a variável pessoaMaisVelha
            strcpy(pessoaMaisVelha, pessoa->nome);
        }
        // Se a idade da pessoa for menor que a idade da mulher e a pessoa for do gênero feminino
        if ((pessoa->idade < idadeMulherMaisJovem) && (pessoa->genero == 1))
        {
            // A variável idadeMulherMaisJovem recebe a idade da mulher
            idadeMulherMaisJovem = pessoa->idade;
            // O nome da mulher é copiado para a variável mulherMaisJovem 
            strcpy(mulherMaisJovem, pessoa->nome);
        }
        // Se a pessoa for do gênero feminino e tiver menos de 18 anos
        if ((pessoa->genero == 1) && (pessoa->idade < 18))
        {
            // O número de mulheres com menos de 18 é incrementado
            mulheresMenoresDe18Anos++;
        }
        // Se a pessoa for do gênero masculino e tiver mais de 30 anos
        if ((pessoa->genero == 0) && (pessoa->idade > 30))
        {
            // O números de homens com mais de 30 anos é incrementado
            homensMaisDe30Anos++;
        }

        // Perguntando se o usuário deseja continuar
        printf("\n");
        printf("Deseja continuar? [S/N] ");
        scanf(" %c", &resposta);
        // Se a resposta for 'N' ou 'n' (78 ou 100, respectivamente), o loop é quebrado
        if ((resposta == 78) || (resposta == 110))
        {
            break;
        }
        system("cls");
    }

    // Calculando a média do grupo
    mediaGrupo /= quantidadePessoas;

    // Imprimindo resultados
    system("cls");
    printf("Nome da pessoa mais velha: %s\n", pessoaMaisVelha);
    printf("Nome da mulher mais jovem: %s\n", mulherMaisJovem);
    printf("Media de idade do grupo: %i\n", mediaGrupo);
    printf("Homens com mais de 30 anos: %i\n", homensMaisDe30Anos);
    printf("Mulheres com menos de 18 anos: %i\n", mulheresMenoresDe18Anos);

    // Liberando a memória alocada para a pessoa
    free (pessoa);
    return 0;
}