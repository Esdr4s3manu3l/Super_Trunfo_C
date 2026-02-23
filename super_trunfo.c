#include <stdio.h>
#include <string.h>

int main() {

    // =========================
    // CARTAS PRÉ-DEFINIDAS
    // =========================

    char pais1[50] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 1868000000000.0;
    int pontos1 = 30;
    float densidade1 = populacao1 / area1;

    char pais2[50] = "Argentina";
    int populacao2 = 45000000;
    float area2 = 2780400.0;
    float pib2 = 632000000000.0;
    int pontos2 = 25;
    float densidade2 = populacao2 / area2;

    int opcao;

    // =========================
    // MENU INTERATIVO
    // =========================

    printf("=====================================\n");
    printf("      SUPER TRUNFO - PAISES\n");
    printf("=====================================\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n\n", pais1, pais2);

    // =========================
    // SWITCH PARA ESCOLHA
    // =========================

    switch(opcao) {

        case 1: // POPULAÇÃO
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", pais1);
            } 
            else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", pais2);
            } 
            else {
                printf("Empate!\n");
            }
            break;

        case 2: // ÁREA
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n", pais2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", pais1);
            } 
            else if (area2 > area1) {
                printf("Vencedor: %s\n", pais2);
            } 
            else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);
            } 
            else if (pib2 > pib1) {
                printf("Vencedor: %s\n", pais2);
            } 
            else {
                printf("Empate!\n");
            }
            break;

        case 4: // PONTOS TURÍSTICOS
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", pais1);
            } 
            else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", pais2);
            } 
            else {
                printf("Empate!\n");
            }
            break;

        case 5: // DENSIDADE (REGRA INVERTIDA)
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n", pais2, densidade2);

            // REGRA DIFERENTE → MENOR VENCE
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", pais1);
            } 
            else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", pais2);
            } 
            else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}