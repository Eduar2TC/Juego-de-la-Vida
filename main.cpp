#include <iostream>
#include <stdlib.h>
#include "grid.cpp"
using namespace std;
int main(){

    //Ventana ventana;
    Grid grid(20, 20, 5, 5);
    grid.initGrid();
    grid.printGrid();
    cin.get();
    return 0;


}