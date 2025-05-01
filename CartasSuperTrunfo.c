#include <stdio.h>

int main() {
    printf ("Desafio Xadrez/n");
    
    // Variáveis para a primeira carta
    char estado1, codigo1[4], nome1[50];
    int populacao1, pontos1;
    float area1, pib1;

    // Variáveis para a segunda carta
    char estado2, codigo2[4], nome2[50];
    int populacao2, pontos2;
    float area2, pib2;

    // Entrada da Carta 1
    printf("Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibição
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n",
           estado1, codigo1, nome1, populacao1, area1, pib1, pontos1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n",
           estado2, codigo2, nome2, populacao2, area2, pib2, pontos2);

    return 0;
}
