#include <stdio.h>

int main(){
    char Estado;
    char pais[30];
    char Codigo[4];
    char Cidade[50];
    unsigned long int Populacao;
    float Area;
    float Pib;
    int PontosTuristicos, escolha;
    float densidade;
    float capita;
    float superPoder; //Atributos Carta 1

    char estado_;
    char pais1[30];
    char Codigo1[4];
    char Cidade1[50];
    unsigned long int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;
    float densidade1;
    float capita1;
    float superPoder1; //Atributos Carta 2
    
    printf("Carta 1: \n");
    printf("Digite o País: \n");
    scanf(" %s", pais);

    printf("Digite o Estado (A - H): \n");
    scanf(" %c", &Estado);

    printf("Digite o Código (Ex: 01): \n");
    scanf(" %s", Codigo);

    printf("Seu código da carta é: %c%s\n", Estado, Codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", Cidade);

    printf("Digite a população: \n");
    scanf(" %lu", &Populacao);

    printf("Digite a Área (Em km²): \n");
    scanf(" %f", &Area);

    printf("Digite o PIB: \n");
    scanf(" %f", &Pib);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf(" %d", &PontosTuristicos);
    
    densidade = (float)Populacao / Area;
    capita = (float)Pib / Populacao; 
    superPoder = (float)Populacao + Area + Pib + PontosTuristicos + capita + (-1 * densidade);//Término coleta de informações Carta 1

    printf("Carta 2: \n");
    printf("Digite o País: \n");
    scanf(" %s", pais1);
    
    printf("Digite o Estado (A - H): \n");
    scanf(" %c", &estado_);

    printf("Digite o Código (Ex: 01): \n");
    scanf(" %s", Codigo1);

    printf("Seu código da carta é: %c%s\n", estado_, Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", Cidade1);

    printf("Digite a população: \n");
    scanf(" %lu", &Populacao1);

    printf("Digite a Área (Em km²): \n");
    scanf(" %f", &Area1);

    printf("Digite o PIB: \n");
    scanf(" %f", &Pib1);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf(" %d", &PontosTuristicos1);
    
    densidade1 = (float)Populacao1 / Area1;
    capita1 = (float)Pib1 / Populacao1;
    superPoder1 = (float)Populacao1 + Area1 + Pib1 + PontosTuristicos1 + capita1 + (-1 * densidade1);// Término coleta de informações Carta 2

    printf(" *** Dados da Carta 1: *** \n");

    printf("Código da Carta: %c%s\n", Estado, Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %lu\n", Populacao);
    printf("Área: %.2f\n", Area);
    printf("Pib: %.2f\n", Pib);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB Per Capita: %.2f\n", capita); 
    printf("Super Poder: %.3f\n", superPoder);// Apresentação Carta 1

    printf(" *** Dados da Carta 2: *** \n");

    printf("Código da Carta: %c%s\n", estado_, Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f\n", Area1);
    printf("Pib: %.2f\n", Pib1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB Per Capita: %.2f\n", capita1);
    printf("Super Poder: %.3f\n", superPoder1);// Apresentação Carta 2

    printf("*** Comparação de Cartas ***\n");

    printf("*** Escolha o atributo: ***\n");
    printf("1. População!\n");
    printf("2. Área!\n");
    printf("3. PIB!\n");
    printf("4. Pontos Turísticos!\n");
    printf("5. Densidade Populacional!\n");
    printf("Atributo escolhido: ");
    scanf("%d", &escolha);
    printf("Sua escolha: %d\n", escolha); //Apresentação Menu

    switch (escolha)
    {
    
     case 1:
     printf(" Atributo escolhido: População\n");
     if (Populacao == Populacao1)
     {
        printf("Empate!");
     } else if (Populacao > Populacao1) { 
        printf("Carta 1 (%s, %s): %lu - venceu!\n", Cidade, pais, Populacao);
        printf("Carta 2 (%s, %s): %lu\n", Cidade1, pais1, Populacao1);
     } else {
        printf("Carta 2 (%s, %s): %lu - venceu!\n", Cidade1, pais1, Populacao1);
        printf("Carta 1 (%s, %s): %lu\n", Cidade, pais, Populacao);
     }
        break;
    
        
     case 2:
     printf(" Atributo escolhido: Área\n");
     if (Area == Area1)
     { 
        printf("Empate!");
     } else if (Area > Area1) { 
        printf("Carta 1 (%s, %s): %.2f - venceu!\n", Cidade, pais, Area);
        printf("Carta 2 (%s, %s): %.2f\n", Cidade1, pais1, Area1);
     } else {
        printf("Carta 2 (%s, %s): %.2f - venceu!\n", Cidade1, pais1, Area1);
        printf("Carta 1 (%s, %s): %.2f\n", Cidade, pais, Area);
     }
        break;
    
        case 3:
     printf(" Atributo escolhido: PIB\n");
     if (Pib == Pib1)
     { 
        printf("Empate!");
     } else if (Pib > Pib1) { 
        printf("Carta 1 (%s, %s): %.3f - venceu!\n", Cidade, pais, Pib);
        printf("Carta 2 (%s, %s): %.3f\n", Cidade1, pais1, Pib1);
     } else {
        printf("Carta 2 (%s, %s): %.3f - venceu!\n", Cidade1, pais1, Pib1);
        printf("Carta 1 (%s, %s): %.3f\n", Cidade, pais, Pib);
     }
        break;
    
        case 4:
     printf(" Atributo escolhido: Pontos Turísticos\n");
     if (PontosTuristicos == PontosTuristicos1)
     { 
        printf("Empate!");
     } else if (PontosTuristicos > PontosTuristicos1) { 
        printf("Carta 1 (%s, %s): %d - venceu!\n", Cidade, pais, PontosTuristicos);
        printf("Carta 2 (%s, %s): %d\n", Cidade1, pais1, PontosTuristicos1);
     } else {
        printf("Carta 2 (%s, %s): %d - venceu!\n", Cidade1, pais1, PontosTuristicos1);
        printf("Carta 1 (%s, %s): %d\n", Cidade, pais, PontosTuristicos);
     }
        break;
    
        case 5:
     printf(" Atributo escolhido: Densidade Populacional\n");
     if (densidade1 == densidade)
     { 
        printf("Empate!");
     } else if (densidade1 < densidade) { 
        printf("Carta 2 (%s, %s): %.3f - venceu!\n", Cidade1, pais1, densidade1);
        printf("Carta 1 (%s, %s): %.3f\n", Cidade, pais, densidade);
     } else {
        printf("Carta 1 (%s, %s): %.3f - venceu!\n", Cidade, pais, densidade);
        printf("Carta 2 (%s, %s): %.3f\n", Cidade1, pais1, densidade1);
     }
        break; //Densidade Lógica Invertida
    
        default:
     printf("Opção Inválida!\n");
        break;
     }

    return 0;

}