#include <stdio.h>


int main() {
    int peca, direcao, movimentos;
    int continuar = 1; // controla o loop principal (while)
    int i;

    printf("*** JOGO DE XADREZ ***\n");
   
    // LOOP PRINCIPAL DO JOGO
    while (continuar) {
        printf("\nEscolha uma peça:\n");
        printf("1. Bispo\n");
        printf("2. Torre\n");
        printf("3. Rainha\n");
        printf("0. Sair\n");
        printf("Digite uma opção: ");
        scanf("%d", &peca);

        if (peca == 0) {
            printf("Saindo do jogo...\n");
            break;
        }

        switch (peca) {
            case 1: // BISPO
                printf("Você selecionou o Bispo!\n");

                // DO-WHILE → valida a direção
                do {
                    printf("Escolha a direção do Bispo:\n");
                    printf("1. Diagonal superior direita\n");
                    printf("2. Diagonal superior esquerda\n");
                    printf("3. Diagonal inferior direita\n");
                    printf("4. Diagonal inferior esquerda\n");
                    scanf("%d", &direcao);

                    if (direcao < 1 || direcao > 4)
                        printf("Direção inválida! Tente novamente.\n");

                } while (direcao < 1 || direcao > 4);

                // DO-WHILE → valida o número de casas
                do {
                    printf("Quantas casas deseja mover (1 a 4)? ");
                    scanf("%d", &movimentos);
                    if (movimentos < 1 || movimentos > 4)
                        printf("Número inválido! Tente novamente.\n");
                } while (movimentos < 1 || movimentos > 4);

                printf("\nMovendo o Bispo...\n");

                // FOR → exibe o movimento passo a passo
                for (i = 1; i <= movimentos; i++) {
                    printf("O Bispo moveu %d casa(s)...\n", i);
                }

                printf("O Bispo terminou o movimento!\n");
                break;

            case 2: // TORRE
                printf("Você selecionou a Torre!\n");

                do {
                    printf("Escolha a direção da Torre:\n");
                    printf("1. Direita\n");
                    printf("2. Esquerda\n");
                    printf("3. Cima\n");
                    printf("4. Baixo\n");
                    scanf("%d", &direcao);

                    if (direcao < 1 || direcao > 4)
                        printf("Direção inválida! Tente novamente.\n");

                } while (direcao < 1 || direcao > 4);

                do {
                    printf("Quantas casas deseja mover (1 a 8)? ");
                    scanf("%d", &movimentos);
                    if (movimentos < 1 || movimentos > 4)
                        printf("Número inválido! Tente novamente.\n");
                } while (movimentos < 1 || movimentos > 4);

                printf("\nMovendo a Torre...\n");
                for (i = 1; i <= movimentos; i++) {
                    printf("A Torre moveu %d casa(s)...\n", i);
                }
                printf("A Torre terminou o movimento!\n");
                break;

            case 3: // RAINHA
                printf("Você selecionou a Rainha!\n");

                do {
                    printf("Escolha a direção da Rainha:\n");
                    printf("1. Diagonal superior direita\n");
                    printf("2. Diagonal superior esquerda\n");
                    printf("3. Diagonal inferior direita\n");
                    printf("4. Diagonal inferior esquerda\n");
                    printf("5. Direita\n");
                    printf("6. Esquerda\n");
                    printf("7. Cima\n");
                    printf("8. Baixo\n");
                    scanf("%d", &direcao);

                    if (direcao < 1 || direcao > 8)
                        printf("Direção inválida! Tente novamente.\n");

                } while (direcao < 1 || direcao > 8);

                do {
                    printf("Quantas casas deseja mover (1 a 8)? ");
                    scanf("%d", &movimentos);
                    if (movimentos < 1 || movimentos > 8)
                        printf("Número inválido! Tente novamente.\n");
                } while (movimentos < 1 || movimentos > 8);

                printf("\nMovendo a Rainha...\n");
                for (i = 1; i <= movimentos; i++) {
                    printf("A Rainha moveu %d casa(s)...\n", i);
                }
                printf("A Rainha terminou o movimento!\n");
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }

        // Pergunta se o jogador quer continuar 
        printf("\nDeseja continuar jogando? (1 - sim / 0 - não): ");
        scanf("%d", &continuar);
    }

    printf("\nObrigado por jogar!\n");
    return 0;
}
