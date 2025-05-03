#include <stdio.h>
int main(){
    int torre, bispo, rainha;
    int tx, ty, bx, by, rx, ry;
    int escolha;
    while ((escolha >= 4) || (escolha <= 0) || (torre == 3))
    {    
        printf("digite a peca que ira mover\n");
        printf("1. torre\n2. bispo\n3.rainha\n");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                do
                {                
                    printf("digite a direcao que a torre ira mover\n");
                    printf("1. horizontal\n2. vertical\n3. voltar\n");
                    scanf("%d", &torre);
                    switch (torre)
                    {
                        case 1:
                            do
                            {                            
                                printf("digite a quantidade de casas a torre se movera entre 1 e 8\n");
                                scanf("%d", &tx);
                            } while ((tx > 8) || (tx <= 0));

                            printf("voce moveu a torre horizontalmente %d casas\n", tx);
                        break;
                        case 2:
                            do
                            {   
                                printf("digite a quantidade de casas a torre se movera entre 1 e 8\n");
                                scanf("%d", &ty);
                            } while ((ty > 8) || (ty <= 0));

                            printf("voce moveu a torre verticalmente %d casas\n", ty);    
                        break;
                        case 3:
                        printf("voltando...\n");
                        break;    
                        default:
                        printf("opcao invalida");
                        break;
                    }
                } while ((torre <= 0) || (torre > 3));
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
        }   
        
    }
    return 0;
}