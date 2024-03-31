#include <iostream>
#include <thread>
#include <chrono>
#include "utils.h"
#include "terminal.h"
#include "draw.h"

using namespace std;
using namespace std::chrono_literals;

void init(void)
{
    tc::clean_screen();
    tc::hide_cursor();
    dw::window(3, 1, 19, 16, "hold");
}
void loop(void)
{
    int i = 1;
    while (true)
    {
        tc::move_to(18, 50);
        std::cout << "FPS:" << ut::fps();
        tc::move_to(5, 10);
        tc::set_back_color(15);
        std::cout << "  ";
        tc::reset_color();
        std::cout << std::flush;
        std::this_thread::sleep_for(100ms); // s ms us ns //1000 / 120fps
        tc::hide_cursor();
    }
}
void exit(void)
{
    tc::show_cursor();
}

int main(int argc, char **argv)
{
    init();
    loop();
    exit();

    return 0;
}