#include <stdio.h>
int main(){
    int torre, bispo, rainha;
    int direcaotorre, direcaobispo, direcaorainha;
    int casastorre, casasbispo, casasrainha;
    int escolha;
    while (escolha >=3 || escolha <= 0 || direcaotorre == 5)
    {
    printf("digite a peca que ira mover\n");
    printf("1. torre\n2. bispo\n3.rainha\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        printf("escolha a diraçao da torre\n");
        printf("1. cima\n2. baixo\n3. direita\n4. esquerda\n5. voltar\n");
        scanf("%d", &direcaotorre);
        switch (direcaotorre)
        {
        case 1:
            do
            {
            printf("digite quantas casas a torre ira mover de 1 a 8\n");
            scanf("%d", &casastorre);
            } while (casastorre <= 0 || casastorre > 8);
            printf("sua torre moveu pra cima %d casas\n", casastorre);
            break;
        case 2:
            do
            {
            printf("digite quantas casas a torre ira mover de 1 a 8\n");
            scanf("%d", &casastorre);
            } while (casastorre <= 0 || casastorre > 8);
            printf("sua torre moveu pra baixo %d casas\n", casastorre);        
            break;
        case 3:
            do
            {
            printf("digite quantas casas a torre ira mover de 1 a 8\n");
            scanf("%d", &casastorre);
            } while (casastorre <= 0 || casastorre > 8);
            printf("sua torre moveu pra direita %d casas\n", casastorre);             
            break;
        case 4:
            do
            {
            printf("digite quantas casas a torre ira mover de 1 a 8\n");
            scanf("%d", &casastorre);
            } while (casastorre <= 0 || casastorre > 8);
            printf("sua torre moveu pra esquerda %d casas\n", casastorre); 
            break;
        case 5:
            printf("voltando...\n");
            break;
        default:
            printf("opçao invalida\n");
            break;
        }
        break;
    case 2:
        //bispo
        break;
    case 3:
        //rainha
        break;    
    default:
        printf("opcao invalida\n");
        break;
    }}
    return 0;
}