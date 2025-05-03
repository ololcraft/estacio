#include <stdio.h>
int main(){
    int torre, bispo, rainha;
    int tx, ty, bx, by, rx, ry;
    int escolha;
    while ((escolha >= 4) || (escolha <= 0) || (torre == 3) || (bispo == 5))
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
                do
                {                
                    printf("escolha a direcao que o bispo ira mover\n");
                    printf("1. esquerda cima\n2. esquerda baixo\n3. direita cima\n4. direita baixo\n5. voltar\n");
                    scanf("%d", &bispo);
                    switch (bispo)
                    {
                        case 1:
                            do
                            {
                                printf("digite a quantidade de casas o bispo se movera entre 1 e 8\n");
                                scanf("%d", &bx);
                                by = bx;
                            } while ((bx > 8) || (bx <= 0));
                            printf("o bispo moveu %d casas pra esquerda e %d casas pra cima\n", bx, by);
                        break;
                        case 2:
                            do
                            {
                                printf("digite a quantidade de casas o bispo se movera entre 1 e 8\n");
                                scanf("%d", &bx);
                                by = bx;
                            } while ((bx > 8) || (bx <= 0));                        
                            printf("o bispo moveu %d casas pra esquerda e %d casas pra baixo\n", bx, by);
                        break;
                        case 3:
                            do
                            {
                                printf("digite a quantidade de casas o bispo se movera entre 1 e 8\n");
                                scanf("%d", &bx);
                                by = bx;
                            } while ((bx > 8) || (bx <= 0));                        
                            printf("o bispo moveu %d casas pra direita e %d casas pra cima\n", bx, by);
                        break;
                        case 4:
                            do
                            {
                                printf("digite a quantidade de casas o bispo se movera entre 1 e 8\n");
                                scanf("%d", &bx);
                                by = bx;
                            } while ((bx > 8) || (bx <= 0));                        
                            printf("o bispo moveu %d casas pra direita e %d casas pra baixo\n", bx, by);
                        break;
                        case 5:
                            printf("voltando...\n");
                        break;
                        default:
                            printf("opção invalida\n");
                        break;
                    }
                } while ((bispo <= 0) || (bispo > 5));
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