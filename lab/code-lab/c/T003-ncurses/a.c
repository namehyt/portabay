#include <string.h>
#include <ncurses.h>

int main(int argc,char* argv[]){
    initscr();
    raw();
    noecho();
    curs_set(0);

    char* c = "Hello, World!";

    mvprintw(LINES/2,(COLS-strlen(c))/2,c);
    refresh();
    getch();

    mvprintw(LINES/3,(COLS-strlen(c))/3,c);
    refresh();
    getch();


    mvprintw(LINES/2,(COLS-strlen(c))/3,c);
    getch();


    mvprintw(LINES/3,(COLS-strlen(c))/2,c);
    refresh();
    getch();
    
    endwin();

    return 0;
}
