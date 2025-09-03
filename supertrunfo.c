#include <stdio.h>

int main(){
    char Estado;
    char Codigo[4];
    char Cidade[50];
    unsigned long int Populacao;
    float Area;
    float Pib;
    int PontosTuristicos;
    float densidade;
    float capita;
    float superPoder; //Atributos Carta 1

    char estado_;
    char Codigo1[4];
    char Cidade1[50];
    unsigned long int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;
    float densidade1;
    float capita1;
    float superPoder1; //Atributos Carta 2

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
    scanf(" %f", &Pib);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf(" %d", &PontosTuristicos);
    
    densidade = (float)(Populacao / Area);
    capita = (float)(Pib / Populacao); 
    superPoder = (float)(Populacao + Area + Pib + PontosTuristicos + capita) + (-1 * densidade);//Término coleta de informações Carta 1

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
    scanf("%f", &Pib1);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos1);
    
    densidade = (float)(Populacao1 / Area1);
    capita1 = (float)(Pib1 / Populacao1);
    superPoder1 = (float)(Populacao1 + Area1 + Pib1 + PontosTuristicos1 + capita1) + (-1 * densidade1);// Término coleta de informações Carta 2

    printf(" *** Dados da Carta 1: *** \n");
    printf("Código da Carta: %c%s\n", Estado, Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %u\n", Populacao);
    printf("Área: %f\n", Area);
    printf("Pib: %f\n", Pib);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB Per Capita: %.2f\n", capita); 
    printf("Super Poder: %f\n", superPoder);// Apresentação Carta 1

    printf(" *** Dados da Carta 2: *** \n");
    printf("Código da Carta: %c%s\n", estado_, Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %u\n", Populacao1);
    printf("Área: %f\n", Area1);
    printf("Pib: %f\n", Pib1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB Per Capita: %.2f\n", capita1);
    printf("Super Poder: %f\n", superPoder1);// Apresentação Carta 2

    resultado = Populacao > Populacao1;
    resultado1 = Area > Area1;
    resultado2 = Pib > Pib1;
    resultado3 = PontosTuristicos > PontosTuristicos1;
    resultado4 = densidade > densidade1;
    resultado5 = capita > capita1;
    resultado6 = superPoder > superPoder1; //Resultados de comparação para decisão simples

    printf(" Comparação de Cartas: (Atributo: Densidade Populacional): \n");
    printf("Carta 1 - %s: %f \n", Cidade, densidade);

    printf("Carta 2 - %s: %f \n", Cidade1, densidade1); //Apresentação
    
    if (densidade1 < densidade)
    { 
     printf("Carta 2 (%s) - venceu!\n", Cidade1);
    } else { 
        printf("Carta 1 (%s) - venceu!\n", Cidade);
    }//Decisão composta ifelse
    

    return 0;

}