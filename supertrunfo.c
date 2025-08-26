#include <stdio.h>

int main(){
    char Estado;
    char Codigo[4];
    char Cidade[50];
    unsigned long int Populacao;
    float Area;
    long double Pib;
    int PontosTuristicos;
    float densidade;
    float capita;
    float superPoder;

    char estado_;
    char Codigo1[4];
    char Cidade1[50];
    unsigned long int Populacao1;
    float Area1;
    long double Pib1;
    int PontosTuristicos1;
    float densidade1;
    float capita1;
    float superPoder1;

    int resultado, resultado1, resultado2, resultado3, resultado4, resultado5, resultado6; 
    
    printf("Carta 1: \n");
    printf("Digite o Estado (A - H): \n");
    scanf(" %c", &Estado);

    printf("Digite o Código (Ex: 01): \n");
    scanf(" %s", Codigo);

    printf("Seu código da carta é: %c%s\n", Estado, Codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", Cidade);

    printf("Digite a população: \n");
    scanf(" %u", &Populacao);

    printf("Digite a Área (Em km²): \n");
    scanf(" %f", &Area);

    printf("Digite o PIB: \n");
    scanf(" %.3Lf", &Pib);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf(" %d", &PontosTuristicos);
    
    densidade = (float)(Populacao / Area);
    capita = (float)(Pib / Populacao); 
    superPoder = (float)(Populacao + Area + Pib + PontosTuristicos + capita) + (-1 / densidade);//Término informações Carta 1

    printf("Carta 2: \n");
    
    printf("Digite o Estado (A - H): \n");
    scanf(" %c", &estado_);

    printf("Digite o Código (Ex: 01): \n");
    scanf("%s", Codigo1);

    printf("Seu código da carta é: %c%s\n", estado_, Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite a população: \n");
    scanf("%u", &Populacao1);

    printf("Digite a Área (Em km²): \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%.3Lf", &Pib1);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos1);
    
    densidade = (float)(Populacao1 / Area1);
    capita1 = (float)(Pib1 / Populacao1);
    superPoder1 = (float)(Populacao1 + Area1 + Pib1 + PontosTuristicos1 + capita1) + (-1 / densidade1);// Término informações Carta 2

    printf(" *** Dados da Carta 1: *** \n");
    printf("Código da Carta: %c%s\n", Estado, Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %u\n", Populacao);
    printf("Área: %f\n", Area);
    printf("Pib: %Lf\n", Pib);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB Per Capita: %.2f\n", capita); // Apresentação Carta 1

    printf(" *** Dados da Carta 2: *** \n");
    printf("Código da Carta: %c%s\n", estado_, Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %u\n", Populacao1);
    printf("Área: %f\n", Area1);
    printf("Pib: %Lf\n", Pib1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB Per Capita: %.2f\n", capita1);// Apresentação Carta 2

    resultado = Populacao > Populacao1;
    resultado1 = Area > Area1;
    resultado2 = Pib > Pib1;
    resultado3 = PontosTuristicos > PontosTuristicos1;
    resultado4 = densidade > densidade1;
    resultado5 = capita > capita1;
    resultado6 = superPoder > superPoder1;

    printf(" Comparação das Cartas: \n");
    printf(" Carta 1 Vence se 1 \n");
    printf(" Carta 2 Vence se 0 \n");
    printf(" População: %d\n", resultado);
    printf(" Área: %.d\n", resultado1);
    printf(" PIB: %d\n", resultado2);
    printf(" Pontos Turísticos: %d\n", resultado3);
    printf(" Densidade Populacional: %d\n", resultado4);
    printf(" PIB per Capita: %d\n", resultado5);
    printf(" Super poder: %d\n", resultado6); //Comparativo resultados

    return 0;

}