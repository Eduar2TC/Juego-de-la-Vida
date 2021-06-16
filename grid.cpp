//Grid definition
#include<iostream>
#include <windows.h>
#include <string>
#include "time.h"

#include "headers/grid.hpp"
#include "window.cpp"
using namespace std;

Grid::Grid(int height, int width, int initX, int initY){
        this->height = height;
        this->width = width;
        this->initX = initX;
        this->initY = initY;
        this->state = new State(height, width, initX);
}
void Grid::initGrid(){
    int randomNumber;
    srand( time(NULL) );
    for (int y = this->initY; y < this->initY + this->height; y++){
        for (int x = this->initX; x < this->initX + this->width; x++){

            randomNumber = rand() % 2;
            if( randomNumber == 0 ){
                this->state->grid[x][y] = 176;
            }else{
                this->state->grid[x][y] = 219;
            }
        }
    }
}

void Grid::printGrid(){
    Ventana ventana;
    Ventana::OcultaCursor();
    for (int y = this->initY; y < this->initY + this->state->n; y++){
        for (int x = this->initX; x < this->initX + this->state->m; x++){
            ventana.situaCoordenada(x, y);
            std::cout << char( this->state->grid[x][y] );
        }
    }
}