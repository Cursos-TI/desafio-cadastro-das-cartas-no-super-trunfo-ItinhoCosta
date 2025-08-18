#include <stdio.h>
#include <string.h>

int main() {
    //Nível Mestre Concluido!
    printf ("Desafio Super Trunfo!\n");
    // Declaração das variáveis para a Carta 1
    char codigo1[10], estado1[20], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Declaração das variáveis para a Carta 2
    char codigo2[10], estado2[20], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Variável para a escolha do jogador no menu
    int escolha;

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

// Cálculos para a Carta 1 
densidadePopulacional1 = (float)populacao1 / area1;
pibPerCapita1 = pib1 / (float)populacao1;
superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + (1.0f / densidadePopulacional1) + pibPerCapita1;

// Cálculos para a Carta 2 
densidadePopulacional2 = (float)populacao2 / area2;
pibPerCapita2 = pib2 / (float)populacao2;
superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + (1.0f / densidadePopulacional2) + pibPerCapita2;

     // Exibição dos dados cadastrados
    printf("\n--- Dados da Carta 1 ---\n");
    printf("\nEstado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("\nEstado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

// --- MENU INTERATIVO E LÓGICA DE COMPARAÇÃO ---
    printf("\n--- Escolha um Atributo para Comparar ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("\nDigite o numero do atributo: ");
    scanf("%d", &escolha);

    printf("\n--- Resultado da Comparacao ---\n");

    switch (escolha) {
        case 1: // Comparação de População
            printf("Atributo: Populacao\n");
            printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Comparação de Área
            printf("Atributo: Area\n");
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // Comparação de PIB
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Comparação de Pontos Turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("Carta 1 - %s: %d\n", cidade1, pontos_turisticos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Comparação de Densidade Populacional (menor valor vence)
            printf("Atributo: Densidade Populacional\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, densidadePopulacional1);
            printf("Carta 2 - %s: %.2f\n", cidade2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) { // Menor valor vence
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6: // Comparação de PIB per Capita
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, pibPerCapita1);
            printf("Carta 2 - %s: %.2f\n", cidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 7: // Comparação de Super Poder
            printf("Atributo: Super Poder\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, superPoder1);
            printf("Carta 2 - %s: %.2f\n", cidade2, superPoder2);
            if (superPoder1 > superPoder2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (superPoder2 > superPoder1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida. Por favor, escolha um numero de 1 a 6.\n");
            break;

    }
        return 0;
    }