#include <stdio.h>
#include <string.h>

void limpar_entrada()
{ // Função para limpeza de buffer

    char c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int main()
{
    // Declaração de variáveis
    char Estado1;
    char CodigoCarta1[50];
    char NomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    float densidadePopulacional1;
    int numerosPontosTuristicos1;
    float pibPerCapita1;

    char Estado2;
    char CodigoCarta2[50];
    char NomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    float densidadePopulacional2;
    int numerosPontosTuristicos2;
    float pibPerCapita2;

    // leitura e coleta de dados da primeira carta

    printf("Digite a sigla correspondente ao estado da primeira carta (entre A e H):");
    scanf(" %c", &Estado1);

    limpar_entrada();
    printf("Digite o código correspondente a primeira carta:");
    fgets(CodigoCarta1, 50, stdin); // Faz a leitura da linha completa
    strtok(CodigoCarta1, "\n");     // Evita a leitura da quebra de linha

    printf("Digite o nome da primeira cidade:");
    fgets(NomeCidade1, 50, stdin); // Faz a leitura da linha completa
    strtok(NomeCidade1, "\n");     // Evita a leitura da quebra de linha

    printf("Digite a população da primeira cidade:");
    scanf(" %d", &populacao1);

    printf("Digite a área da primeira cidade:");
    scanf(" %f", &area1);

    printf("Digite o PIB da primeira cidade:");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos da primeira cidade:");
    scanf(" %d", &numerosPontosTuristicos1);

    // leitura e coleta de dados da segunda carta
    
    printf("Digite a sigla correspondente ao estado da segunda carta (entre A e H):");
    scanf(" %c", &Estado2);
    limpar_entrada();
    
    printf("Digite o código correspondente a segunda carta:");
    fgets(CodigoCarta2, 50, stdin); // Faz a leitura da linha completa
    strtok(CodigoCarta2, "\n");    // Evita a leitura da quebra de linha

    limpar_entrada();
    
    printf("Digite o nome da segunda cidade:");
    fgets(NomeCidade2, 50, stdin); // Faz a leitura da linha completa
    strtok(NomeCidade2, "\n");     // Evita a leitura da quebra de linha

    printf("Digite a população da segunda cidade:");
    scanf(" %d", &populacao2);

    printf("Digite a área da segunda cidade:");
    scanf(" %f", &area2);

    printf("Digite o PIB da segunda cidade:");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos da segunda cidade:");
    scanf(" %d", &numerosPontosTuristicos2);

    // Calculo Densidade

    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    // Calculo Pib Per Capita

    pibPerCapita1 =  pib1 / populacao1;
    pibPerCapita2 =  pib2 / populacao2;


    // Exibição de dados coletados

    printf("CARTA 1\n");
    printf(" Estado: %c\n", Estado1);
    printf(" Código: %s\n", CodigoCarta1);
    printf(" Nome da Cidade: %s\n", NomeCidade1);
    printf(" População: %d\n", populacao1);
    printf(" Área: %f\n", area1);
    printf(" Pib: %f\n", pib1);
    printf(" Número de pontos Turisticos: %d\n", numerosPontosTuristicos1);
    printf(" Densidade Populacional1: %.2f\n", densidadePopulacional1);
    printf(" Pib Per Capita: %.2f\n", pibPerCapita1);


    printf("CARTA 2\n");
    printf(" Estado: %c\n", Estado2);
    printf(" Código: %s\n", CodigoCarta2);
    printf(" Nome da Cidade: %s\n", NomeCidade2);
    printf(" População: %d\n", populacao2);
    printf(" Área: %f\n", area2); 
    printf(" PIB: %f\n", pib2);
    printf(" Número de pontos Turisticos: %d\n", numerosPontosTuristicos2);
    printf(" Densidade Populacional2: %.2f\n", densidadePopulacional2);
    printf(" Pib Per Capita: %.2f\n", pibPerCapita2);

    if (populacao1 > populacao2){

            printf("Carta 1 = %s, %d\n",NomeCidade1, populacao1);
            printf("Carta 2 = %s, %d\n",NomeCidade2, populacao2);
            printf("A população da primeira carta é maior que a segunda.\n");


    }else if(populacao2 > populacao1) {

            printf("Carta 1 = %s, %d\n",NomeCidade1, populacao1);
            printf("Carta 2 = %s, %d\n",NomeCidade2, populacao2);
            printf("A população da segunda carta é maior que a primeira.\n");


           

    }else{

        printf("Carta 1 = %s, %d\n",NomeCidade1, populacao1);
        printf("Carta 2 = %s, %d\n",NomeCidade2, populacao2);
        printf("O valor correspondente a população das duas cidades são iguais.\n");


    }

    return 0;

}