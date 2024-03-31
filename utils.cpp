#include "utils.h"
#include "define.h"

int ut::fps(void)
{
    static auto start = std::chrono::steady_clock::now();
    auto end = std::chrono::steady_clock::now();
    static int frame_count = 0;
    static int fps = 0;

    frame_count++;
    if ((end - start) > 1s)
    {
        fps = frame_count;

        frame_count = 0;
        start = end;
    }

    return fps;
}