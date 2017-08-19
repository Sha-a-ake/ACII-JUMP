#include <stdio.h>
#include <stdbool.h>
#include <curses.h>

#include "Rendering.h"

int game_cycle()
{
    int ch;
    int i = 0, y = 0;

    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);

    while (++i)
    {
        //render_all();
        if ((ch = getch()) != ERR)
            break;
        else
            printw("%d", i);
        move(y++, 0);

        if (y == 39)
            y = 0;
    }

    return 0;
}

int main()
{
    printf("Hello world!\n");

    game_cycle();

    endwin();

    return 0;
}
