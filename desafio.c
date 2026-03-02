#include <stdio.h>

int main() {
    int escolha;
    unsigned long int pop1 = 12000000, pop2 = 8000000;
    float pib1 = 500.50, pib2 = 300.20;

    printf("Escolha o atributo para a batalha:\n");
    printf("1. Populacao\n2. PIB\n");
    scanf("%d", &escolha);

    switch(escolha) {
        case 1:
            printf("Batalha de Populacao: %s\n", (pop1 > pop2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
            break;
        case 2:
            printf("Batalha de PIB: %s\n", (pib1 > pib2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
            break;
        default:
            printf("Opção Inválida.\n");
    }

    return 0;
}