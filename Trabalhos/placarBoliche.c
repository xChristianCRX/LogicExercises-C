#include <stdio.h>
#include <stdlib.h>

int calcularPontuacao(int jogadas[]) {
    int pontuacao = 0;
    for (int i = 0; i < 10; i++) {
        int primeiraBola = jogadas[i];
        int segundaBola = jogadas[i + 1];

        if (primeiraBola == 10) {
            pontuacao += primeiraBola + segundaBola + jogadas[i + 2];
            i -= 1;
        } else if (primeiraBola + segundaBola == 10) {
            pontuacao += primeiraBola + segundaBola + jogadas[i + 2];
        } else {
            pontuacao += primeiraBola + segundaBola;
        }
        i += 1;
    }
    return pontuacao;
}

void exibirJogadas(int jogadas[], int totalJogadas) {
    for (int i = 0; i < totalJogadas; i++) {
        printf("| ");
        if (totalJogadas - i == 1) {
            printf("%d", jogadas[totalJogadas - 1]);
        } else {
            int primeiraBola = jogadas[i];
            int segundaBola = jogadas[i + 1];

            if (primeiraBola + segundaBola == 10 && primeiraBola != 10) {
                printf("%d /", primeiraBola);
            } else if (primeiraBola == 10) {
                printf("X _");
                i -= 1;
            } else {
                printf("%d %d", primeiraBola, segundaBola);
            }
        }
        printf(" | ");
        i += 1;
    }
}

int main() {
    int* jogadas;
    jogadas = (int*)malloc(sizeof(int) * 21);

    int totalFrames = 10;
    int frameAtual = 0;
    int indiceJogada = 0;

    while (frameAtual < totalFrames + 1) {
        int primeiraBola, segundaBola;
        scanf("%d", &primeiraBola);
        scanf("%d", &segundaBola);

        if (primeiraBola == 10 || segundaBola == 10) {
            jogadas[indiceJogada] = primeiraBola;
            indiceJogada++;
            frameAtual++;
            jogadas[indiceJogada] = segundaBola;
        } else {
            jogadas[indiceJogada] = primeiraBola;
            indiceJogada++;
            jogadas[indiceJogada] = segundaBola;
        }

        if (frameAtual == 10) {
            if (jogadas[indiceJogada - 1] + jogadas[indiceJogada - 2] == 10) {
                int bolaExtra;
                scanf("%d", &bolaExtra);
                indiceJogada++;
                jogadas[indiceJogada] = bolaExtra;
                frameAtual++;
                totalFrames++;
            } else if (jogadas[indiceJogada - 1] == 10) {
                jogadas[indiceJogada] = primeiraBola;
                indiceJogada++;
                jogadas[indiceJogada] = segundaBola;
                frameAtual++;
                totalFrames++;
            }
        }

        indiceJogada++;
        frameAtual++;
    }

    printf("\n");
    exibirJogadas(jogadas, indiceJogada);
    printf("\n");

    int pontuacaoFinal = calcularPontuacao(jogadas);
    printf("\nPontuação final: %d\n", pontuacaoFinal);

    free(jogadas);
    return 0;
}
