#include <stdio.h>

int main(){

    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1; 

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2; 

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    printf("\n ==== CARTA 1 ====\n");
    printf("Estado:  %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado:  %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;

}
