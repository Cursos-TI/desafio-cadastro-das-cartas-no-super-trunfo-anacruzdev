#include <stdio.h>

int main() {
    //Variáveis para a Carta 1
    char estado1; //A, C, H, etc.
    char codigo1[4]; //A01, B03, etc.
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapta1;

    // Cadastro da Carta 1 (onde vai colocar os dados)
    printf("Digite o estado da Carta 1: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código 1: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Digite o número correspondente a População 1: \n");
    scanf("%d", &populacao1);

    printf("Digite o número correspondente a Área 1: \n");
    scanf("%f", &area1);

    printf("Digite o número correspondente ao Pib 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    //Cálculos da Carta 1:
    densidade1 = populacao1 / area1;
    pibPerCapta1 = pib1 / populacao1;

    // Exibição da Carta 1 (formulário ao qual vai ser exibido)
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capita: R$ %.2f\n", pibPerCapta1);

    printf("\n===============================\n");

    //Variáveis para a Carta 2
    char estado2; //A, C, H, etc.
    char codigo2[4]; //A01, B03, etc.
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapta2;

    // Cadastro da Carta 2 (onde vai colocar os dados)
    printf("Digite o estado da Carta 2: \n");
    scanf(" %c", &estado2); // <-- colocar o espaço para não dar buffer por causa de espaço em branco

    printf("Digite o Código 2: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite o número correspondente a População 2: \n");
    scanf("%d", &populacao2);

    printf("Digite o número correspondente a Área 2: \n");
    scanf("%f", &area2);

    printf("Digite o número correspondente ao Pib 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //Cálculos da Carta 2:
    densidade2 = populacao2 / area2;
    pibPerCapta2 = pib2 / populacao2;

    // Exibição da Carta 2 (formulário ao qual vai ser exibido)
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capita: R$ %.2f\n", pibPerCapta2);


    return 0;
}
