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
        int escolha11, escolha12, escolha13;
        int escolha21, escolha22, escolha23;
        int vitorias1, vitorias2;
        char* resultado;
        vitorias1 = 0;
        vitorias2 = 0;        
        int opcao;

        printf("escolhas as opcoes\n");
        printf("1. iniciar jogo\n");
        printf("2. regras do jogo\n");
        printf("3. sair\n");
        printf("escolha uma opcao\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("iniciando jogo...\n");
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
            printf("jogador 1 escolha um atributo\n");
            printf("1. populacao\n");
            printf("2. area\n");
            printf("3. PIB\n");
            printf("4. densidade pop\n");
            printf("5. PIB per capital\n");
            printf("6. superpoder\n");
            scanf("%d", &escolha11);
            switch (escolha11)
            {
            case 1:
                if (populacao1 > populacao2)
            {       escolha11 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (populacao1 < populacao2)
            {       escolha11 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha11 = 0;
                    printf("empate");
            }
                
                break;
            case 2:
                if (area1 > area2)
            {       escolha11 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (area1 < area2)
            {       escolha11 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha11 = 0;
                    printf("empate");
            }
            
                break;
            case 3:
            if (PIB1 > PIB2)
            {       escolha11 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (PIB1 < PIB2)
            {       escolha11 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha11 = 0;
                    printf("empate");
            }
                break;    
            case 4:
            if (densidadepop2 > densidadepop1)
            {       escolha11 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (densidadepop2 < densidadepop1)
            {       escolha11 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha11 = 0;
                    printf("empate");
            }
                break;
            case 5:
            if (PIBpercap1 > PIBpercap2)
            {       escolha11 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (PIBpercap1 < PIBpercap2)
            {       escolha11 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha11 = 0;
                    printf("empate");
            }        
                break;
            case 6:
            if (superpoder1 > superpoder2)
            {       escolha11 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (superpoder1 < superpoder2)
            {       escolha11 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha11 = 0;
                    printf("empate");
            }        
                break;
            default:
                printf("opcao invalida\n");
                break;
            }
            printf("jogador 1 escolha outro atributo\n");
            printf("1. populacao\n");
            printf("2. area\n");
            printf("3. PIB\n");
            printf("4. densidade pop\n");
            printf("5. PIB per capital\n");
            printf("6. superpoder\n");
            scanf("%d", &escolha12);
            switch (escolha12)
            {
            case 1:
                if (populacao1 > populacao2)
            {       escolha12 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (populacao1 < populacao2)
            {       escolha12 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha12 = 0;
                    printf("empate");
            }
                
                break;
            case 2:
                if (area1 > area2)
            {       escolha12 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (area1 < area2)
            {       escolha12 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha12 = 0;
                    printf("empate");
            }
            
                break;
            case 3:
            if (PIB1 > PIB2)
            {       escolha12 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (PIB1 < PIB2)
            {       escolha12 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha12 = 0;
                    printf("empate");
            }
                break;    
            case 4:
            if (densidadepop2 > densidadepop1)
            {       escolha12 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (densidadepop2 < densidadepop1)
            {       escolha12 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha12 = 0;
                    printf("empate");
            }
                break;
            case 5:
            if (PIBpercap1 > PIBpercap2)
            {       escolha12 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (PIBpercap1 < PIBpercap2)
            {       escolha12 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha12 = 0;
                    printf("empate");
            }        
                break;
            case 6:
            if (superpoder1 > superpoder2)
            {       escolha12 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (superpoder1 < superpoder2)
            {       escolha12 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha12 = 0;
                    printf("empate");
            }        
                break;
            default:
                printf("opcao invalida\n");
                break;
            }
            printf("jogador 1 escolha o ultimo atributo\n");
            printf("1. populacao\n");
            printf("2. area\n");
            printf("3. PIB\n");
            printf("4. densidade pop\n");
            printf("5. PIB per capital\n");
            printf("6. superpoder\n");
            scanf("%d", &escolha13);
            switch (escolha13)
            {
            case 1:
                if (populacao1 > populacao2)
            {       escolha13 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (populacao1 < populacao2)
            {       escolha13 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha13 = 0;
                    printf("empate");
            }
                
                break;
            case 2:
                if (area1 > area2)
            {       escolha13 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (area1 < area2)
            {       escolha13 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha13 = 0;
                    printf("empate");
            }
            
                break;
            case 3:
            if (PIB1 > PIB2)
            {       escolha13 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (PIB1 < PIB2)
            {       escolha13 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha13 = 0;
                    printf("empate");
            }
                break;    
            case 4:
            if (densidadepop2 > densidadepop1)
            {       escolha13 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (densidadepop2 < densidadepop1)
            {       escolha13 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha13 = 0;
                    printf("empate");
            }
                break;
            case 5:
            if (PIBpercap1 > PIBpercap2)
            {       escolha13 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (PIBpercap1 < PIBpercap2)
            {       escolha13 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha13 = 0;
                    printf("empate");
            }        
                break;
            case 6:
            if (superpoder1 > superpoder2)
            {       escolha13 = 1;
                    vitorias1++;
                    printf("carta 1 venceu\n");
            }else if (superpoder1 < superpoder2)
            {       escolha13 = 0;
                    printf("carta 2 venceu\n");
            }else{
                    escolha13 = 0;
                    printf("empate");
            }        
                break;
            default:
                printf("opcao invalida\n");
                break;
            }
            printf("jogador 2 escolha um atributo\n");
            printf("1. populacao\n");
            printf("2. area\n");
            printf("3. PIB\n");
            printf("4. densidade pop\n");
            printf("5. PIB per capital\n");
            printf("6. superpoder\n");
            scanf("%d", &escolha21);
            switch (escolha21)
            {
            case 1:
                if (populacao1 > populacao2)
            {       escolha21 = 0;
                    printf("carta 1 venceu\n");
            }else if (populacao1 < populacao2)
            {       escolha21 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha21 = 0;
                    printf("empate");
            }
                
                break;
            case 2:
                if (area1 > area2)
            {       escolha21 = 0;
                    printf("carta 1 venceu\n");
            }else if (area1 < area2)
            {       escolha21 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha21 = 0;
                    printf("empate");
            }
            
                break;
            case 3:
            if (PIB1 > PIB2)
            {       escolha21 = 0;
                    printf("carta 1 venceu\n");
            }else if (PIB1 < PIB2)
            {       escolha21 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha21 = 0;
                    printf("empate");
            }
                break;    
            case 4:
            if (densidadepop2 > densidadepop1)
            {       escolha21 = 0;
                    printf("carta 1 venceu\n");
            }else if (densidadepop2 < densidadepop1)
            {       escolha21 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha21 = 0;
                    printf("empate");
            }
                break;
            case 5:
            if (PIBpercap1 > PIBpercap2)
            {       escolha21 = 0;
                    printf("carta 1 venceu\n");
            }else if (PIBpercap1 < PIBpercap2)
            {       escolha21 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha21 = 0;
                    printf("empate");
            }        
                break;
            case 6:
            if (superpoder1 > superpoder2)
            {       escolha21 = 0;
                    printf("carta 1 venceu\n");
            }else if (superpoder1 < superpoder2)
            {       escolha21 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha21 = 0;
                    printf("empate");
            }        
                break;
            default:
                printf("opcao invalida\n");
                break;
            } 
            printf("jogador 2 escolha outro atributo\n");
            printf("1. populacao\n");
            printf("2. area\n");
            printf("3. PIB\n");
            printf("4. densidade pop\n");
            printf("5. PIB per capital\n");
            printf("6. superpoder\n");
            scanf("%d", &escolha22);
            switch (escolha22)
            {
            case 1:
                if (populacao1 > populacao2)
            {       escolha22 = 0;
                    printf("carta 1 venceu\n");
            }else if (populacao1 < populacao2)
            {       escolha22 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha22 = 0;
                    printf("empate");
            }
                
                break;
            case 2:
                if (area1 > area2)
            {       escolha22 = 0;
                    printf("carta 1 venceu\n");
            }else if (area1 < area2)
            {       escolha22 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha22 = 0;
                    printf("empate");
            }
            
                break;
            case 3:
            if (PIB1 > PIB2)
            {       escolha22 = 0;
                    printf("carta 1 venceu\n");
            }else if (PIB1 < PIB2)
            {       escolha22 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha22 = 0;
                    printf("empate");
            }
                break;    
            case 4:
            if (densidadepop2 > densidadepop1)
            {       escolha22 = 0;
                    printf("carta 1 venceu\n");
            }else if (densidadepop2 < densidadepop1)
            {       escolha22 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha22 = 0;
                    printf("empate");
            }
                break;
            case 5:
            if (PIBpercap1 > PIBpercap2)
            {       escolha22 = 0;
                    printf("carta 1 venceu\n");
            }else if (PIBpercap1 < PIBpercap2)
            {       escolha22 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha22 = 0;
                    printf("empate");
            }        
                break;
            case 6:
            if (superpoder1 > superpoder2)
            {       escolha22 = 0;
                    printf("carta 1 venceu\n");
            }else if (superpoder1 < superpoder2)
            {       escolha22 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha22 = 0;
                    printf("empate");
            }        
                break;
            default:
                printf("opcao invalida\n");
                break;
            }  
            printf("jogador 2 escolha o ultimo atributo\n");
            printf("1. populacao\n");
            printf("2. area\n");
            printf("3. PIB\n");
            printf("4. densidade pop\n");
            printf("5. PIB per capital\n");
            printf("6. superpoder\n");
            scanf("%d", &escolha23);
            switch (escolha23)
            {
            case 1:
                if (populacao1 > populacao2)
            {       escolha23 = 0;
                    printf("carta 1 venceu\n");
            }else if (populacao1 < populacao2)
            {       escolha23 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha23 = 0;
                    printf("empate");
            }
                
                break;
            case 2:
                if (area1 > area2)
            {       escolha23 = 0;
                    printf("carta 1 venceu\n");
            }else if (area1 < area2)
            {       escolha23 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha23 = 0;
                    printf("empate");
            }
            
                break;
            case 3:
            if (PIB1 > PIB2)
            {       escolha23 = 0;
                    printf("carta 1 venceu\n");
            }else if (PIB1 < PIB2)
            {       escolha23 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha23 = 0;
                    printf("empate");
            }
                break;    
            case 4:
            if (densidadepop2 > densidadepop1)
            {       escolha23 = 0;
                    printf("carta 1 venceu\n");
            }else if (densidadepop2 < densidadepop1)
            {       escolha23 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha23 = 0;
                    printf("empate");
            }
                break;
            case 5:
            if (PIBpercap1 > PIBpercap2)
            {       escolha23 = 0;
                    printf("carta 1 venceu\n");
            }else if (PIBpercap1 < PIBpercap2)
            {       escolha23 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha23 = 0;
                    printf("empate");
            }        
                break;
            case 6:
            if (superpoder1 > superpoder2)
            {       escolha23 = 0;
                    printf("carta 1 venceu\n");
            }else if (superpoder1 < superpoder2)
            {       escolha23 = 1;
                    vitorias2++;
                    printf("carta 2 venceu\n");
            }else{
                    escolha23 = 0;
                    printf("empate");
            }        
                break;
            default:
                printf("opcao invalida\n");
                break;
            }
            resultado = ((escolha11 + escolha12 + escolha13) > (escolha21 + escolha22 + escolha23)) ? "jogador1" : "jogador2";
            printf("o vencedor e o %s\n", resultado);
            if (vitorias1 > vitorias2)
            {
                    printf("vitoria do jogador 1");
            }else if (vitorias1 < vitorias2)
            {
                    printf("vitoria do jogador 2");
            }else {
                    printf("empate");
            }
            break;
        case 2:
            printf("***regras do jogo***\n");
            printf("bem vindo ao super trunfo\n");
            printf("nesse jogo os dois jogadores darao um codigo de suas carta (cidades)\n");
            printf("depois infomarao a inicial do estado da cidade depois o nome da cidade\n");
            printf("com isso informe a quantidade da:\n");
            printf("populacao\n");
            printf("area em km\n");
            printf("PIB\n");
            printf("logo sera informada as informacoes junto com a densidade populacional\n");
            printf("e o PIB per cap\n");
            printf("com isso os jogadores escolherao tres desses atributos pra batalha\n");
            printf("o que tiver o atributos maior ganha um ponto\n");
            printf("o que tiver mais pontos ganha\n");

            
            break;
        case 3:
            printf("saindo...\n");

            break;
        default:
            printf("opcao invalida\n");
            break;
        }





    }