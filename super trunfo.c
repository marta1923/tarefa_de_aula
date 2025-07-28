#include <stdio.h>
int main()
{
    // Dados para duas cartas
    char estado[2];
    char codigo_da_carta[4];
    char nome_cidade[60];
    int populacao;
    float area, pib;
    int numero_de_pontos_turisticos;

    for (int i = 1; i <= 2; i++)
    {
        printf("Carta %d:\n", i);

        printf("Estado(letra de A a H):");
        scanf(" %c\n", &estado[0]);

        printf("Código da carta:");
        scanf("%s\n", &codigo_da_carta);

        printf("Nome da cidade:");
        scanf("%s\n", &nome_cidade);

        printf("População:");
        scanf("%d\n", &populacao);

        printf("Área:");
        scanf("%f\n", &area);

        printf("PIB:");
        scanf("%f\n", &pib);

        printf("Número de pontos turísticos:");
        scanf("%d\n", &numero_de_pontos_turisticos);

        // Exibição formatada da carta

        printf("\nCarta %d:\n", i);
        printf("Estado: %c\n", estado[0]);
        printf("Código da carta: %s\n", codigo_da_carta);
        printf("Nome da cidade: %s\n", nome_cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos);
        printf("\n");
    }

    return 0;
}