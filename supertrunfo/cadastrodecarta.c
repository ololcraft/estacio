#include <stdio.h>

    int main(){

        char codigocarta1[10], codigocarta2[10];
        char inicialestado1, inicialestado2;
        char nomecidade1[20], nomecidade2[20];
        unsigned int populacao1, populacao2;
        float area1, area2;
        float PIB1, PIB2;
        float densidadepop1, densidadepop2;
        float PIBpercap1, PIBpercap2;
        float superpoder1, superpoder2;

        //cadastro de carta 1

        printf("digite o codigo da carta 1: \n");
        scanf("%s", codigocarta1);
        printf("digite a inicial do estado 1: \n");
        scanf(" %c", &inicialestado1);
        printf("digite o nome da cidade 1: \n");
        scanf("%s", nomecidade1);
        printf("digite a quantidade da populacao 1: \n");
        scanf("%u", &populacao1);
        printf("digite a area da cidade 1: \n");
        scanf("%f", &area1);
        printf("digite o PIB da cidade 1: \n");
        scanf("%f", &PIB1);

        densidadepop1 = populacao1 / area1;
        PIBpercap1 = populacao1 / PIB1;
        superpoder1 = populacao1 + area1 + PIB1 + densidadepop1 + PIBpercap1;

        //exibiçao da carta 1
        printf("carta 1:\n");
        printf("codigo da carta 1: %s\n", codigocarta1);
        printf("inicial do estado 1: %c\n", inicialestado1);
        printf("nome da cidade 1: %s\n", nomecidade1);
        printf("populacao da cidade de %s e: %d hab\n", nomecidade1, populacao1);
        printf("a area da cidade de %s e: %.2f  km² \n", nomecidade1, area1);
        printf("o PIB da cidade de %s e: R$ %.2f milhoes\n", nomecidade1, PIB1);
        printf("a densidade populacional da cidade de %s e: %.2f hab/ km²\n", nomecidade1, densidadepop1);
        printf("o PIB per capital de %s e: %.2f\n", nomecidade1, PIBpercap1);
        printf("o nivel do super poder da carta 1 e: %.2f\n", superpoder1);


        //cadastro de carta 2

        printf("digite o codigo da carta 2: \n");
        scanf("%s", codigocarta2);
        printf("digite a inicial do estado 2: \n");
        scanf(" %c", &inicialestado2);
        printf("digite o nome da cidade 2: \n");
        scanf("%s", nomecidade2);
        printf("digite a quantidade da populacao 2: \n");
        scanf("%u", &populacao2);
        printf("digite a area da cidade 2: \n");
        scanf("%f", &area2);
        printf("digite o PIB da cidade 2: \n");
        scanf("%f", &PIB2);
    
        densidadepop2 = populacao2 / area2;
        PIBpercap2 = populacao2 / PIB2;
        superpoder2 = populacao2 + area2 + PIB2 + densidadepop2 + PIBpercap2;
    
        //exibiçao da carta 1
        printf("carta 2:\n");
        printf("codigo da carta 2: %s\n", codigocarta2);
        printf("inicial do estado 2: %c\n", inicialestado2);
        printf("nome da cidade 2: %s\n", nomecidade2);
        printf("populacao da cidade de %s e: %d hab\n", nomecidade2, populacao2);
        printf("a area da cidade de %s e: %.2f  km² \n", nomecidade2, area2);
        printf("o PIB da cidade de %s e: R$ %.2f milhoes\n", nomecidade2, PIB2);
        printf("a densidade populacional da cidade de %s e: %.2f hab/ km²\n", nomecidade2, densidadepop2);
        printf("o PIB per capital de %s e: %.2f\n", nomecidade2, PIBpercap2);
        printf("o nivel do super poder da carta 2 e: %.2f\n", superpoder2);

        //resultado da batalha das cartas
        printf("resultado da batalha das cartas 1 e 2\n");

        printf("população da cidade 1: %d X %d :população da cidade 2\n", populacao1 > populacao2, populacao2 > populacao1);
        
        if (populacao1 > populacao2)
        {
            printf("carta 1 venceu\n");

        }else if (populacao1 < populacao2)
        {
            printf("carta 2 venceu\n");

        }else        
        {
            printf("empate\n");
        }
        
        printf("area da cidade 1: %d X %d :area da cidade 2\n", area1 > area2, area2 > area1);
        
        if (area1 > area2)
        {
            printf("carta 1 venceu\n");

        }else if (area1 < area2)
        {
            printf("carta 2 venceu\n");
            
        }else        
        {
            printf("empate\n");
        }
        
        printf("o PIB da cidade 1: %d X %d :o PIB da cidade 2\n", PIB1 > PIB2, PIB2 > PIB1);
                
        if (PIB1 > PIB2)
        {
            printf("carta 1 venceu\n");

        }else if (PIB1 < PIB2)
        {
            printf("carta 2 venceu\n");
            
        }else        
        {
            printf("empate\n");
        }
        
        printf("a densidade populacional 1: %d X %d :a densidade populacional 2\n", densidadepop1 < densidadepop2, densidadepop2 < densidadepop1);
                
        if (densidadepop1 < densidadepop2)
        {
            printf("carta 1 venceu\n");

        }else if (densidadepop1 > densidadepop2)
        {
            printf("carta 2 venceu\n");
            
        }else        
        {
            printf("empate\n");
        }
        
        printf("o PIB per cap 1: %d X %d :o PIB per cap 2\n", PIBpercap1 > PIBpercap2, PIBpercap2 > PIBpercap1);
                
        if (PIBpercap1 > PIBpercap2)
        {
            printf("carta 1 venceu\n");

        }else if (PIBpercap1 < PIBpercap2)
        {
            printf("carta 2 venceu\n");
            
        }else        
        {
            printf("empate\n");
        }
        
        printf("super poder 1: %d X %d :super poder 2\n", superpoder1 > superpoder2, superpoder2 > superpoder1);
                
        if (superpoder1 > superpoder2)
        {
            printf("carta 1 venceu\n");

        }else if (superpoder1 < superpoder2)
        {
            printf("carta 2 venceu\n");
            
        }else        
        {
            printf("empate\n");
        }
        
        
        return 0;
    }