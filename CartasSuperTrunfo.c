#include <stdio.h>

int main() {
    printf ("Desafio Super Trunfo!\n");
    // Declaração das variáveis para a Carta 1
    char codigo1[4];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    // Declaração das variáveis para a Carta 2
    char codigo2[4];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

     // Cadastro da Carta 1
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


    return 0;
}
