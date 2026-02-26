#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int contadorTorre;
    int contadorBispo;
    int contadorRainha;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    //printf("\n");
    printf("\n==========================================\n");
    printf("BISPO\n");
    printf("\n");
    contadorBispo = 1;
    while ( contadorBispo <= 5 ) {
        printf("Casa %d: Cima Direita\n", contadorBispo); // Imprime o movimento da peça
        contadorBispo++;
    }
    printf("\n==========================================\n");


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\n==========================================\n");
    printf("TORRE\n");
    printf("\n");
    for ( contadorTorre = 1; contadorTorre <= 5; contadorTorre++) {
        
        printf("Casa %d: Direita\n", contadorTorre); // Imprime o movimento da peça
    }
    printf("\n==========================================\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n==========================================\n");
    printf("RAINHA\n");
    printf("\n");
    contadorRainha = 1;
    do {
        printf("Casa %d: Esquerda\n", contadorRainha); // Imprime o movimento da peça
        contadorRainha++;
    } while ( contadorRainha <= 8);
    printf("\n==========================================\n");


    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
