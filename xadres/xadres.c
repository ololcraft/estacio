#include <stdio.h>
int main(){
    int x, y;
    char* local;
    if (x == 1 && y == 1){local = "a1";}
    else if (x == 2 && y == 1){local = "b1";}
    else if (x == 3 && y == 1){local = "c1";}
    else if (x == 4 && y == 1){local = "d1";}
    else if (x == 5 && y == 1){local = "e1";}
    else if (x == 6 && y == 1){local = "f1";}
    else if (x == 7 && y == 1){local = "g1";}
    else if (x == 8 && y == 1){local = "h1";}
    else if (x == 1 && y == 2){local = "a2";}
    else if (x == 1 && y == 3){local = "a3";}
    else if (x == 1 && y == 4){local = "a4";}
    else if (x == 1 && y == 5){local = "a5";}
    else if (x == 1 && y == 6){local = "a6";}
    else if (x == 1 && y == 7){local = "a7";}
    else if (x == 1 && y == 8){local = "a8";}
    else {printf("erro\n");}
    if (local == "a1"){x = 1; y = 1;}
    else if (local == "b1"){x = 2;y = 1;}
    else if (local == "c1"){x = 3;y = 1;}
    else if (local == "d1"){x = 4;y = 1;}
    else if (local == "e1"){x = 5;y = 1;}
    else if (local == "f1"){x = 6;y = 1;}
    else if (local == "g1"){x = 7;y = 1;}
    else if (local == "h1"){x = 8;y = 1;}
    else if (local == "a2"){x = 1;y = 2;}
    else if (local == "a3"){x = 1;y = 3;}
    else if (local == "a4"){x = 1;y = 4;}
    else if (local == "a5"){x = 1;y = 5;}
    else if (local == "a6"){x = 1;y = 6;}
    else if (local == "a7"){x = 1;y = 7;}
    else if (local == "a8"){x = 1;y = 8;}
    local = "a1";
    printf("a torre esta localizada no eixo x: %d eixo y: %d", x, y);
    
    return 0;
}