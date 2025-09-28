#include <stdio.h>

int main(void) {
    char estado1, estado2;

    // Vetor de letras válidas
    char estados[] = {'A', 'B', 'C', 'D', 'E', 'G'};

    // Dados das capitais
    char *cidades[] = {"Rio Branco", "Salvador", "Fortaleza", "Brasília", "Vitória", "Goiânia"};
    long int populacoes[] = {419452, 2886698, 2686612, 3055149, 365855, 1536097};
    double areas[] = {8835.21, 692.81, 314.93, 5802.0, 98.19, 739.49};
    double pibs[] = {15.00, 140.00, 67.00, 300.00, 45.00, 82.00}; // bilhões de reais
    int pontos[] = {10, 40, 35, 50, 20, 25};
    char *codigos[] = {"A01", "B01", "C01", "D01", "E01", "G01"};

    // Entrada apenas das letras
    printf("Carta 1:\nDigite a letra do estado (A, B, C, D, E ou G): ");
    scanf(" %c", &estado1);

    printf("Carta 2:\nDigite a letra do estado (A, B, C, D, E ou G): ");
    scanf(" %c", &estado2);

    // Encontrar os índices correspondentes
    int i1 = (estado1=='A')*0 + (estado1=='B')*1 + (estado1=='C')*2 + 
             (estado1=='D')*3 + (estado1=='E')*4 + (estado1=='G')*5;
    int i2 = (estado2=='A')*0 + (estado2=='B')*1 + (estado2=='C')*2 + 
             (estado2=='D')*3 + (estado2=='E')*4 + (estado2=='G')*5;

    // Cálculos automáticos
    double densidade1 = populacoes[i1] / areas[i1];
    double pib_per_capita1 = (pibs[i1]*1e9) / populacoes[i1];

    double densidade2 = populacoes[i2] / areas[i2];
    double pib_per_capita2 = (pibs[i2]*1e9) / populacoes[i2];

    // Saída
    printf("\n--- Resultado ---\n");

    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %ld\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f reais\n",
           estado1, codigos[i1], cidades[i1], populacoes[i1], areas[i1], pibs[i1], pontos[i1], densidade1, pib_per_capita1);

    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %ld\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f reais\n",
           estado2, codigos[i2], cidades[i2], populacoes[i2], areas[i2], pibs[i2], pontos[i2], densidade2, pib_per_capita2);

    return 0;
}