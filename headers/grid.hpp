#include "../state.cpp"
class Grid {
    private:
        int height;
        int width;
        int initX;
        int initY;
        State* state;
    public:
        Grid(int height, int width, int initX, int initY);
        void initGrid();
        void printGrid();
};