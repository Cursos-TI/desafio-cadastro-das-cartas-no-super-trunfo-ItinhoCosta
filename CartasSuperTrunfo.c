#include <stdio.h>

int main() {
    printf ("Desafio Super Trunfo!\n");
    // Declaração das variáveis para a Carta 1
    char codigo1[10], estado1[20], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Declaração das variáveis para a Carta 2
    char codigo2[10], estado2[20], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidadePopulacional2;
    float pibPerCapita2;

     // Cadastro da Carta 1
    printf("\n--》Digite os Dados da Carta 1《--\n");
    printf("\nDigite o Estado da Carta 1 (ex: Alagoas): ");
    scanf("%s", estado1);

    printf("Digite a Cidade da Carta 1 (ex: Maceio): ");
    scanf("%s", cidade1);

    printf("Digite o Codigo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a Populacao da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a Area da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

     // Cadastro da Carta 2
    printf ("\n--》Digite os Dados da Carta 2《--\n");
    printf("\nDigite o Estado da Carta 2 (ex: Alagoas): ");
    scanf("%s", estado2);

    printf("Digite a Cidade da Carta 2 (ex: Maceio): ");
    scanf("%s", cidade2);

    printf("Digite o Codigo da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a Populacao da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a Area da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

// Cálculos para a Carta 1 densidadePopulacional1 = (float)populacao1 / area1;
pibPerCapita1 = pib1 / (float)populacao1;

// Cálculos para a Carta 2 densidadePopulacional2 = (float)populacao2 / area2;
pibPerCapita2 = pib2 / (float)populacao2;

     // Exibição dos dados cadastrados
    printf("\n--- Dados da Carta 1 ---\n");
    printf("\nEstado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("\nEstado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populaciona2: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    // --- Cálculo do Super Poder ---
    // A densidade populacional é invertida (1/densidade) para o cálculo
    float super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + (1.0 / densidade1) + pib_per_capita1;
    float super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + (1.0 / densidade2) + pib_per_capita2;

    // --- Exibição e Comparação dos Dados ---
    printf("\n--- Resultados da Comparacao ---\n");
    printf("1 significa que a Carta 1 venceu, 0 que a Carta 2 venceu.\n");

    // Comparação de População
    printf("Populacao: %d\n", populacao1 > populacao2 ? 1 : 0);

    // Comparação de Area
    printf("Area: %d\n", area1 > area2 ? 1 : 0);

    // Comparação de PIB
    printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);

    // Comparação de Pontos Turisticos
    printf("Pontos Turisticos: %d\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 0);
    
    // Comparação de Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: %d\n", densidade1 < densidade2 ? 1 : 0);
    
    // Comparação de PIB per Capita
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2 ? 1 : 0);
    
    // Comparação do Super Poder
    printf("Super Poder: %d\n", super_poder1 > super_poder2 ? 1 : 0);

    printf("\n--- Valores do Super Poder ---\n");
    printf("Super Poder Carta 1: %.2f\n", super_poder1);
    printf("Super Poder Carta 2: %.2f\n", super_poder2);


    return 0;
}
