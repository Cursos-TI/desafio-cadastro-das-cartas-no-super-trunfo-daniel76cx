#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Cadastro das Cartas + comparação de Pib
// Teste Danie Felizardo

int main() {
    char estado1, estado2, codico1[8], codico2[8], cidade1[50], cidade2[50];
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;

    // Entrada de dados da Carta 1
    printf("==============================================================\n");
    printf("========   Por favor coloque as informações da Carta 01 ======\n");
    printf("==============================================================\n");

    printf("Estado (Letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (01 a 04): ");
    scanf(" %2s", codico1);

    printf("Nome da cidade: ");
    getchar();
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados da Carta 2
    printf("==============================================================\n");
    printf("========   Por favor coloque as informações da Carta 02 ======\n");
    printf("==============================================================\n");

    printf("Estado (Letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (01 a 04): ");
    scanf(" %2s", codico2);

    printf("Nome da cidade: ");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo de densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição das informações
    printf("==============================================================\n");
    printf("==================  Informações sobre as cartas  =============\n");
    printf("==============================================================\n");

    printf("Carta 1 - %s", cidade1);
    printf("Estado: %c\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    printf("--------------------------------------------------------------\n");

    printf("Carta 2 - %s", cidade2);
    printf("Estado: %c\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    printf("==============================================================\n");
    printf("==================   Comparação das cartas   ==================\n");
    printf("==============================================================\n");

    // Escolher o critério fixo para comparação (pode mudar para outro depois)
    int criterio = 1; // 1 - População, 2 - Área, 3 - PIB, 4 - Pontos turísticos, 5 - Densidade Populacional, 6 - PIB per capita

    switch (criterio) {
        case 1: // População
            printf("Comparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %s: %d habitantes\n", cidade1, populacao1);
            printf("Carta 2 - %s: %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (populacao2 > populacao1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Comparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (area2 > area1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Comparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s: %.2f bilhões\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (pib2 > pib1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Comparação de cartas (Atributo: Pontos Turísticos):\n");
            printf("Carta 1 - %s: %d pontos turísticos\n", cidade1, pontos_turisticos1);
            printf("Carta 2 - %s: %d pontos turísticos\n", cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade Populacional (MENOR vence)
            printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (densidade2 < densidade1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 6: // PIB per capita
            printf("Comparação de cartas (Atributo: PIB per capita):\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, pib_per_capita1);
            printf("Carta 2 - %s: %.2f\n", cidade2, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (pib_per_capita2 > pib_per_capita1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
    }

    return 0;
}
