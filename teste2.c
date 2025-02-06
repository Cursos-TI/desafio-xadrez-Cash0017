#include <stdio.h>

void moverBispo(int casas, int passo) {
    if (casas <= 0) {
        return;
    }

    printf("Movimento do Bispo: Diagonal Superior Direita, Casa %d\n", passo);
    moverBispo(casas - 1, passo + 1);  // Chamada recursiva
}


int main() {
    // Definindo o número de movimentos diretamente no código
    int movimentosBispo = 5;
    int movimentosTorre = 5;
    int movimentosRainha = 8;
    
    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    moverBispo(movimentosBispo, 1);  // A função recursiva recebe o número de casas e o passo

    return 0;
}
