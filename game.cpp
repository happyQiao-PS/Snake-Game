#include "game.h"

namespace gm
{
    bool running;
    void init(void)
    {
        running = true;
    }
    void quit(void)
    {
        running = false;
    }

}