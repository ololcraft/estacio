#include <stdio.h>
int main(){
    int torre, bispo, rainha;
    int direcaotorre, direcaobispo, direcaorainha;
    int casastorre, casasbispo, casasrainha;
    int escolha;
    while (escolha >=3 || escolha <= 0)
    {
    printf("digite a peca que ira mover\n");
    printf("1. torre\n2. bispo\n3.rainha\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        //torre
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