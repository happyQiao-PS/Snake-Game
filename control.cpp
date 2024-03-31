#include "control.h"
#include "define.h"
#include "game.h"

namespace gm
{
    char command = 0;
    std::map<char, std::function<void()>> comm_func{
        {KEY_Q, command_quit},
        {KEY_W, command_rotate},
        {KEY_S, command_down},
        {KEY_A, command_left},
        {KEY_D, command_right},
    };

    char getch(void)
    {
        char c;
        struct termios old, cur;
        tcgetattr(0, &cur);
        old = cur;
        cfmakeraw(&cur);
        tcsetattr(0, 0, &cur);
        c = getchar();
        tcsetattr(0, 0, &old);
        return c;
    }

    void key_event(void)
    {
        while (running) // 在线程里面监听键盘事件
        {
            command = getch();
            comm_func[command]();
        }
    }

    void start_listerner(void)
    {
        std::thread t(key_event);
        t.detach();
    }

    void command_quit(void)
    {
        running = false;
    }
    void command_rotate(void)
    {
    }

    void command_left(void)
    {
    }

    void command_right(void)
    {
    }

    void command_down(void)
    {
    }
}
