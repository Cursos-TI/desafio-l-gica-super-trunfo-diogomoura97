
    #include <stdio.h>

//Teste Diogo Moura

int main() {
   
    //****CARTA 1****
   
    char estado1;
    char codigocarta1 [4] = "A01";
    char nomecidade1 [30] = "RioDeJaneiro";
    unsigned long int populacao1 = 6748000;
    float area1 = 1200.25;
    float pib1= 300.50;
    int numeropontosturisticos1 = 30;
    
    
    //Entrada de dados do usuário

    printf("Carta 1\n");
    printf("Insira o estado: ");
    scanf(" %c",&estado1);
    printf("Insira o código da carta: ");
    scanf(" %s",&codigocarta1);
    printf("Insira o nome da cidade: ");
    scanf(" %s",&nomecidade1);
    printf("Insira o número da população: ");
    scanf(" %lu",&populacao1);
    printf("Insira a área (Km2): ");
    scanf(" %f",&area1);
    printf("Insira o PIB: ");
    scanf(" %f",&pib1);
    printf("Insira o número de pontos turísticos: ");
    scanf(" %d",&numeropontosturisticos1);
   
    //Cálculo da Densidade populacional e PIB per capita

    float densidadepopulacional1 = (float) populacao1/area1;
    float pibpercapita1 = (float) (pib1* 1000000000)/populacao1;

    //Saída dos dados

    printf("Carta 1\n");
    printf("Estado: %c \n",estado1);
    printf("Código: %s \n",codigocarta1);
    printf("Nome da cidade:  %s \n",nomecidade1);
    printf("População:  %lu \n",populacao1);
    printf("PIB:  %.2f bilhões de reais \n",pib1);
    printf("Área: %2.f \n",area1);
    printf("Número de pontos turísticos: %d \n",numeropontosturisticos1);
    printf("Densidade populacional: %.2f \n",densidadepopulacional1);
    printf("PIB per capita: %.2f \n",pibpercapita1);

    //****CARTA 2****
   
    char estado2;
    char codigocarta2 [4] = "B01";
    char nomecidade2 [30] = "SãoPaulo";
    unsigned long int populacao2 = 12325000;
    float area2 = 1521.11;
    float pib2 = 699.28;
    int numeropontosturisticos2 = 50;
    

    //Entrada de dados do usuário

    printf("Carta 2\n");
    printf("Insira o estado: ");
    scanf(" %c",&estado2);
    printf("Insira o código da carta: ");
    scanf(" %s",&codigocarta2);
    printf("Insira o nome da cidade: ");
    scanf(" %s",&nomecidade2);
    printf("Insira o número da população: ");
    scanf(" %lu",&populacao2);
    printf("Insira a área (Km2): ");
    scanf(" %f",&area2);
    printf("Insira o PIB: ");
    scanf(" %f",&pib2);
    printf("Insira o número de pontos turísticos: ");
    scanf(" %d",&numeropontosturisticos2);
    
     //Cálculo da Densidade populacional e PIB per capita

    float densidadepopulacional2 = (float) populacao2/area2;
    float pibpercapita2 = (float) (pib2* 1000000000)/populacao2;

    //Saída dos dados

    printf("Carta 2\n");
    printf("Estado: %c \n",estado2);
    printf("Código: %s \n",codigocarta2);
    printf("Nome da cidade:  %s \n",nomecidade2);
    printf("População:  %lu \n",populacao2);
    printf("PIB:  %.2f bilhões de reais \n",pib2);
    printf("Área: %2.f \n",area2);
    printf("Número de pontos turísticos: %d \n",numeropontosturisticos2);
    printf("Densidade populacional: %.2f \n",densidadepopulacional2);
    printf("PIB per capita: %.2f \n",pibpercapita2);

    //Comparação das cartas com if e else

    printf("Comparação de cartas \n");

    printf("Carta 1 - %s: %d\n Carta 2 - %s: %d \n",nomecidade1,numeropontosturisticos1,nomecidade2,numeropontosturisticos2);

    if (numeropontosturisticos1>numeropontosturisticos2){
        printf("Resultado: Carta 1 - %s venceu! \n",nomecidade1);
    }else{

        printf("Resultado: Carta 2 - %s venceu! \n",nomecidade2);
    }

}

