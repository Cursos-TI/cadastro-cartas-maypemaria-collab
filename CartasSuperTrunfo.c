#include <locale.h>
#include <stdio.h>  

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n---Dados da carta 1---\n");
    char estado1;
    char codigo1 [4];
    char nome1 [50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float pibpercapita1;

    printf("\n---Carta 1---\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado1);
    printf("Digite o codigo: ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Digite a populacao: ");
    scanf(" %d", &populacao1);
    printf("Digite a area km2: ");
    scanf(" %f",&area1);
    printf("Digite o PIB em bilhoes de reais: ");
    scanf(" %f",&pib1);
    printf("Digite os pontos turisticos: ");
    scanf(" %d",&pontosturisticos1);
    printf("Densidade populacional: %.2f hab\km2\n", (float)populacao1 / area1);
    printf("PIB per capita1: %.2f reais\n", (pib1 *1000000000) / (float)populacao1);

    printf("\n---Dados da carta 2---\n");
    char estado2;
    char codigo2 [4];
    char nome2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapita2;

    printf("\n---Carta 2---\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo: ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a populacao: ");
    scanf(" %d", &populacao2);
    printf("Digite a area km2: ");
    scanf(" %f", &area2);
    printf("Digite o PIB em bilhoes de reais: ");
    scanf(" %f",&pib2);
    printf("Digite os pontos turisticos: ");
    scanf(" %d",&pontosturisticos2);
    printf("Densidade2: %.2f\n", (float)populacao2 / area2);
    printf("PIB per capita2: %.2f reais\n", (pib2 * 1000000000) / (float)populacao2) ;

    return 0;
}