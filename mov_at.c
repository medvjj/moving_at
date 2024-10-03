#include <ncurses.h>

int main (void)
{
        initscr ();
        keypad(stdscr, 1); /* allow moving with arrows */
	      noecho(); /* don't show input */
        curs_set(0); /* hide cursor */
        int c;
        int y = 5, x = 5; /* initial coordinates */
        while ((c = getch()) != 27) /* 27 - ESC */
            {
              if (c == KEY_UP)
                  y--;
              else if (c == KEY_DOWN)
                  y++;
              else if (c == KEY_LEFT)
                  x--;
              else if (c == KEY_RIGHT)
                  x++;
             
              mvaddch (y,x,'@');
            }
        getch ();
        endwin ();
        return 0;
}
