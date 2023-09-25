/*
    Compilation on Windows
        gcc console_demo1.c Console.c -D_WINDOWS


        // C언어의 표준기능이 아닌 OS에 따른 기능들이다.


    Compilation on Mac
        gcc console_demo1.c Console.c -D_MAC

*/

#include <stdio.h>                      // includes a file in the system directory

#include "Console.h"                    // includes a file in the current directory
//Console.h를 여기 파일에 넣어라.

int main()
{
    // get the size of the screen
    int screen_width = getWindowWidth(); // width가 몇 칸인지 알기 위해서
    int screen_height = getWindowHeight() - 3; 
    //맨 마지막 3줄에는 아무것도  쓰지말자 => 뭐 쓰면 위로 스크롤 되니까
         // -3 is to prevent vertical scroll
    // height가 몇칸인지 알기 위해서

    clrscr();                   // clear screen

    int x = 0, y = 0;

    for(x = 1; x < 20; x++){   //X좌표를 1에서 19까지 전치를 한다
        y = x / 2 + 1;  // x/2 대각선으로 가라 y좌료에다가 x/2 +1 -> 텍스트 좌표에 0이 없으므로 +1 아무리 작아도 1보다 커라
        gotoxy(x, y);
        putchar('*'); // equivalant printf("%c","*");
    }

    gotoxy(1, screen_height);   // move the cursor to lower left coordinate
    MyPause();                  // wait for the user to type Enter key.

    return 0;
}
