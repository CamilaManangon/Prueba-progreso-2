#include <stdio.h>
#include "player.h"
#include "maze.h"

int comprobarMov(int x, int y){
    if(x<0 || x>4 || y<0 || y>4){
        printf("Movimiento no valido.\n");
        return 0;
    }else{
        return 1;
    }
}

void moverme(int x, int y){
    char mov;
    printf("Ingrese movimiento que quiere realizar: ");
    scanf("%c",&mov);
    switch(mov){
        case 'a':
        if(comprobarMov(x,y-1)==1 || comprobarPared(x,y-1)==1){
            y = y - 1;
        }else{
            printf("Movimiento invalido.\n");
        }
        break;

        case 'w':
        comprobarMov(x-1,y);
        comprobarPared(x-1,y);
        if(comprobarMov(x-1,y)==1 || comprobarPared(x-1,y)==1){
            x = x - 1;
        }else{
            printf("Movimiento invalido.\n");
        }
        break;

        case 's':
        comprobarMov(x,y+1);
        comprobarPared(x,y+1);
        if(comprobarMov(x,y+1)==1 || comprobarPared(x,y+1)==1){
            y = y + 1;
        }else{
            printf("Movimiento invalido.\n");
        }
        break;

        case 'd':
        comprobarMov(x+1,y);
        comprobarPared(x+1,y);
        if(comprobarMov(x+1,y)==1 || comprobarPared(x+1,y)==1){
            x = x + 1;
        }else{
            printf("Movimiento invalido.\n");
        }
        break;

        
    }
    
}


