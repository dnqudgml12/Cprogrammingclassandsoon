#include <stdio.h>

int main(){

    int a=0,b=0;

    int c=0;




    scanf("%d %d",&a,&b);
    scanf("%d",&c);
      int minute=0;
    minute = b+c;
    int divideminute= 0;
    divideminute=minute/60;

    if(a>=0&&a<=23&&b>=0&&b<=59&&c>=0&&c<=1000){

        if (divideminute >0 && (a+divideminute)>=24){  
            // 분/60이 0보다 크면 즉 60보다 크고 시간 더하기 분/60값이 24보다 크면
            // 더해진 총 분 값 -60*(총분에서 60나눈 값) => 더하고 남은 분 값 생김
            // 시간= 시간+(총분/60=> 시간으로 계산됨) -24 => 시간에서 분에서시간으로 치환됨 값 -24해야 24넘어가도 원래 시간 대로 표시가능(24미만으로)
            minute -=(60*divideminute);
            a=a+divideminute-24;

             printf("%d %d",a,minute);


        }else if(divideminute >0 && (a+divideminute)<24){
             minute -=(60*divideminute);
             printf("%d %d",a+divideminute,minute);
        }else{

            printf("%d %d",a,minute);
        }



       
    }

    return 0;







}