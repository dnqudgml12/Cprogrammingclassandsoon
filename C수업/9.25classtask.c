#include <stdio.h>

void swap(int *x,int *y);
int main(){

    int a=0;
    int b=0;


    scanf("%d %d",&a,&b);

    printf("a= %d, b=%d \n",a,b);


    swap(&a,&b);
 printf("a= %d, b=%d \n",a,b);
return 0;

}

void swap(int *x,int *y){

    int temp=*x;
    *x=*y;
    *y=temp;

// 포인터 배열을 해야 주소 값까지 다 바뀜

 printf("x= %d, y=%d \n",*x,*y);
}

/*
/*
    Compilation on Windows
        gcc console_demo2.c Console.c -D_WINDOWS

    Compilation on Mac
        gcc console_demo2.c Console.c -D_MAC

*/
/*
#include <stdio.h>                      // includes a file in the system directory

#include "Console.h"                    // includes a file in the current directory

int main()
{
    // get the size of the screen
    int screen_width = getWindowWidth();
    int screen_height = getWindowHeight() - 3;      // -3 is to prevent vertical scroll

    clrscr();                   // clear screen

    int x = 0;
    int y = screen_height / 2;          // set y to the vertical center
    int prevx = 1;

//    for(x = 1; x <= screen_width; x++){
    for(x = screen_width; x >= 1; x--){
        // erarse previous coordinate
        gotoxy(prevx, y);
        putchar(' ');

        // draw a new '*' at the new coordinate
        gotoxy(x, y);
        putchar('*');

        // save the previous coordinate
        prevx = x;
        gotoxy(1, screen_height);   // place the cursor to prevent blicking

        fflush(stdout);             // flush contents to display on the screen

        // wait for 50 msec.
        MySleep(25);
    }

    gotoxy(1, screen_height);       // move the cursor to lower left coordinate
//    MyPause();                    // wait for the user to type Enter key.

    return 0;
}
*/



/*
/*
    Compilation on Windows
        gcc console_demo2.c Console.c -D_WINDOWS

    Compilation on Mac
        gcc console_demo2.c Console.c -D_MAC

*/
/*
#include <stdio.h>                      // includes a file in the system directory

#include "Console.h"                    // includes a file in the current directory

int screen_width = 0;
int screen_height = 0;

void LeftToRight(int x1, int x2, int y);

int main()
{
    // get the size of the screen
    screen_width = getWindowWidth();
    screen_height = getWindowHeight() - 3;      // -3 is to prevent vertical scroll

    clrscr();                   // clear screen

    LeftToRight(screen_width * 2 / 5, screen_width * 3 / 5, screen_height / 2);
/*
    int x = 0;
    int y = screen_height / 2;          // set y to the vertical center
    int prevx = 1;

//    for(x = 1; x <= screen_width; x++){
    for(x = screen_width; x >= 1; x--){
        // erarse previous coordinate
        gotoxy(prevx, y);
        putchar(' ');

        // draw a new '*' at the new coordinate
        gotoxy(x, y);
        putchar('*');

        // save the previous coordinate
        prevx = x;
        gotoxy(1, screen_height);   // place the cursor to prevent blicking

        fflush(stdout);             // flush contents to display on the screen

        // wait for 50 msec.
        MySleep(25);
    }
*/
/*
    gotoxy(1, screen_height);       // move the cursor to lower left coordinate
//    MyPause();                    // wait for the user to type Enter key.

    return 0;
}

void LeftToRight(int x1, int x2, int y)
{
    int x = 0;
    int prevx = 1;

    for(x = x1; x <= x2; x++){
//    for(x = screen_width; x >= 1; x--){
        // erarse previous coordinate
        gotoxy(prevx, y);
        putchar(' ');

        // draw a new '*' at the new coordinate
        gotoxy(x, y);
        putchar('*');

        // save the previous coordinate
        prevx = x;
        gotoxy(1, screen_height);   // place the cursor to prevent blicking

        fflush(stdout);             // flush contents to display on the screen

        // wait for 50 msec.
        MySleep(25);
    }
}
*/





/*


#include <stdio.h>

void swap(int x, int y);

int main()
{
    int a = 5, b = 15;

    printf("a = %d, b = %d\n", a, b);

    swap(a, b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;

    printf("x = %d, y = %d\n", x, y); 
    //여기서는 변하는데 
    // 위에 swap에서는 변화된 값이 저장되지 않음
    //그래서 포인터 적용
}

*/

/*
/*
    Compilation on Windows
        gcc console_demo2.c Console.c -D_WINDOWS

    Compilation on Mac
        gcc console_demo2.c Console.c -D_MAC

*/
/*
#include <stdio.h>                      // includes a file in the system directory

#include "Console.h"                    // includes a file in the current directory

int screen_width = 0;
int screen_height = 0;

void LeftToRight(int x1, int x2, int y);
void RightToLeft(int x1, int x2, int y);

int main()
{
    // get the size of the screen
    screen_width = getWindowWidth();
    screen_height = getWindowHeight() - 3;      // -3 is to prevent vertical scroll

    clrscr();                   // clear screen

//    LeftToRight(screen_width * 2 / 5, screen_width * 3 / 5, screen_height / 2);
    RightToLeft(screen_width * 2 / 5, screen_width * 3 / 5, screen_height / 2);

/*
    int x = 0;
    int y = screen_height / 2;          // set y to the vertical center
    int prevx = 1;

//    for(x = 1; x <= screen_width; x++){
    for(x = screen_width; x >= 1; x--){
        // erarse previous coordinate
        gotoxy(prevx, y);
        putchar(' ');

        // draw a new '*' at the new coordinate
        gotoxy(x, y);
        putchar('*');

        // save the previous coordinate
        prevx = x;
        gotoxy(1, screen_height);   // place the cursor to prevent blicking

        fflush(stdout);             // flush contents to display on the screen

        // wait for 50 msec.
        MySleep(25);
    }
*/
/*
    gotoxy(1, screen_height);       // move the cursor to lower left coordinate
//    MyPause();                    // wait for the user to type Enter key.

    return 0;
}

void LeftToRight(int x1, int x2, int y)
{
    int x = 0;
    int prevx = x1;

    for(x = x1; x <= x2; x++){
//    for(x = screen_width; x >= 1; x--){
        // erarse previous coordinate
        gotoxy(prevx, y);
        putchar(' ');

        // draw a new '*' at the new coordinate
        gotoxy(x, y);
        putchar('*');

        // save the previous coordinate
        prevx = x;
        gotoxy(1, screen_height);   // place the cursor to prevent blicking

        fflush(stdout);             // flush contents to display on the screen

        // wait for 50 msec.
        MySleep(25);
    }
}
    while(1){
        LeftToRight(screen_width * 2 / 5, screen_width * 3 / 5, screen_height / 2);
        RightToLeft(screen_width * 2 / 5, screen_width * 3 / 5, screen_height / 2);
    }

void RightToLeft(int x1, int x2, int y)
{
    int x = 0;
    int prevx = x2;

//    for(x = x1; x <= x2; x++){
    for(x = x2; x >= x1; x--){
        // erarse previous coordinate
        gotoxy(prevx, y);
        putchar(' ');

        // draw a new '*' at the new coordinate
        gotoxy(x, y);
        putchar('*');

        // save the previous coordinate
        prevx = x;
        gotoxy(1, screen_height);   // place the cursor to prevent blicking

        fflush(stdout);             // flush contents to display on the screen

        // wait for 50 msec.
        MySleep(25);
    }
}

*/