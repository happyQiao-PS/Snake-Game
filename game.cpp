#include "game.h"

namespace gm
{
    bool running;
    int row, col;

    void init(void)
    {
        running = true;
        row = 2;
        col = 15;
    }
    void quit(void)
    {
        running = false;
    }

    void rotate(void)
    {
        row--;
    }
    void left(void)
    {
        col--;
    }
    void right(void)
    {
        col++;
    }
    void down(void)
    {
        row++;
    }
}