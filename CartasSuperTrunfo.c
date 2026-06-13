#include <stdio.h>

int main() {

    char estado[4];
    char estado2[4];

    char codigo1[4];
    char codigo2[4];

    char nome_cidade[25];
    char nome_cidade2[25];

    int pop1, pop2;
    int turisticos1, turisticos2;

    float area1, area2;
    float pib1, pib2;

    // CARTA1

    printf("Cadastro carta 1:\n");

    printf("Diga o estado (A-H): ");
    scanf("%s", estado);

    printf("Diga o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Diga o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade);

    printf("Diga o numero de populacao: ");
    scanf("%d", &pop1);

    printf("Diga o numero de pontos turisticos: ");
    scanf("%d", &turisticos1);

    printf("Diga a area da cidade: ");
    scanf("%f", &area1);

    printf("Diga o PIB da cidade: ");
    scanf("%f", &pib1);

    // CARTA2

    printf("\nCadastro carta 2:\n");

    printf("Diga o estado (A-H): ");
    scanf("%s", estado2);

    printf("Diga o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Diga o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Diga o numero de populacao: ");
    scanf("%d", &pop2);

    printf("Diga o numero de pontos turisticos: ");
    scanf("%d", &turisticos2);

    printf("Diga a area da cidade: ");
    scanf("%f", &area2);

    printf("Diga o PIB da cidade: ");
    scanf("%f", &pib2);

    //EXIBIR

    printf("\nInformacoes carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s%s\n", estado, codigo1);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", pop1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", turisticos1);

    printf("\nInformacoes carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", pop2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", turisticos2);

    return 0;
}
