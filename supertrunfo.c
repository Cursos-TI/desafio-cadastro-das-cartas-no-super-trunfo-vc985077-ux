#include <stdio.h>

int main(){
    char Estado;
    char Codigo[4];
    char Cidade[50];
    int Populacao;
    float Area;
    float Pib;
    int PontosTuristicos;

    char Estado1;
    char Codigo1[4];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;
    
    printf("Carta 1: \n");
    printf("Digite o Estado (A - H): \n");
    scanf("%c", &Estado);

    printf("Digite o Código (Ex: 01): \n");
    scanf("%s", Codigo);

    printf("Seu código da carta é: %c%s\n", Estado, Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade);

    printf("Digite a população: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área (Em km²): \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos); //Término informações Carta 1

    printf("Dados da Carta 1: \n");
    printf("Código da Carta: %c%s\n", Estado, Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %f\n", Area);
    printf("Pib: %f\n", Pib);
    printf("Pontos Turísticos: %d\n", PontosTuristicos); // Apresentação Carta 1

    printf("Carta 2: \n");
    printf("Digite o Estado (A - H): \n");
    scanf(" %c", &Estado1);

    printf("Digite o Código (Ex: 01): \n");
    scanf("%s", Codigo1);

    printf("Seu código da carta é: %c%s\n", Estado1, Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite a população: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Área (Em km²): \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib1);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos1);

    printf("Dados da Carta 2: \n");
    printf("Código da Carta: % c%s\n", Estado1, Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %f\n", Area1);
    printf("Pib: %f\n", Pib1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);


    return 0;

}