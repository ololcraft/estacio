#include <stdio.h>

    int main(){
        char codigocarta1[10], codigocarta2[10];
        char inicialestado1, inicialestado2;
        char nomecidade1[20], nomecidade2[20];
        int populacao1, populacao2;
        int pontosturisticos1, pontosturisticos2;
        float area1, area2;
        float PIB1, PIB2;
        float densidadepop1, densidadepop2;
        float PIBpercap1, PIBpercap2;

        printf("digite o codigo da carta 1: \n");
        scanf("%s", codigocarta1);
        printf("digite a inicial do estado 1: \n");
        scanf(" %c", &inicialestado1);
        printf("digite o nome da cidade 1: \n");
        scanf("%s", nomecidade1);
        printf("digite a quantidade da populacao 1: \n");
        scanf("%d", &populacao1);
        printf("digite a area da cidade 1: \n");
        scanf("%f", area1);



        return 0;
    }