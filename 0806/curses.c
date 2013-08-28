#include <curses.h>
#include <stdio.h>
#include <stdlib.h>
#define StartX 1
#define StartY 1
void initial();
int main()
{
	int x = StartX;
	int y = StartY;

	int ch;
	char title[100];
	initial();
	box(stdscr,'|','-');//将以 | 及 - 围成一个方框.
	//box(stdscr,'X','X');//
	attron(A_REVERSE);//开启反白模式
	sprintf(title,"curses program;windows[%d,%d]", COLS, LINES);
	//mvaddstr(0,20,"curses program");//移动到(0,20)位置打印"curses program"
	mvaddstr(0,20,title);//移动到(0,20)位置打印title
	attroff(A_REVERSE);//关闭反白模式
	move(x,y);//移动坐标到(1,1)
	//在调用initscr前,COLS,LINES的值都是0
	const int WIDTH = COLS-2;
	const int HIGHT = LINES-2;

	do{
		ch = getch();//从键盘读取一个字元. (注意! 传回的是整数值)
		switch(ch)
		{
			case KEY_UP:
				--y;
				break;
			case KEY_DOWN:
				++y;
				break;
			case KEY_RIGHT:
				++x;
				break;
			case KEY_LEFT:
				--x;
				break;
			case ' ':
				++y;
				x=1;
				break;
			case '/t':
				x+=7;
				break;
			case KEY_BACKSPACE:
				x = --x?x:1;
				mvaddch(y,x,' ');//用SPACE填充以前的字符在屏幕上的位置,等于在屏幕上删除
				break;
			case 13:
				++y;
				x = 1;
				break;
			case 27:
				endwin(); //关闭curses 模式, 或是暂时的跳离 curses 模式
				exit(1);
			default:
				addch(ch);//显示当前输入的字元
				x++;
				break;
		}
		x = (x>=WIDTH)?WIDTH:x;
		y = (y>=HIGHT)?HIGHT:y;
		sprintf(title,"[%d,%d]", x, y);
		mvaddstr(0,0,title);
		move(y,x);
	}while(1);
}
void initial()
{
	initscr();//开启curses模式
	cbreak();//开启cbreak模式,除了 DELETE 或 CTRL 等仍被视为特殊控制字元外一切输入的字元将立刻被一一读取
	nonl();//用来决定当输入资料时, 按下 RETURN 键是否被对应为 NEWLINE 字元
	noecho();//echo() and noecho(): 此函式用来控制从键盘输入字元时是否将字元显示在终端机上
	intrflush(stdscr,false);
	keypad(stdscr,true);//当开启 keypad 後, 可以使用键盘上的一些特殊字元, 如上下左右>等方向键
	refresh();//将做清除萤幕的工作
}
