#pragma once
#include <string>
/**
 * ui: layout
 * dw: draw                             gm: game logic      ut: utils
 * tc: terminal control
 */

namespace dw
{
    inline int block2col(int b)
    {
        return 2 * b - 1;
    }
    void window(int top, int left, int width, int height, std::string title);
} // namespace dw