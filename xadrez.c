#include <stdio.h>

// ============================
// FUNÇÕES RECURSIVAS
// ============================

// TORRE – movimento para a direita (recursivo)
void moverTorre(int casa, int limite) {
    if (casa > limite) return; // Caso base: fim da recursão
    printf("Casa %d: Direita\n", casa);
    moverTorre(casa + 1, limite); // Chamada recursiva
}

// RAINHA – movimento para a esquerda (recursivo)
void moverRainha(int casa, int limite) {
    if (casa > limite) return;
    printf("Casa %d: Esquerda\n", casa);
    moverRainha(casa + 1, limite);
}

// BISPO – movimento diagonal (recursivo + loops aninhados)
void moverBispo(int vertical, int limiteVertical, int limiteHorizontal) {
    if (vertical > limiteVertical) return; // Caso base: parou o movimento vertical

    printf("Movimento %d para CIMA:\n", vertical);

    // Loop aninhado – movimento horizontal dentro do vertical
    for (int horizontal = 1; horizontal <= limiteHorizontal; horizontal++) {
        printf("   Diagonal: CIMA + DIREITA (%d, %d)\n", vertical, horizontal);
    }

    moverBispo(vertical + 1, limiteVertical, limiteHorizontal); // chamada recursiva
}

// ============================
// CAVALO – loops complexos (sem recursividade)
// ============================

// Movimento do cavalo: duas casas para cima e uma para direita
void moverCavalo(int movimentosVerticais, int movimentosHorizontais) {
    printf("Movimento do CAVALO (em L: 2 para cima, 1 para direita)\n");

    // Loop externo controla o movimento vertical
    for (int cima = 1, direita = 1; cima <= movimentosVerticais; cima++) {

        // Quando chegar à segunda casa para cima, faz o movimento para direita
        if (cima == 2) {
            while (direita <= movimentosHorizontais) {
                printf("Movimento %d para DIREITA\n", direita);
                direita++;

                // Se chegou ao limite, encerra antecipadamente com break
                if (direita > movimentosHorizontais) break;
            }
        }

        // Caso contrário, apenas sobe
        printf("Movimento %d para CIMA\n", cima);

        // Continue pula o restante do loop e vai para a próxima iteração
        continue;
    }

    printf("Movimentação em L concluída com sucesso!\n");
}

// ============================
// FUNÇÃO PRINCIPAL
// ============================
int main() {
    // Constantes definidas no código (sem entrada do usuário)
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;
    const int MOV_BISPO_VERT = 3;
    const int MOV_BISPO_HORZ = 3;
    const int MOV_CAVALO_VERT = 2;
    const int MOV_CAVALO_HORZ = 1;

    printf("===== MOVIMENTOS COMPLEXOS DE XADREZ =====\n\n");

    // ---------------- TORRE ----------------
    printf("TORRE (recursividade - direita)\n");
    moverTorre(1, MOV_TORRE);
    printf("\n");

    // ---------------- RAINHA ----------------
    printf("RAINHA (recursividade - esquerda)\n");
    moverRainha(1, MOV_RAINHA);
    printf("\n");

    // ---------------- BISPO ----------------
    printf("BISPO (recursividade + loops aninhados - diagonal)\n");
    moverBispo(1, MOV_BISPO_VERT, MOV_BISPO_HORZ);
    printf("\n");

    // ---------------- CAVALO ----------------
    moverCavalo(MOV_CAVALO_VERT, MOV_CAVALO_HORZ);
    printf("\n");

    printf("===== TODAS AS MOVIMENTAÇÕES CONCLUÍDAS COM SUCESSO! =====\n");

    return 0;
}