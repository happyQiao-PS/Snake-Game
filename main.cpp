#include <iostream>
#include <thread>
#include <chrono>

#include "terminal.h"

using namespace std;
using namespace std::chrono_literals;

int main(int argc, char **argv)
{
    int i;
    for(i=1;i<15;i++){
        tc::clean_screen();
        tc::move_to(i,10);
        tc::set_back_color(15);
        std::cout << "  ";
        tc::reset_color();
        std::cout << std::flush;
        std::this_thread::sleep_for(500ms);//s ms us ns
        tc::hide_cursor();
    }
    
    return 0;
}