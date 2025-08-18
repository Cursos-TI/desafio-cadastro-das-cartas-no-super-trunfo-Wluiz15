#include <stdio.h>

int main() {
    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    

    printf(" Bem-vindo ao jogo Super Trunfo de Cidades! \n");

    // Dados da 1ª cidade
    printf("Digite a quantidade populacional da 1ª cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em Km²) da 1ª cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da 1ª cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da 1ª cidade: \n");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Dados da 2ª cidade
    printf("Digite a quantidade populacional da 2ª cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em Km²) da 2ª cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da 2ª cidade: \n ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da 2ª cidade: \n");
    scanf("%d", &pontosTuristicos2);

    printf("\n    Dados coletados com sucesso!   \n");

    //Soma da densidade populacional 
    densidade1 = (populacao1 / area1);
    densidade2 = (populacao2 / area2);

    //Soma da PIB per capita
    pibPerCapita1 = (pib1 / populacao1);
    pibPerCapita2 = (pib2 / populacao2);

    

    // Exibição dos dados
    printf("\nResumo das cidades:\n");

    // Cidade 1
    printf("\nCidade 1:\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB Per capita: %.2f\n", pibPerCapita1);

    // Cidade 2
    printf("\nCidade 2:\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB Per capita: %.2f\n", pibPerCapita2);








    return 0;
}

