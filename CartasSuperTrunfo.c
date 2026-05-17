#include <locale.h>
#include <stdio.h>  

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n---Dados da carta 1---\n");
    char estado1;
    char codigo1 [4];
    char nome1 [50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;

    printf("\n---Carta 1---\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado1);
    printf("Digite o codigo: ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Digite a populacao: ");
    scanf(" %lu", &populacao1);
    printf("Digite a area km2: ");
    scanf(" %f",&area1);
    printf("Digite o PIB em bilhoes de reais: ");
    scanf(" %f",&pib1);
    printf("Digite os pontos turisticos: ");
    scanf(" %d",&pontosturisticos1);
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 *1000000000 / (float)populacao1;
    printf("Densidade populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita1: %.2f reais\n", pibpercapita1);

    printf("\n---Dados da carta 2---\n");
    char estado2;
    char codigo2 [4];
    char nome2 [50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    printf("\n---Carta 2---\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo: ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a populacao: ");
    scanf(" %lu", &populacao2);
    printf("Digite a area km2: ");
    scanf(" %f", &area2);
    printf("Digite o PIB em bilhoes de reais: ");
    scanf(" %f",&pib2);
    printf("Digite os pontos turisticos: ");
    scanf(" %d",&pontosturisticos2);
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 *1000000000 / (float)populacao2;
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita2: %.2f reais\n", pibpercapita2 );

    //Calculo do Super Poder//---
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pibpercapita1 + (1.0f / densidade1); 
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibpercapita2 + (1.0f / densidade2);
    
    //Comparativo das Cartas//
    int CompPopulacao = populacao1 > populacao2;
    int comparea = area1 > area2;
    int comppib = pib1 > pib2;
    int compPontosturisticos = pontosturisticos1 > pontosturisticos2;
    int comppibpercapita = pibpercapita1 > pibpercapita2;
    int compDensidade = densidade1 < densidade2;
    int compsuperPoder = superpoder1 > superpoder2;

    printf("\n---Resultados---\n");
    printf("Populacao: Carta 1 venceu (%d)\n", CompPopulacao);
    printf("Area: Carta 1 venceu (%d)\n", comparea);
    printf("Pib: Carta 1 venceu (%d)\n", comppib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", compPontosturisticos);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", comppibpercapita);
    printf("Densidade: Carta 1 venceu (%d)\n", compDensidade);
    printf("Super Poder: Carta 1 venceu (%d)\n", compsuperPoder);

    return 0;
}