#include <stdio.h>

int main() {
    // Estados do pais
    char estados[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    // Variáveis de entrada
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Variáveis calculadas
    float densidade_populacional;
    float pib_per_capita;

    printf("=== SUPER TRUNFO - PAISES ===\n");
    printf("=== NIVEL AVENTUREIRO ===\n\n");

    // Loop para 8 estados (A-H) e 4 cidades por estado
    for (int i = 0; i < 8; i++) {
        for (int j = 1; j <= 4; j++) {

            // Geração do código da carta (ex: A01, B03 etc.)
            char codigo[4];
            sprintf(codigo, "%c%02d", estados[i], j);

            printf("Cadastro da carta %s:\n", codigo);

            printf("Digite a populacao: ");
            scanf("%d", &populacao);

            printf("Digite a area (km²): ");
            scanf("%f", &area);

            printf("Digite o PIB (use a mesma unidade sempre): ");
            scanf("%f", &pib);

            printf("Digite o numero de pontos turisticos: ");
            scanf("%d", &pontos_turisticos);

            // Cálculos das novas propriedades
            // Densidade Populacional = Populacao / Area
            densidade_populacional = populacao / area;

            // PIB per Capita = PIB / Populacao
            pib_per_capita = pib / populacao;

            // Exibicao dos dados
            printf("\n--- Carta %s ---\n", codigo);
            printf("Populacao: %d habitantes\n", populacao);
            printf("Area: %.2f km²\n", area);
            printf("PIB: %.2f (mesma unidade utilizada na entrada)\n", pib);
            printf("Pontos Turisticos: %d\n", pontos_turisticos);

            printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
            printf("PIB per Capita: %.6f (PIB por habitante na mesma unidade)\n", pib_per_capita);
            printf("-----------------------------\n\n");
        }
    }

    printf("Cadastro concluido! Todas as cartas foram registradas com as propriedades calculadas.\n");
    return 0;
}
