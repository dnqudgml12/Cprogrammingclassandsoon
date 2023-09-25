#include <stdio.h>

int main(){
    int hour;
    int minute;

    scanf("%d %d",&hour,&minute);


    printf("%02d:%02d\n",hour,minute);
 // 5, 7
 //05:07;   
return 0;
}

/*
int x=123;

x %10=3;
x%100=23;

x/10%10=12%10=2


x in range[0,100];

이걸 이용해서 주사위를 만들려함
0~100까지 범위를 1~6으로 줄이고 싶다
101가지를 6가지로 좁힐려면
101%6 하면 012345로 6가지 가 나온다
x%6 in range[0,5]
x % 6+1 in range[1,6]

*/