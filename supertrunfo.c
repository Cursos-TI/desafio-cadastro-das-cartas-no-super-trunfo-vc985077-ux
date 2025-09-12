#include <stdio.h>

int main(){
    char Estado, estado_, pais1[30], Codigo1[4], Cidade1[50], pais[30], Codigo[4], Cidade[50];
    unsigned long int Populacao, Populacao1;
    float Area, Pib, Area1, Pib1, densidade, capita, superPoder, densidade1, capita1, superPoder1, resultado3, resultado4;
    int PontosTuristicos, PontosTuristicos1, escolha, escolha1, resultado1, resultado2;//Características
    
    printf("Carta 1: \n");
    printf("Digite o País: \n");
    scanf(" %s", pais);

    printf("Digite o Estado (Ex: A - H): \n");
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
    
    printf("Digite o Estado (Ex: A - H): \n");
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
    printf("Escolha sua opção: ");
    scanf("%d", &escolha); //Apresentação Menu

    switch (escolha)
    {
     case 1:
     printf("\nAtributo escolhido: População\n");
     resultado1 = (Populacao > Populacao1) ? 1 : 0;
        break;
    
     case 2:
     printf("\nAtributo escolhido: Área\n");
     resultado1 = (Area > Area1) ? 1 : 0;
        break;
    
        case 3:
     printf("\nAtributo escolhido: PIB\n");
     resultado1 = (Pib > Pib1) ? 1 : 0;
        break;
    
        case 4:
     printf("\nAtributo escolhido: Pontos Turísticos\n");
     resultado1 = (PontosTuristicos > PontosTuristicos1) ? 1 : 0;
        break;
    
        case 5:
     printf("\nAtributo escolhido: Densidade Populacional\n");
     resultado1 = (densidade < densidade1) ? 1 : 0;
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
    printf("Escolha sua opção: ");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
     case 1:
     printf("\nAtributo escolhido: População\n");
     
     if (escolha == escolha1)
    {
      printf("\nVocê não pode escolher o mesmo atributo!\n");
     } 
     resultado2 = (Populacao > Populacao1) ? 1 : 0;
        break;
    
     case 2:
     printf("\nAtributo escolhido: Área\n");

   if (escolha == escolha1)
    {
      printf("\nVocê não pode escolher o mesmo atributo!\n");
    }
    resultado2 = (Area > Area1) ? 1 : 0;
        break;
    
        case 3:
     printf("\nAtributo escolhido: PIB\n");

     if (escolha == escolha1) {
      printf("\nVocê não pode escolher o mesmo atributo!\n");
    }
    resultado2 = (Pib > Pib1) ? 1 : 0;
        break;
    
        case 4:
     printf("\nAtributo escolhido: Pontos Turísticos\n");

     if (escolha == escolha1)
    {
      printf("\nVocê não pode escolher o mesmo atributo!\n");
    } 
    resultado2 = (PontosTuristicos > PontosTuristicos1) ? 1 : 0;
        break;
    
        case 5:
     printf("\nAtributo escolhido: Densidade Populacional\n");
     if (escolha == escolha1) {
      printf("\nVocê não pode escolher o mesmo atributo!\n");
    } 
    resultado2 = (densidade < densidade1) ? 1 : 0;
        break; //Densidade Lógica Invertida
   
       default:
     printf("Opção Inválida!\n");
    }

    printf("\n*** Resultados ***\n"); //Exibição Resultados
    printf("Carta 1: %s, %s\n", Cidade, pais);
    printf("Carta 2: %s, %s\n", Cidade1, pais1);

    escolha == 1 && escolha1 == 2 ? printf("\nAtributos usados: População e Área!\n") : 0;
    resultado3 = (float)Populacao + Area;
    resultado4 = (float)Populacao1 + Area1;
    if (escolha == 1 && escolha1 == 2)
    {
      printf("\nPopulação de %s é: %lu\n", Cidade, Populacao);
      printf("População de %s é: %lu\n", Cidade1, Populacao1);

      printf("\nÁrea de %s é: %.3f\n", Cidade, Area);
      printf("Área de %s é: %.3f\n", Cidade1, Area1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    
    escolha == 1 && escolha1 == 3 ? printf("\nAtributos usados: População e PIB!\n") : 0;
    resultado3 = (float)Populacao + Pib;
    resultado4 = (float)Populacao1 + Pib1;
    if (escolha == 1 && escolha1 == 3)
    {
      printf("\nPopulação de %s é: %lu\n", Cidade, Populacao);
      printf("População de %s é: %lu\n", Cidade1, Populacao1);

      printf("\nPIB de %s é: %.3f\n", Cidade, Pib);
      printf("PIB de %s é: %.3f\n", Cidade1, Pib1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    escolha == 1 && escolha1 == 4 ? printf("\nAtributos usados: População e Pontos Turísticos!\n") : 0;
    resultado3 = (float)Populacao + PontosTuristicos;
    resultado4 = (float)Populacao1 + PontosTuristicos1;
    if (escolha == 1 && escolha1 == 4)
    {
      printf("\nPopulação de %s é: %lu\n", Cidade, Populacao);
      printf("População de %s é: %lu\n", Cidade1, Populacao1);

      printf("\nPontos Turísticos de %s é: %d\n", Cidade, PontosTuristicos);
      printf("Pontos Turísticos de %s é: %d\n", Cidade1, PontosTuristicos1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    escolha == 1 && escolha1 == 5 ? printf("\nAtributos usados: Polução e Densidade Populacional!\n") : 0;
    resultado3 = (float)Populacao + PontosTuristicos;
    resultado4 = (float)Populacao1 + PontosTuristicos1;
    if (escolha == 1 && escolha1 == 5)
    {
      printf("\nPopulação de %s é: %lu\n", Cidade, Populacao);
      printf("População de %s é: %lu\n", Cidade1, Populacao1);

      printf("\nDensidade Populacional de %s é: %.3f\n", Cidade, densidade);
      printf("Densidade Populacional de %s é: %.3f\n", Cidade1, densidade1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }

    escolha == 2 && escolha1 == 1 ? printf("\nAtributos usdaos: Área e População!\n") : 0;
    resultado3 = (float)Populacao + Area;
    resultado4 = (float)Populacao1 + Area1;
    if (escolha == 2 && escolha1 == 1)
    {
      printf("\nÁrea de %s é: %.3f\n", Cidade, Area);
      printf("Área de %s é: %.3f\n", Cidade1, Area1);

      printf("\nPopulação de %s é: %lu\n", Cidade, Populacao);
      printf("População de %s é: %lu\n", Cidade1, Populacao1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    escolha == 2 && escolha1 == 3 ? printf("\nAtributos usados: Área e PIB!\n") : 0;
    resultado3 = (float)Area + Pib;
    resultado4 = (float)Area1 + Pib1;
    if (escolha == 2 && escolha1 == 3)
    {
      printf("\nÁrea de %s é: %.3f\n", Cidade, Area);
      printf("Área de %s é: %.3f\n", Cidade1, Area1);

      printf("\nPIB de %s é: %.3f\n", Cidade, Pib);
      printf("PIB de %s é: %.3f\n", Cidade1, Pib1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    
    escolha == 2 && escolha1 == 4 ? printf("\nAtributos usados: Área e Pontos Turísticos!\n") : 0;
    resultado3 = (float)Area + PontosTuristicos;
    resultado4 = (float)Area1 + PontosTuristicos1;
    if (escolha == 2 && escolha1 == 4)
    {
      printf("\nÁrea de %s é: %.3f\n", Cidade, Area);
      printf("Área de %s é: %.3f\n", Cidade1, Area1);

      printf("\nPontos Turísticos de %s é: %d\n", Cidade, PontosTuristicos);
      printf("Pontos Turísticos de %s é: %d\n", Cidade1, PontosTuristicos1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    
    escolha == 2 && escolha1 == 5 ? printf("\nAtributos usados: Área e Densidade Populacional!\n") : 0;
    resultado3 = (float)Area + densidade;
    resultado4 = (float)Area1 + densidade1;
    if (escolha == 2 && escolha1 == 5)
    {
      printf("\nÁrea de %s é: %.3f\n", Cidade, Area);
      printf("Área de %s é: %.3f\n", Cidade1, Area1);

      printf("\nDensidade Populacional de %s é: %.3f\n", Cidade, densidade);
      printf("Densidade Populacional de %s é: %.3f\n", Cidade1, densidade1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    
    escolha == 3 && escolha1 == 1 ? printf("\nAtributos usdaos: PIB e População!\n") : 0;
    resultado3 = (float)Pib + Populacao;
    resultado4 = (float)Pib1 + Populacao1;
    if (escolha == 3 && escolha1 == 1)
    {
      printf("\nPIB de %s é: %.3f\n", Cidade, Pib);
      printf("PIB de %s é: %.3f\n", Cidade1, Pib1);

      printf("\nPopulação de %s é: %lu\n", Cidade, Populacao);
      printf("População de %s é: %lu\n", Cidade1, Populacao1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    
    escolha == 3 && escolha1 == 2 ? printf("\nAtributos usdaos: PIB e Área!\n") : 0;
    resultado3 = (float)Pib + Area;
    resultado4 = (float)Pib1 + Area1;
    if (escolha == 3 && escolha1 == 2)
    {
      printf("\nPIB de %s é: %.3f\n", Cidade, Pib);
      printf("PIB de %s é: %.3f\n", Cidade1, Pib1);

      printf("\nÁrea de %s é: %.3f\n", Cidade, Area);
      printf("Área de %s é: %.3f\n", Cidade1, Area1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    
    escolha == 3 && escolha1 == 4 ? printf("\nAtributos usdaos: PIB e Pontos Turísticos!\n") : 0;
    resultado3 = (float)Pib + PontosTuristicos;
    resultado3 = (float)Pib + PontosTuristicos1;
    if (escolha == 3 && escolha1 == 4)
    {
      printf("\nPIB de %s é: %.3f\n", pais, Pib);
      printf("PIB de %s é: %.3f\n", pais1, Pib1);

      printf("\nPontos Turísticos de %s é: %d\n", Cidade, PontosTuristicos);
      printf("Pontos Turísticos de %s é: %d\n", Cidade1, PontosTuristicos1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    
    escolha == 3 && escolha1 == 5 ? printf("\nAtributos usdaos: PIB e Densidade Populacional!\n") : 0;
    resultado3 = (float)Pib + densidade;
    resultado4 = (float)Pib1 + densidade1;
    if (escolha == 3 && escolha1 == 5)
    {
      printf("\nPIB de %s é: %.3f\n", pais, Pib);
      printf("PIB de %s é: %.3f\n", pais1, Pib1);

      printf("\nDensidade Populacional de %s é: %.3f\n", Cidade, densidade);
      printf("Densidade Populacional de %s é: %.3f\n", Cidade1, densidade1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    

    escolha == 4 && escolha1 == 1 ? printf("\nAtributos usados: Pontos Turísticos e População!\n") : 0;
    resultado3 = (float)PontosTuristicos + Populacao;
    resultado4 = (float)PontosTuristicos1 + Populacao1;
    if (escolha == 4 && escolha1 == 1)
    {
      printf("\nPontos Turísticos de %s é: %d\n", Cidade, PontosTuristicos);
      printf("Pontos Turísticos de %s é: %d\n", Cidade1, PontosTuristicos1);

      printf("\nPopulação de %s é: %lu\n", Cidade, Populacao);
      printf("População de %s é: %lu\n", Cidade1, Populacao1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    
    escolha == 4 && escolha1 == 2 ? printf("\nAtributos usados: Pontos Turísticos e Área!\n") : 0;
    resultado3 = (float)PontosTuristicos + Area;
    resultado4 = (float)PontosTuristicos1 + Area1;
    if (escolha == 4 && escolha1 == 2)
    {
      printf("\nPontos Turísticos de %s é: %d\n", Cidade, PontosTuristicos);
      printf("Pontos Turísticos de %s é: %d\n", Cidade1, PontosTuristicos1);

      printf("\nÁrea de %s é: %.3f\n", Cidade, Area);
      printf("Área de %s é: %.3f\n", Cidade1, Area1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    
    escolha == 4 && escolha1 == 3 ? printf("\nAtributos usados: Pontos Turísticos e PIB!\n") : 0;
    resultado3 = (float)PontosTuristicos + Pib;
    resultado4 = (float)PontosTuristicos1 + Pib1;
    if (escolha == 4 && escolha1 == 3)
    {
      printf("\nPontos Turísticos de %s é: %d\n", Cidade, PontosTuristicos);
      printf("Pontos Turísticos de %s é: %d\n", Cidade1, PontosTuristicos1);

      printf("\nPIB de %s é: %.3f\n", Cidade, Pib);
      printf("PIB de %s é: %.3f\n", Cidade1, Pib1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    
    escolha == 4 && escolha1 == 5 ? printf("\nAtributos usados: Pontos Turísticos e Densidade Populacional!\n") : 0;
    resultado3 = (float)PontosTuristicos + densidade;
    resultado4 = (float)PontosTuristicos1 + densidade1;
    if (escolha == 4 && escolha1 == 5)
    {
      printf("\nPontos Turísticos de %s é: %d\n", Cidade, PontosTuristicos);
      printf("Pontos Turísticos de %s é: %d\n", Cidade1, PontosTuristicos1);

      printf("\nDensidade Populacional de %s é: %.3f\n", Cidade, densidade);
      printf("Densidade Populacional de %s é: %.3f\n", Cidade1, densidade1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    

    escolha == 5 && escolha1 == 1 ? printf("\nAtributos usados: Densidade Populacional e População!\n") : 0;
    resultado3 = (float)densidade + Populacao;
    resultado4 = (float)densidade1 + Populacao1;
    if (escolha == 5 && escolha1 == 1)
    {
      printf("\nDensidade Populacional de %s é: %.3f\n", Cidade, densidade);
      printf("Densidade Populacional de %s é: %.3f\n", Cidade1, densidade1);

      printf("\nPopulação de %s é: %lu\n", Cidade, Populacao);
      printf("População de %s é: %lu\n", Cidade1, Populacao1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    
    escolha == 5 && escolha1 == 2 ? printf("\nAtributos usados: Densidade Populacional e Área!\n") : 0;
    resultado3 = (float)densidade + Area;
    resultado4 = (float)densidade1 + Area1;
    if (escolha == 5 && escolha1 == 2)
    {
      printf("\nDensidade Populacional de %s é: %.3f\n", Cidade, densidade);
      printf("Densidade Populacional de %s é: %.3f\n", Cidade1, densidade1);

      printf("\nÁrea de %s é: %.3f\n", Cidade, Area);
      printf("Área de %s é: %.3f\n", Cidade1, Area1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    
    escolha == 5 && escolha1 == 3 ? printf("\nAtributos usados: Densidade Populacional e PIB!\n") : 0;
    resultado3 = (float)densidade + Pib;
    resultado4 = (float)densidade1 + Pib1;

    if (escolha == 5 && escolha1 == 3)
    {
      printf("\nDensidade Populacional de %s é: %.3f\n", Cidade, densidade);
      printf("Densidade Populacional de %s é: %.3f\n", Cidade1, densidade1);

      printf("\nPIB de %s é: %.3f\n", Cidade, Pib);
      printf("PIB de %s é: %.3f\n", Cidade1, Pib1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    }
    
    escolha == 5 && escolha1 == 4 ? printf("\nAtributos usados: Densidade Populacional e Pontos Turísticos!\n") : 0;
    resultado3 = (float)densidade + PontosTuristicos;
    resultado4 = (float)densidade1 + PontosTuristicos1;
    if (escolha == 5 && escolha1 == 4)
    {
      printf("\nDensidade Populacional de %s é: %.3f\n", Cidade, densidade);
      printf("Densidade Populacional de %s é: %.3f\n", Cidade1, densidade1);

      printf("\nPontos Turísticos de %s é: %d\n", Cidade, PontosTuristicos);
      printf("Pontos Turísticos de %s é: %d\n", Cidade1, PontosTuristicos1);

      printf("\nA soma dos atributos usados para Carta 1 é: %.3f\n", resultado3);
      printf("A soma dos atributos usados para Carta 2 é: %.3f\n", resultado4);
    } //Exibição Resultados

    if (resultado3 == resultado4)
    {
      printf("\n** Empatou! **\n");
    } else if (resultado3 > resultado4) { 
      printf("\n*** Parabéns, Carta 1 venceu! ***\n");
    } else {
      printf("\n*** Parabéns, Carta 2 venceu! ***\n");
    }

    return 0;

}