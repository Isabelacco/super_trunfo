#include <stdio.h>

int main() {
    // Declaração de TODAS as variáveis no início
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados da primeira carta
    printf("Digite o estado da primeira cidade (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da primeira carta (Ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê uma string com espaços
    
    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área da primeira cidade (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da primeira cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da segunda carta
    printf("\nDigite o estado da segunda cidade (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da segunda carta (Ex: A02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área da segunda cidade (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da segunda cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da primeira carta
    printf("\n-----------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\n-----------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("\n-----------------------------\n");

    return 0;
}
