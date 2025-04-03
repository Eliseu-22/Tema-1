#include <stdio.h>

// estrutura para guardar os dados da carta
struct Carta {
    char estado[30];
    int codigo;
    char nome[50];
    int populacao;
    float pib;
    float area;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
};

int main() {
    struct Carta carta;

    // entrada de dados
    printf("Digite o nome do estado:\n");
    scanf(" %[^\n]", carta.estado); // leitura com espaço

    printf("Digite o código da cidade:\n");
    scanf("%d", &carta.codigo);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", carta.nome);

    printf("Digite a populacao:\n");
    scanf("%d", &carta.populacao);

    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &carta.pib);

    printf("Digite a area da cidade (km2):\n");
    scanf("%f", &carta.area);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &carta.pontosTuristicos);

    // calculos simples
    carta.densidade = carta.populacao / carta.area;
    carta.pibPerCapita = (carta.pib * 1000000000) / carta.populacao;

    // exibindo a carta
    printf("\n--- Carta Super Trunfo ---\n");
    printf("Estado: %s\n", carta.estado);
    printf("Código da cidade: %d\n", carta.codigo);
    printf("Cidade: %s\n", carta.nome);
    printf("População: %d\n", carta.populacao);
    printf("PIB: %.2f bilhões\n", carta.pib);
    printf("Área: %.2f km2\n", carta.area);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta.densidade);
    printf("PIB per capita: %.2f\n", carta.pibPerCapita);

    return 0;
}
