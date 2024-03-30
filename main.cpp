#include <iostream>
#include "terminal.h"

using namespace std;
using namespace tc;

int main(int argc, char **argv)
{
    //cout << "\033[5;10H" << "\033[38;5;216m" << "HelloWorld" << "\033[10;1H";
    move_to(10,10);
    set_fore_color(218);
    cout << "HelloLockyQiao";
    move_to(20,0);
    
    return 0;
}