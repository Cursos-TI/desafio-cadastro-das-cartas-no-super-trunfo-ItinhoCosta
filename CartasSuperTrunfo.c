#include <stdio.h>

int main() {
    printf ("Desafio Super Trunfo!\n");
    // Declaração das variáveis para a Carta 1
    char codigo1[10], estado1[20], cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    // Declaração das variáveis para a Carta 2
    char codigo2[10], estado2[20], cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

     // Cadastro da Carta 1
    printf("Digite o estado da Carta 1 (ex: Alagoas): ");
    scanf("%s", &estado1);

    printf("Digite a cidade da Carta 1 (ex: Maceio): ");
    scanf("%s", &cidade1);

    printf("Digite o codigo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a populacao da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

     // Cadastro da Carta 2

    printf("Digite o estado da Carta 2 (ex: Alagoas): ");
    scanf("%s", &estado2);

    printf("Digite a cidade da Carta 2 (ex: Maceio): ");
    scanf("%s", &cidade2);

    printf("\nDigite o codigo da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a populacao da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

     // Exibição dos dados cadastrados
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);


    return 0;
}
