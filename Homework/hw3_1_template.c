#include <stdio.h>

#include <math.h>
#include <limits.h>

#define LEFT 0
#define RIGHT 1



// 숫자를 입력하여서 그 입력된 숫자의 자릿수 만큼 오른쪽 끝의 수가 왼쪽끝으로 반복 이동하거나
// 왼쪽 끝의수가 오른쪽 끝으로 반복 이동되는 결과를 만들려 한다.
// 숫자를 입력 받은 뒤에 그 숫자의 자릿수를 count하는 함수를 만든다.
// 숫자의 자릿 수를 count하는 함수는 숫자를 양의 정수로 만든다.
// 10으로 나누어 지는 횟수만큼을 그 숫자의 자릿수로 판단한다.
// 앞서 자릿수를 세는 함수에서 나온 결과 값 만큼 숫자의 오른쪽 끝의 수가 왼쪽 끝으로 반복 이동 하도록 한다.
// 또한 왼쪽 끝의 수가 오른쪽 끝으로 반복 이동하도록 나누어서 한다.
// 이때 이를 실행하는 함수를 만들어서 for문 안에서 숫자의 자릿수 만큼 반복하도록 한다.
// 앞서 언급된 숫자의 rotate를 하는 함수는 왼쪽, 오른쪽으로 도는 것을 각각 구하도록 한다.
// 각각 숫자를 10을 자릿수 만큼 제곱 한 값을 구하고 이를 변수 result라 정한다.

// 왼쪽 일때는 입력된 숫자에서 result를 나눈 값을 가장 오른쪽으로, result로 구한 나머지 값을 왼쪽에 둔다.
// 오른쪽 일때는 입력된 숫자에서 10을 나눈 값을 가장 왼쪽으로, 10으로 구한 나머지 값을 오른쪽에 둔다.

// 이 결과를 통해 나온 함수를 printf로 출력한다.

int CountDigit(int x);
int RotateDigit(int x, int no_digit, int dir);

int main()
{
    int x = 0;

    printf("Input an integer: ");
    scanf("%d", &x);

    int no_digit = CountDigit(x);
    printf("%d has %d digits.\n", x, no_digit);

    printf("Rotating Left:\n");
    int i = 0;
    for(i = 1; i <= no_digit; i++){
        x = RotateDigit(x, no_digit, LEFT);
        printf("after %d left-rotations: %d\n", i, x);
    }

    printf("Rotating Right:\n");
    for(i = 1; i <= no_digit; i++){
        x = RotateDigit(x, no_digit, RIGHT);
        printf("after %d right-rotations: %d\n", i, x);
    }

    return 0;
}

int CountDigit(int x)
{

    int n=0;

    if (x>0){

        while(x>0){

                x/=10;
                n++;

    }

    }else{

        x=-x;
        while(x>0){
                
                x/=10;
                n++;

    }

    }


return n;


    // TO DO: implement this function
    //  initialize n to 1
    //  if x is a negative number, make it positive by assigning -x to x
    //  repeat while x is greater than or equal to 10
    //      divide x by 10
    //      increase n
    //  return n;

 
}

int RotateDigit(int x, int no_digit, int dir)
{
   int first=0;
   int remain=0;

   int last=0;
   int lastremain=0;

   int result=1;
    if (dir==0){

        for (int i=0;i<no_digit-1;i++){
            result*=10;
        }
        remain=x%result;
        first=x/result;
        

        x=remain*10+first;


        

    }else if(dir==1){

        for (int i=0;i<no_digit-1;i++){
            result*=10;
        }



        last=x%10;
        lastremain=x/10;


        
        

        x=last*result+lastremain;

    }

    // TO DO: implement this function
    //  if dir is LEFT,
    //      initialize msd (most significant digit, e.g., msd of 321 is 3) to x and divider to 10
    //      repeat for i from 0 to no_digit - 1
    //          divide msd by 10
    //          multiply divider by 10
    //      rotate-left x using divider and msd  (solve for yourself)

    //  if dir is RIGHT,
    //      initialize ones by lsd (least significant digit, e.g., lsd of 321 is 1)
    //      repeat for i from 0 to no_digit - 1
    //          multiply ones by 10
    //      rotate-right x using ones (solve for yourself)

    //  return x

    
    return x;
}