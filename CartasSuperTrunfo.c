#include <stdio.h>

int main() {
    //---variaveis da carta 1---\n
    char estado1;
    char codigo1 [4];
    char nome1 [50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    printf("Digite o estado1: ");
    scanf(" %c", &estado1);
    printf("Digite o codigo1: ");
    scanf(" %s", codigo1);
    printf("Digite o nome1: ");
    scanf(" %s", nome1);
    printf("Digite a populacao1: ");
    scanf(" %d", &populacao1);
    printf("Digite a area1 km2: ");
    scanf(" %f",&area1);
    printf("Digite o PIB1: ");
    scanf(" %f",&pib1);
    printf("Digite os pontosturisticos1: ");
    scanf(" %d",&pontosturisticos1);

    //---variaveis da carta 2---\n
    char estado2;
    char codigo2 [4];
    char nome2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("Digite o estado2: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo2: ");
    scanf("%s", codigo2);
    printf("Digite o nome2: ");
    scanf("%s", nome2);
    printf("Digite a populacao2: ");
    scanf("%d", &populacao2);
    printf("Digite a area2 km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB2: ");
    scanf("%f",&pib2);
    printf("Digite os pontosturisticos2: ");
    scanf("%d",&pontosturisticos2);

    return 0;
}