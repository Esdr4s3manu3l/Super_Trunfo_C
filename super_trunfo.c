#include <stdio.h>

int main() {

    // =========================
    // DECLARAÇÃO DAS VARIÁVEIS
    // =========================

    // Carta 1
    char estado1[3];
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Carta 2
    char estado2[3];
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // =========================
    // ENTRADA DE DADOS - CARTA 1
    // =========================

    printf("=== Cadastro da Carta 1 ===\n");

    scanf("%s", estado1);
    scanf("%s", codigo1);
    scanf(" %[^\n]", nomeCidade1);
    scanf("%d", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // =========================
    // ENTRADA DE DADOS - CARTA 2
    // =========================

    printf("\n=== Cadastro da Carta 2 ===\n");

    scanf("%s", estado2);
    scanf("%s", codigo2);
    scanf(" %[^\n]", nomeCidade2);
    scanf("%d", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // =========================
    // COMPARAÇÃO (ATRIBUTO ESCOLHIDO: POPULAÇÃO)
    // =========================

    printf("\nComparacao de cartas (Atributo: Populacao):\n\n");

    printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n\n", nomeCidade2, estado2, populacao2);

    // Para população, maior valor vence
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    }
    else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}