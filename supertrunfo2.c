#include <stdio.h>

int main(void) {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    long int populacao1, populacao2;
    double area1, area2;
    double pib1, pib2;
    int pontos1, pontos2;
    double densidade1, densidade2;
    double pib_per_capita1, pib_per_capita2;

    // Carta 1
    printf("Carta 1:\n");
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%ld", &populacao1);

    printf("Área (km²): ");
    scanf("%lf", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%ld", &populacao2);

    printf("Área (km²): ");
    scanf("%lf", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos da carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

    // Saída
    printf("\n--- Resultado ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
