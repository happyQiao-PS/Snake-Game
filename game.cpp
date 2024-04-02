#include "game.h"
#include "tetromino.h"

namespace gm
{
    bool running;
    int row, col;
    Tetromino cur;

    void init(void)
    {
        running = true;
        row = 2;
        col = 15;
        cur = S;
    }
    void quit(void)
    {
        running = false;
    }

    void rotate(void)
    {
        cur = rotate(cur);
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