#include <stdio.h>


int main() {
    // Vamos declarar as variáveis para a primeira carta
    char estado1[50];
    int codigo1;
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // E agora as variáveis para a segunda carta
    char estado2[50];
    int codigo2;
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // Vamos pedir as informações da primeira cidade
    printf("--- Primeira Carta ---\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite o código da carta: ");
    scanf("%d", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em milhões de R$): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Agora vamos calcular a densidade populacional e o PIB per capita da primeira cidade
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000.0 / populacao1; // Multiplicamos o PIB por 1 milhão para ter o valor total

    // Vamos pedir as informações da segunda cidade
    printf("\n--- Segunda Carta ---\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o código da carta: ");
    scanf("%d", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em milhões de R$): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Agora vamos calcular a densidade populacional e o PIB per capita da segunda cidade
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000.0 / populacao2; // Multiplicamos o PIB por 1 milhão para ter o valor total

    // Finalmente, vamos mostrar todas as informações das duas cartas, incluindo os cálculos
    printf("\n--- Resultados ---\n");

    printf("\n--- Primeira Carta ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %d\n", codigo1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de R$\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f R$\n", pib_per_capita1);

    printf("\n--- Segunda Carta ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de R$\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f R$\n", pib_per_capita2);

    return 0;
}