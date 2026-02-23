#include <stdio.h>
#include <string.h>

int main() {

    // =========================
    // CARTAS PRÉ-CADASTRADAS
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

    int atributo1, atributo2;

    float valor1_attr1 = 0, valor2_attr1 = 0;
    float valor1_attr2 = 0, valor2_attr2 = 0;

    // =========================
    // MENU PRIMEIRO ATRIBUTO
    // =========================

    printf("====== SUPER TRUNFO - NIVEL MESTRE ======\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    // =========================
    // MENU SEGUNDO ATRIBUTO (DINÂMICO)
    // =========================

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch(i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
            }
        }
    }

    printf("Opcao: ");
    scanf("%d", &atributo2);

    // Validação
    if (atributo1 == atributo2) {
        printf("Erro: Voce escolheu o mesmo atributo duas vezes!\n");
        return 0;
    }

    // =========================
    // FUNÇÃO DE SELEÇÃO DE VALORES
    // =========================

    // Primeiro atributo
    switch(atributo1) {
        case 1:
            valor1_attr1 = populacao1;
            valor2_attr1 = populacao2;
            break;
        case 2:
            valor1_attr1 = area1;
            valor2_attr1 = area2;
            break;
        case 3:
            valor1_attr1 = pib1;
            valor2_attr1 = pib2;
            break;
        case 4:
            valor1_attr1 = pontos1;
            valor2_attr1 = pontos2;
            break;
        case 5:
            valor1_attr1 = densidade1;
            valor2_attr1 = densidade2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // Segundo atributo
    switch(atributo2) {
        case 1:
            valor1_attr2 = populacao1;
            valor2_attr2 = populacao2;
            break;
        case 2:
            valor1_attr2 = area1;
            valor2_attr2 = area2;
            break;
        case 3:
            valor1_attr2 = pib1;
            valor2_attr2 = pib2;
            break;
        case 4:
            valor1_attr2 = pontos1;
            valor2_attr2 = pontos2;
            break;
        case 5:
            valor1_attr2 = densidade1;
            valor2_attr2 = densidade2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // =========================
    // SOMA DOS ATRIBUTOS
    // =========================

    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    // =========================
    // RESULTADOS INDIVIDUAIS
    // =========================

    printf("\nComparando %s x %s\n\n", pais1, pais2);

    printf("Atributo 1 -> %s: %.2f | %s: %.2f\n",
           pais1, valor1_attr1, pais2, valor2_attr1);

    printf("Atributo 2 -> %s: %.2f | %s: %.2f\n",
           pais1, valor1_attr2, pais2, valor2_attr2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    // =========================
    // OPERADOR TERNÁRIO PARA RESULTADO FINAL
    // =========================

    printf("\nResultado Final:\n");

    (soma1 > soma2) ? printf("Vencedor: %s\n", pais1) :
    (soma2 > soma1) ? printf("Vencedor: %s\n", pais2) :
                      printf("Empate!\n");

    return 0;
}