#include <iostream>
class State {
    public:
        int **grid;
        int n;
        int m;
    public:
        State(int n, int m, int positionInitX ){
            this->n = n;
            this->m = m;
            this->grid = new int *[n];
            for (int i = 0; i < positionInitX + n; i++){
                this->grid[i] = new int[m];
            }
        }
};