#include <stdio.h>

int main() {
    char estado1, estado2;
    char cidade1[30], cidade2[30];
    int cod1, cod2;
    long long int pop1, pop2;
    long long int area1, area2;
    int pt1, pt2;
    double pib1, pib2;
    double dens1, dens2;
    double ppc1, ppc2;
    double sp1, sp2;
    double carta1, carta2;

    // Carta 1
    printf("Digite a letra do estado da Carta 1:\n");
    scanf(" %c", &estado1);

    printf("Digite o nome da cidade da Carta 1:\n");
    scanf(" %[^\n]", cidade1);

    printf("Digite o codigo da carta 1:\n");
    scanf("%d", &cod1);

    printf("Digite a populacao da cidade:\n");
    scanf("%lld", &pop1);

    printf("Digite a area da cidade:\n");
    scanf("%lld", &area1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pt1);

    printf("Digite o PIB:\n");
    scanf("%lf", &pib1);

    dens1 = pop1 / (double)area1;
    ppc1 = pib1 / pop1;
    sp1 = pop1 + area1 + pt1 + pib1 + dens1 + ppc1;

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lld\n", pop1);
    printf("Area: %lld\n", area1);
    printf("Pontos Turisticos: %d\n", pt1);
    printf("PIB: %.2lf\n", pib1);
    printf("Densidade: %.2lf\n", dens1);
    printf("PIB per capita: %.2lf\n", ppc1);
    printf("Super poder: %.2lf\n", sp1);

    // Carta 2
    printf("\nDigite a letra do estado da Carta 2:\n");
    scanf(" %c", &estado2);

    printf("Digite o nome da cidade da Carta 2:\n");
    scanf(" %[^\n]", cidade2);

    printf("Digite o codigo da carta 2:\n");
    scanf("%d", &cod2);

    printf("Digite a populacao da cidade:\n");
    scanf("%lld", &pop2);

    printf("Digite a area da cidade:\n");
    scanf("%lld", &area2);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pt2);

    printf("Digite o PIB:\n");
    scanf("%lf", &pib2);

    dens2 = pop2 / (double)area2;
    ppc2 = pib2 / pop2;
    sp2 = pop2 + area2 + pt2 + pib2 + dens2 + ppc2;

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lld\n", pop2);
    printf("Area: %lld\n", area2);
    printf("Pontos Turisticos: %d\n", pt2);
    printf("PIB: %.2lf\n", pib2);
    printf("Densidade: %.2lf\n", dens2);
    printf("PIB per capita: %.2lf\n", ppc2);
    printf("Super poder: %.2lf\n", sp2);

    // Comparação
    carta1 = sp1;
    carta2 = sp2;

    printf("\nComparando as cartas...\n");
    if (carta1 > carta2) {
        printf("Carta 1 Venceu!\n");
    } else if (carta2 > carta1) {
        printf("Carta 2 Venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
