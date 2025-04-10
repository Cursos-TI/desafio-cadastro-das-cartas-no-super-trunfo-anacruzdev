#include <stdio.h>

int main() {
    //Variáveis para a Carta 1
    char estado1; //A, C, H, etc.
    char codigo1[4]; //A01, B03, etc.
    char nomeCidade1[50];
    int populacao;
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf("Digite o estado da Carta 1: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código 1: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Digite o número correspondente a População: \n");
    scanf("%d", &populacao);

    printf("Digite o número correspondente a Área 1: \n");
    scanf("%f", &area1);

    printf("Digite o número correspondente ao Pib 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    
    return 0;
}
