#pragma once

namespace gm
{
    extern char command;

    char getch(void);
    void key_event(void);
    void start_listerner(void);

    // 键盘命令函数
    void command_quit(void);
    void command_rotate(void);
    void command_left(void);
    void command_right(void);
    void command_down(void);
} // namespace gm