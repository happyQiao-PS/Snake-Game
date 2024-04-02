#pragma once

#include "tetromino.h"

namespace gm
{
    extern bool running;
    extern int row, col;
    extern Tetromino cur;
    void quit(void);
    void init(void);

    // 键盘命令函数
    void quit(void);
    void rotate(void);
    void left(void);
    void right(void);
    void down(void);
}