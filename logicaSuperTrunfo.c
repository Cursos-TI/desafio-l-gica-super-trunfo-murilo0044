#include <stdio.h>
#include <string.h>

typedef struct {
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos;
} Carta;

int main() {
    Carta cartaA, cartaB;

    // Cadastro da Carta A
    printf("=== Cadastro da Carta A ===\n");
    printf("Digite o codigo da carta: ");
    scanf("%s", cartaA.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cartaA.nome);
    printf("Digite a populacao: ");
    scanf("%d", &cartaA.populacao);
    printf("Digite a area (km²): ");
    scanf("%f", &cartaA.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &cartaA.pib);
    cartaA.pontos = 0;

    // Cadastro da Carta B
    printf("\n=== Cadastro da Carta B ===\n");
    printf("Digite o codigo da carta: ");
    scanf("%s", cartaB.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cartaB.nome);
    printf("Digite a populacao: ");
    scanf("%d", &cartaB.populacao);
    printf("Digite a area (km²): ");
    scanf("%f", &cartaB.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &cartaB.pib);
    cartaB.pontos = 0;

    // Comparações
    printf("\n=== Comparacao das Cartas ===\n");

    if (cartaA.populacao > cartaB.populacao) {
        printf("Maior populacao: %s (%d habitantes)\n", cartaA.nome, cartaA.populacao);
        cartaA.pontos++;
    } else if (cartaB.populacao > cartaA.populacao) {
        printf("Maior populacao: %s (%d habitantes)\n", cartaB.nome, cartaB.populacao);
        cartaB.pontos++;
    } else {
        printf("Empate em populacao.\n");
    }

    if (cartaA.area > cartaB.area) {
        printf("Maior area: %s (%.2f km²)\n", cartaA.nome, cartaA.area);
        cartaA.pontos++;
    } else if (cartaB.area > cartaA.area) {
        printf("Maior area: %s (%.2f km²)\n", cartaB.nome, cartaB.area);
        cartaB.pontos++;
    } else {
        printf("Empate em area.\n");
    }

    if (cartaA.pib > cartaB.pib) {
        printf("Maior PIB: %s (%.2f bilhões)\n", cartaA.nome, cartaA.pib);
        cartaA.pontos++;
    } else if (cartaB.pib > cartaA.pib) {
        printf("Maior PIB: %s (%.2f bilhões)\n", cartaB.nome, cartaB.pib);
        cartaB.pontos++;
    } else {
        printf("Empate em PIB.\n");
    }

    // Resultado final
    printf("\n=== Resultado Final ===\n");
    if (cartaA.pontos > cartaB.pontos) {
        printf("A carta vencedora é a Carta A (%s) com %d pontos!\n", cartaA.nome, cartaA.pontos);
    } else if (cartaB.pontos > cartaA.pontos) {
        printf("A carta vencedora é a Carta B (%s) com %d pontos!\n", cartaB.nome, cartaB.pontos);
    } else {
        printf("Empate! As duas cartas tiveram o mesmo desempenho.\n");
    }

    return 0;
}
