#include <stdio.h>

// Estrutura para armazenar as informações das cartas
typedef struct {
    char continente[20];
    char codigo[4];
    char nome[30];
    int populacao;      // em milhões
    float area;         // em km²
    float pib;          // em trilhões USD
    float idh;
} Carta;

// Função para imprimir uma carta
void imprimirCarta(Carta c) {
    printf("=====================================\n");
    printf("Código: %s\n", c.codigo);
    printf("Nome: %s\n", c.nome);
    printf("Continente: %s\n", c.continente);
    printf("População: %d milhões\n", c.populacao);
    printf("Área: %.0f km²\n", c.area);
    printf("PIB: %.2f trilhões USD\n", c.pib);
    printf("IDH: %.3f\n", c.idh);
    printf("=====================================\n\n");
}

int main() {
    // Declarando e inicializando as 3 cartas
    Carta cartas[3] = {
        {"América do Sul", "P01", "Brasil", 213, 8515770.0, 2.13, 0.786},
        {"Europa", "P02", "Noruega", 5, 323772.0, 0.50, 0.970},
        {"Ásia", "P03", "Índia", 1438, 3287260.0, 4.19, 0.685}
    };

    printf("=== Cartas Super Trunfo: Países ===\n\n");

    // Exibindo todas as cartas
    for (int i = 0; i < 3; i++) {
        imprimirCarta(cartas[i]);
    }

    return 0;
}
