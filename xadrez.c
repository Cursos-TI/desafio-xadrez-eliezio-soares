#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#define CASAS_TORRE 5
#define CASAS_BISPO 5
#define CASAS_RAINHA 8

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Movimento do Bispo (while) → 5 casas na diagonal (cima e direita)
    printf("\nMovimento do Bispo:\n");
    i = 0;
    while (i < CASAS_BISPO) {
        printf("Cima, Direita\n");
        i++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Movimento da Torre (for) → 5 casas para a direita
    printf("\nMovimento da Torre:\n");
    for (i = 0; i < CASAS_TORRE; i++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // Movimento da Rainha (do-while) → 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < CASAS_RAINHA);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // Movimento do Cavalo (loop aninhado) → "L" (duas casas para baixo, uma para a esquerda)
    printf("\nMovimento do Cavalo:\n");


    i = 0;
    while (i < 1) {
        // Primeiro movimento: duas casas para baixo (loop for)
        for (int j = 0; j < 2; j++) {
            printf("Baixo\n");
        }

        // Segundo movimento: uma casa para a esquerda (loop while)
        printf("Esquerda\n");
        i++;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
