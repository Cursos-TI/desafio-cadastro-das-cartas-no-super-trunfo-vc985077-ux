#include <stdio.h>

int main(){
    char Estado, estado_, pais1[30], Codigo1[4], Cidade1[50], pais[30], Codigo[4], Cidade[50];
    unsigned long int Populacao, Populacao1;
    float Area, Pib, Area1, Pib1, densidade, capita, superPoder, densidade1, capita1, superPoder1;
    int PontosTuristicos, PontosTuristicos1, escolha, escolha1, resultado1, resultado2;//Características
    
    printf("Carta 1: \n");
    printf("Digite o País: \n");
    scanf(" %s", pais);

    printf("Digite o Estado (A - H): \n");
    scanf(" %c", &Estado);

    printf("Digite o Código (Ex: 01): \n");
    scanf(" %s", Codigo);

    printf("Seu código da carta é: %c%s\n", Estado, Codigo);

    printf("\nDigite o nome da cidade: \n");
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

    printf("\nCarta 2:\n");
    printf("Digite o País: \n");
    scanf(" %s", pais1);
    
    printf("Digite o Estado (A - H): \n");
    scanf(" %c", &estado_);

    printf("Digite o Código (Ex: 01): \n");
    scanf(" %s", Codigo1);

    printf("Seu código da carta é: %c%s\n", estado_, Codigo1);

    printf("\nDigite o nome da cidade: \n");
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

    printf("\n*** Comparação de Cartas ***");

    printf("\n*** Escolha o primeiro atributo: ***\n");
    printf("1. População!\n");
    printf("2. Área!\n");
    printf("3. PIB!\n");
    printf("4. Pontos Turísticos!\n");
    printf("5. Densidade Populacional!\n");
    printf("\nEscolha sua opção: ");
    scanf("%d", &escolha); //Apresentação Menu

    switch (escolha)
    {
     case 1:
     printf(" Atributo escolhido: População\n");
     resultado1 = Populacao > Populacao1 ? 1 : 0;
        break;
    
     case 2:
     printf(" Atributo escolhido: Área\n");
     resultado1 = Area > Area1 ? 1 : 0;
        break;
    
        case 3:
     printf(" Atributo escolhido: PIB\n");
     resultado1 = Pib > Pib1 ? 1 : 0;
        break;
    
        case 4:
     printf(" Atributo escolhido: Pontos Turísticos\n");
     resultado1 = PontosTuristicos > PontosTuristicos1 ? 1 : 0;
        break;
    
        case 5:
     printf(" Atributo escolhido: Densidade Populacional\n");
     resultado1 = densidade < densidade1 ? 1 : 0;
        break; //Densidade Lógica Invertida
    
        default:
     printf("Opção Inválida!\n");
        break;
     }

     printf("\n*** Escolha o segundo atributo: ***\n");
    printf("1. População!\n");
    printf("2. Área!\n");
    printf("3. PIB!\n");
    printf("4. Pontos Turísticos!\n");
    printf("5. Densidade Populacional!\n");
    printf("\nEscolha sua opção: ");
    scanf("%d", &escolha1);
    
    if (escolha == escolha1) {
      printf("\nVocê não pode escolher o mesmo atributo!\n");
    } else {
    
      switch (escolha1)
    {
     case 1:
     printf(" Atributo escolhido: População\n");
     resultado2 = Populacao > Populacao1 ? 1 : 0;
        break;
    
     case 2:
     printf("Atributo escolhido: Área\n");
     resultado2 = Area > Area1 ? 1 : 0;
        break;
    
        case 3:
     printf(" Atributo escolhido: PIB\n");
     resultado2 = Pib > Pib1 ? 1 : 0;
        break;
    
        case 4:
     printf(" Atributo escolhido: Pontos Turísticos\n"); 
     resultado2 = PontosTuristicos > PontosTuristicos1 ? 1 : 0;
        break;
    
        case 5:
     printf(" Atributo escolhido: Densidade Populacional\n");
     resultado1 = densidade < densidade1 ? 1 : 0;
        break; //Densidade Lógica Invertida
   
       default:
     printf("Opção Inválida!\n");
    }

    if (resultado1 == resultado2)
    {
      printf("\n** Empatou! **\n");
    } else if (resultado1 == 1 && resultado2 == 0) { 
      printf("\n*** Parabéns, Carta 1 venceu! ***\n");
    } else {
      printf("\n*** Parabéns, Carta 2 venceu! ***\n");
    }

   }

    return 0;
   }
