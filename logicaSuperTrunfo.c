
    #include <stdio.h>

//Teste Diogo Moura

int main() {
    
    //****CARTA 1****
   
    char estado1;
    char codigocarta1 [4] = "A01";
    char nomecidade1 [30] = "RioDeJaneiro";
    char nomepaís1 [30]="Brasil";
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
    printf("Insira o nome do país: ");
    scanf(" %s",&nomepaís1);
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
    printf("Nome do país: %s \n",nomepaís1);
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
    char nomepaís2 [30]="Brasil";
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
    printf("Insira o nome do país: ");
    scanf(" %s",&nomepaís2);
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
    printf("Nome do país: %s \n",nomepaís2);
    printf("População:  %lu \n",populacao2);
    printf("PIB:  %.2f bilhões de reais \n",pib2);
    printf("Área: %2.f \n",area2);
    printf("Número de pontos turísticos: %d \n",numeropontosturisticos2);
    printf("Densidade populacional: %.2f \n",densidadepopulacional2);
    printf("PIB per capita: %.2f \n",pibpercapita2);

    //Comparação das cartas através de switch

    //Escolhendo 2 atributos de comparação através de um switch dentro de um loop for de 2 repetições

    for(int i=0;i<2;i++){
        printf("Escolha o atributo da carta a ser comparado \n");
        printf("1 - Nome do país\n");
        printf("2 - População \n");
        printf("3 - Área\n");
        printf("4 - PIB\n");
        printf("5 - Número de pontos turísticos\n");
        printf("6 - Densidade populacional\n");
        
        int atributo;
    
        scanf("%d",&atributo);

        switch (atributo)
        {
    
        case 1:
            printf("Nome do país - Carta 1 %s: %s| Carta 2 %s: %s \n",nomecidade1,nomepaís1,nomecidade2,nomepaís2);
            
            break;
        case 2:
            printf("População - Carta 1 %s: %d | Carta 2 %s: %d \n",nomecidade1,populacao1,nomecidade2,populacao2);
            if (populacao1>populacao2){
                printf("Carta 1 venceu! \n");
            }else if (populacao2>populacao1)
            {
                printf("Carta 2 venceu! \n");
            }else{
                printf("Empate! \n");
            }
            break;
        case 3:
            printf("Área - Carta 1 %s: %.2f | Carta 2 %s: %.2f \n",nomecidade1,area1,nomecidade2,area2);
            if (area1>area2){
                printf("Carta 1 venceu! \n");
            }else if (area2>area1)
            {
                printf("Carta 2 venceu! \n");
            }else{
                printf("Empate! \n");
            }
            break;
        case 4:
            printf("PIB - Carta 1 %s: %.2f | Carta 2 %s: %.2f \n",nomecidade1,pib1,nomecidade2,pib2);
            if (pib1>pib2){
                printf("Carta 1 venceu! \n");
            }else if (pib2>pib1)
            {
                printf("Carta 2 venceu! \n");
            }else{
                printf("Empate! \n");
            }
            break;
        case 5:
            printf("Número de pontos turísticos - Carta 1 %s: %d | Carta 2 %s: %d \n",nomecidade1,numeropontosturisticos1,nomecidade2,numeropontosturisticos2);
            if (numeropontosturisticos1>numeropontosturisticos2){
                printf("Carta 1 venceu! \n");
            }else if (numeropontosturisticos2>numeropontosturisticos1)
            {
                printf("Carta 2 venceu! \n");
            }else{
                printf("Empate! \n");
            }
            break;
        case 6:
            printf("Densidade populacional - Carta 1 %s: %2.f | Carta 2 %s: %2.f \n",nomecidade1,densidadepopulacional1,nomecidade2,densidadepopulacional2);
            if (densidadepopulacional1<densidadepopulacional2){
                printf("Carta 1 venceu! \n");
            }else if (densidadepopulacional2<densidadepopulacional1)
            {
                printf("Carta 2 venceu! \n");
            }else{
                printf("Empate! \n");
            }
            break;
        
        default:
            printf("Você não escolheu nenhuma atributo válido nas opções \n");
            break;
        }


    printf("Soma dos atributos das cartas \n");

    float somacarta1 = (float)(populacao1+area1+pib1+numeropontosturisticos1+pibpercapita1+densidadepopulacional1);
    float somacarta2 = (float)(populacao2+area2+pib2+numeropontosturisticos2+pibpercapita2+densidadepopulacional2);
        
    if(somacarta1>somacarta2){
        printf("Carta 1 venceu na soma dos atributos. Tendo a carta 1: %.2f e a carta 2: %2.f \n",somacarta1,somacarta2);
    }else if(somacarta2>somacarta1){
        printf("Carta 2 venceu na soma dos atributos. Tendo a carta 2: %.2f e a carta 1: %2.f \n",somacarta2,somacarta1);
    }else{
        printf("Empate! \n");
    }


    }

}

