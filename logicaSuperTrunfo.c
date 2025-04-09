#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");

    char estado[20], estado2[20];
    char codigo[20], codigo2[20];
    char cidade[20], cidade2[20];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turisticos, turisticos2;
    float densidade, densidade2;
    float pibpercapita, pibpercapita2;
    

    printf("CARTA 1\n");

    printf("Insira o estado: \n");
    scanf("%s", estado);
    printf("Estado: %s\n", estado);

    printf("Insira o codigo: \n");
    scanf("%s", codigo);
    printf("Codigo: %s\n", codigo);

    printf("Insira a cidade: \n");
    scanf("%s", cidade);
    printf("Cidade: %s\n", cidade);

    printf("Insira a população: \n");
    scanf("%lu", &populacao);
    printf("População: %lu\n", populacao);

    printf("Insira a área: \n");
    scanf("%f", &area);
    printf("Área: %.2f km² \n", area);

    printf("Insira o PIB: \n");
    scanf("%f", &pib);
    printf("PIB: %.2f bilhões de reais \n", pib);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &turisticos);
    printf("Número de pontos turísticos: %d \n", turisticos);

    densidade = (populacao / area);
    printf("Densidade é: %.2f \n", densidade);

    pibpercapita = (pib / populacao);
    printf("PIBperCapita é: %.2f \n", pibpercapita);

    printf("\n");


    //INFORMAÇÕES DA CARTA 2//

    printf("CARTA 2\n");

    printf("Insira o estado: \n");
    scanf("%s", estado2);
    printf("Estado: %s\n", estado2);

    printf("Insira o codigo: \n");
    scanf("%s", codigo2);
    printf("Codigo: %s\n", codigo2);

    printf("Insira a cidade: \n");
    scanf("%s", cidade2);
    printf("Cidade: %s\n", cidade2);

    printf("Insira a população: \n");
    scanf("%lu", &populacao2);
    printf("População: %lu \n", populacao2);

    printf("Insira a área: \n");
    scanf("%f", &area2);
    printf("Área: %.2f km² \n", area2);

    printf("Insira o PIB: \n");
    scanf("%f", &pib2);
    printf("PIB: %.2f bilhões de reais \n", pib2);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &turisticos2);
    printf("Número de pontos turísticos: %d \n", turisticos2);
    
    densidade2 = (populacao2 / area2);
    printf("Densidade: %.2f \n", densidade2);

    pibpercapita2 = (pib2 / populacao2);
    printf("PIBperCapita: %.2f \n", pibpercapita2);

    printf("Comparação de cartas (Atributo: População)\n");
    printf("Carta 1 - Fortaleza: %d \n", populacao);
    printf("Carta 2 - Goiania: %d \n", populacao2);

    if (populacao > populacao2){
        printf("Carta 1 (Fortaleza) venceu com a maior população! \n");
    }else{
        printf("Carta 2 (Goiania) venceu com a maior população! \n");
    }

    


  


    return 0;
}
