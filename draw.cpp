#include <iostream>
#include "draw.h"
#include "terminal.h"

/**
 *        	0	1	2	3	4	5	6	7	8	9	A	B	C	D	E	F
 * U+250x	─	━	│	┃	┄	┅	┆	┇	┈	┉	┊	┋	┌	┍	┎	┏
 * U+251x	┐	┑	┒	┓	└	┕	┖	┗	┘	┙	┚	┛	├	┝	┞	┟
 * U+252x	┠	┡	┢	┣	┤	┥	┦	┧	┨	┩	┪	┫	┬	┭	┮	┯
 * U+253x	┰	┱	┲	┳	┴	┵	┶	┷	┸	┹	┺	┻	┼	┽	┾	┿
 * U+254x	╀	╁	╂	╃	╄	╅	╆	╇	╈	╉	╊	╋	╌	╍	╎	╏
 * U+255x	═	║	╒	╓	╔	╕	╖	╗	╘	╙	╚	╛	╜	╝	╞	╟
 * U+256x	╠	╡	╢	╣	╤	╥	╦	╧	╨	╩	╪	╫	╬	╭	╮	╯
 * U+257x	╰	╱	╲	╳	╴	╵	╶	╷	╸	╹	╺	╻	╼	╽	╾	╿
 */

// inline int block2col(int b)

//  1,10,12,22
void dw::window(int top, int left, int width, int height, std::string title)
{
    for (int r = 0; r < height; ++r)
    {
        tc::move_to(top + r, block2col(left));
        for (int c = 0; c < width; ++c)
        {
            if (r == 0) // 第一行
            {
                if (c == 0) // 第一列
                {
                    std::cout << "┏";
                }
                else if (c == (width - 1)) // 最后一列
                {
                    std::cout << "┓";
                }
                else
                {
                    std::cout << "━━";
                }
            }
            else if (r == (height - 1)) // 最后一行
            {
                if (c == 0) // 第一列
                {
                    std::cout << "┗";
                }
                else if (c == (width - 1)) // 最后一列
                {
                    std::cout << "┛";
                }
                else
                {
                    std::cout << "━━";
                }
            }
            else
            {
                if ((c == 0) || (c == (width - 1)))
                {
                    std::cout << "┃";
                }
                else
                {
                    std::cout << "  ";
                }
            }
        }
        tc::move_to(top, block2col(left) + (width * 2 - title.length() - 1) / 2);
        std::cout << title;
    }
}
