#include <stdio.h>
int main(){
    char estado;
    char cidade[50];
    char carta[10];
    int população, turismo;
    float área, pib;

    printf ("Carta 1: \n");
    printf("Digite o Estado: \n");
    scanf("%c", &estado);

    printf("Digite o Código de Carta: \n");
    scanf("%s", &carta);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a População: \n");
    scanf("%d", &população);

    printf("Digite a Área(em km²): \n");
    scanf("%f", &área);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &turismo);

    printf("Carta 1: \n - Estado: %c \n", estado);
    printf("- Código de Carta: %s \n", carta);
    printf("- Nome da Cidade: %s\n", cidade);
    printf("- População: %d \n - Área em km²: %f km² \n", população, área);
    printf("- PIB: %f bilhões de reais \n - Número de Pontos Turísticos: %d \n ", pib, turismo);

    char estado2;
    char cidade2[50];
    char carta2[10];
    int população2, turismo2;
    float área2, pib2;

    printf ("Carta 2: \n");
    printf("Digite o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código de Carta: \n");
    scanf("%s", &carta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a População: \n");
    scanf("%d", &população2);

    printf("Digite a Área(em km²): \n");
    scanf("%f", &área2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &turismo2);

    printf("Carta 2: \n - Estado: %c \n", estado2);
    printf("- Código de Carta: %s \n", carta2);
    printf("- Nome da Cidade: %s\n", cidade2);
    printf("- População: %d \n - Área em km²: %f km² \n", população2, área2);
    printf("- PIB: %f bilhões de reais \n - Número de Pontos Turísticos: %d \n ", pib2, turismo2);
    return 0;
}