#include <stdio.h>

int main() {

    // =========================
    // CARTA 1
    // =========================
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    float densidade1, pibPerCapita1, superPoder1;

    // =========================
    // CARTA 2
    // =========================
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    float densidade2, pibPerCapita2, superPoder2;

    // =========================
    // ENTRADA CARTA 1
    // =========================
    printf("=== Cadastro da Carta 1 ===\n");

    scanf(" %c", &estado1);
    scanf("%s", codigo1);
    scanf(" %[^\n]", nomeCidade1);
    scanf("%lu", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontos1);

    // Cálculos Carta 1
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;

    superPoder1 = (float) populacao1 +
                  area1 +
                  pib1 +
                  (float) pontos1 +
                  pibPerCapita1 +
                  (1.0f / densidade1);

    // =========================
    // ENTRADA CARTA 2
    // =========================
    printf("=== Cadastro da Carta 2 ===\n");

    scanf(" %c", &estado2);
    scanf("%s", codigo2);
    scanf(" %[^\n]", nomeCidade2);
    scanf("%lu", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontos2);

    // Cálculos Carta 2
    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;

    superPoder2 = (float) populacao2 +
                  area2 +
                  pib2 +
                  (float) pontos2 +
                  pibPerCapita2 +
                  (1.0f / densidade2);

    // =========================
    // COMPARAÇÕES
    // =========================

    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    // REGRA ESPECIAL: menor densidade vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}