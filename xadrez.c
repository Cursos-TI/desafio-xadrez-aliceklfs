#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.
// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.

// Função para aparencia
void detalhe() {
    printf("\n==============================\n");
}

// Função de movimento da Torre
void moverTorre ( int casasTorre ) { // Função recursiva com armazenamento em pilha
    if ( casasTorre > 0 ) {
        moverTorre( casasTorre - 1);
        printf("Movimento %d: Direita\n", casasTorre); // Imprime o movimento da peça
    }
}

// Função do movimento do Bispo
void moverBispo () { // Função do bispo com loops aninhados
    int movimentoDiagonal = 5; // Movimenta 5 casas para cima e direita
     
    for ( int loopExterno = 1 ; loopExterno <= movimentoDiagonal ; loopExterno++ ) { // Início do loop externo - ( icinialização ; condição; incremento )
        printf("Movimento %d: Cima ", loopExterno); 

        for ( int loopInterno = 0 ; loopInterno < 1 ; loopInterno++ ){ // Início do loop interno - ( icinialização ; condição; incremento )
            printf("Direita\n");
        } // Fim do loop interno
    } // Fim do loop externo
}

// Função de movimento da Rainha
void moverRainha ( int casasRainha ) {
    if ( casasRainha > 0 ) { // Função recursiva com armazenamento em pilha
        moverRainha ( casasRainha - 1 );
        printf("Movimento %d: Esquerda\n", casasRainha);  
    }
}

// Função mover o cavalo
void moverCavalo () {  // Loops com variáveis múltiplas e condições avançadas
    for ( int vertical = 0, horizontal = 2 ; vertical <= 2 && horizontal >= 0 ; vertical++ , horizontal-- ){
        if ( vertical <= 1 ) {
            printf("Movimento %d: Cima\n", vertical + 1 ); // Movimento vertical, 2 casas para cima
            continue; //  Vai pula para a próxima iteração do for
        }
        
        if ( vertical == 2 && horizontal == 0) {
            printf("Movimento %d: Direita\n", horizontal + 3 );
            break; // Vai sair do loop de repetição
        }
    }
}


int main() {
    detalhe();
    printf("TORRE\n\n");
    moverTorre( 5 );
    detalhe();

    detalhe();
    printf("BISPO\n\n");
    moverBispo ();
    detalhe();

    detalhe();
    printf("RAINHA\n\n");
    moverRainha ( 8 );
    detalhe();

    detalhe();
    printf("CAVALO\n\n");
    moverCavalo ();
    detalhe();

    printf("\nFim do programa\n");
    return 0;
}