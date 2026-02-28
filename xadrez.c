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
    printf( "\n==========================================================================\n" );
}

// Função de movimento da Torre
void moverTorre ( int casasTorre ) { // Função recursiva com armazenamento em pilha
    if ( casasTorre > 0 ) {
        moverTorre( casasTorre - 1);
        printf( "Movimento %d: Direita\n", casasTorre ); // Imprime o movimento da peça
    }

    if (casasTorre == 5) { // ajusta para o número de casas que você chamou
        printf( "\nResumo: A torre andou %d casas para a Direita.\n", casasTorre );
    }
}

// Função do movimento do Bispo
void moverBispo () { // Função do bispo com loops aninhados
    int movimentoDiagonal = 5; // Movimenta 5 casas para cima e direita
     
    for ( int i = 1 ; i <= movimentoDiagonal ; i++ ) { // Início do loop externo - ( icinialização ; condição; incremento )
        printf( "Movimento %d: Cima ", i ); 

        for ( int j = 0 ; j < 1 ; j++ ){ // Início do loop interno - ( icinialização ; condição; incremento )
            printf( "Direita\n" );
        } // Fim do loop interno
    } // Fim do loop externo
    // Frase final resumida
    printf( "\nResumo: O bispo andou %d casas na Diagonal.\n", movimentoDiagonal );
}

// Função de movimento da Rainha
void moverRainha ( int casasRainha ) {
    if ( casasRainha > 0 ) { // Função recursiva com armazenamento em pilha
        moverRainha ( casasRainha - 1 );
        printf( "Movimento %d: Esquerda\n", casasRainha );  
    }

    if ( casasRainha == 8 ) { // ajusta para o número de casas que você chamou
        printf( "\nResumo: A rainha andou %d casas para a Esquerda.\n", casasRainha );
    }
}

// Função mover o cavalo
void moverCavalo () {  // Loops com variáveis múltiplas e condições avançadas
    for ( int i = 0, j = 2 ; i <= 2 && j >= 0 ; i++ , j-- ){
        if ( i <= 1 ) {
            printf( "Movimento %d: Cima\n", i + 1 ); // Movimento vertical, 2 casas para cima
            continue; //  Vai pula para a próxima iteração do for
        }
        
        if ( i == 2 && j == 0 ) {
            printf( "Movimento %d: Direita\n", j + 3 ); // +3 é apenas para deixar a numeração da impressão correta "movimento 3"

            // Aqui dentro, usamos as variáveis para imprimir o resumo
            printf( "\nResumo: O cavalo andou %d casas para Cima e %d casa para a Direita.\n", i, j + 1) ; // MOstra corretamente que o cavalo andou 1 casa para a direita

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