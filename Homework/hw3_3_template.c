#include <stdio.h>
#include <string.h>

#include "Console.h"

#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define ABS(x)    ((x) >= 0 ? (x) : -(x))


//'*'의 이동을 화면에 출력하는 것으로 0,1로 나누어서 두 가지 모션을 보여준다.
// 첫번째 모션은 대각선으로 '*'가 이동하도록 하는 것이고 두번째 모션은 '*'가 사각형으로 움직이고 가운데에 메시지를 출력하는 것이다.
// '*'가 이동하는 함수를 만들 것이다.
// 이 함수는 paramter로 x좌표,y좌표,delay되는 시간을 값으로 받는다.
// x축으로 이동하는 시간과 y축으로 이동하는 시간을 각각 구하고 이 값 중 최대 값을 구하여 그 값 만큼 반복한다.
// 반복문 for에 들어가는 사항으로는 이전 위치에 값과 현재 위치의 값을 이용한다.
// 현재 위치는 x,y가 각 반복에서 최대 이동거리만큼 증가하는 것이며 이전 위치는 현재 위치로 이동 전에 있는 위치이다.
// 이전 위치에서 '*'가 사라지고 현재 위치에서 나타는 과정을 통해서 '*'하나가 계속해서 이동하는 것 처럼 보인다.
// 이동이 끝난 뒤에는 x,y에서 각각 끝나는 값에 좌표가 위치하고 '*'가 사라진다.

// 앞서 설명한 함수를 기반으로 하여서 completed가 0일 때는 x,y좌표가 대각선으로 움직이는 parameter를 넣는다.
// completed가 1일때는 x,y좌표가 사각형 형태로 움직이는 parameter를 설정한다. 또한 메시지의 위치를 사각형의 가운데 위치하도록 지정한다.
// 그리고 CTRL-C를 누르면 결과값 출력이 멈추는 사항을 출력해준ㄷ.

int completed = 0;         // Disable this line after completing MoveStar().
//int completed = 1;         // Enable this line after completing MoveStar().

int screen_width = 0;
int screen_height = 0;

void MoveStar(int x1, int y1, int x2, int y2, int delay);

int main()
{
    screen_width = getWindowWidth();
    screen_height = getWindowHeight() - 3;

    clrscr();

    if(completed == 0){
        MoveStar(1, 10, 50, 1, 20);
        MoveStar(50, 10, 1, 1, 20);
        gotoxy(1, screen_height);
        printf("Bye!\n");
     } else {
        gotoxy(1, screen_height);
        printf("Press CTRL-C to quit.");

        char mesg[256] = "You are the masterpiece of God!";
        int len = strlen(mesg);
        gotoxy((screen_width - len) / 2, screen_height / 2);
        printf("%s", mesg);

        int x[5] = { screen_width / 4,  screen_width * 3 / 4, screen_width * 3 / 4,  screen_width / 4,      screen_width / 4};
        int y[5] = { screen_height / 4, screen_height / 4,    screen_height * 3 / 4, screen_height * 3 / 4, screen_height / 4};

        for(int i = 0; 1; i = (i + 1) % 4){
            if(i % 2 == 0)
                MoveStar(x[i], y[i], x[i+1], y[i+1], 10);
            else
                MoveStar(x[i], y[i], x[i+1], y[i+1], 20);
        }
    }

    return 0;
}

void MoveStar(int x1, int y1, int x2, int y2, int delay)
{
    int dx = ABS(x1 - x2); // x축으로 이동하는 거리
    int dy = ABS(y1 - y2);// y축으로 이동하는 거리
    int dist = MAX(dx, dy); // 최대 거리 만큼 반복해야 하니, 
    //두점 사이의 최대 이동거리(dx와 dy중 하나 고르기)

    int x = x1, y = y1; // 시작 위치 설정 
    int prevx = x1, prevy = y1; // 이전 별표 위치



    for (int t=0;t<=dist;t++){

           x = ((dist - t) * x1 + t * x2) / (float)dist; //새로운 위치, linear interpolation
           y = ((dist - t) * y1 + t * y2) / (float)dist;


           gotoxy(prevx,prevy); // prex,prey로 좌표 이동(현재 위치)
           putchar(' ');  //문자를 표준 출력 스트림에 출력하는 역할, 이전 위치 별 지우기

           gotoxy(x,y); // 새위치로 좌표 이동
           putchar('*'); // 새 위치에 별표 그리기

           gotoxy(1,screen_height); // 좌표를 화면 하단에 이동시키기

           fflush(stdout); // 출력 버퍼에 있는 값 화면 강제 출력

           prevx = x; // 이전 위치 값을 현재 위치 값으로 업데이트
           prevy = y;
 
           MySleep(delay); // delay초 동안 늦추기

    }






    // TO DO: implement this function to move a star ('*') from (x1, y1) to (x2, y2)
    //  repeat for t from 0 to dist
    //      compute x and y by linear interpolation
    //          x = ((dist - t) * x1 + t * x2) / (float)dist
    //          y = ((dist - t) * y1 + t * y2) / (float)dist 
    //      erase the previous coordinate (prevx, prevy)
    //      draw '*' at the new coordinate (x, y)
    //      move the cursor to (1, screen_height)
    //      call "fflush(stdout);"
    //      save x and y in prevx and prevy
    //      wait for delay msec. (call "MySleep(delay);")






    gotoxy(x2, y2); // 이동이 완료된 뒤에 좌표를 x2,y2로 이동하고 별표를 지운다.
    putchar(' ');
}
