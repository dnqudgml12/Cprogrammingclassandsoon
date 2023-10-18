#include <stdio.h>

int main(){

    int a=0,b=0;


    scanf("%d %d",&a,&b);
    if(a>=0&&a<=23&&b>=0&&b<=59){
        if(a==0&&b-45<0){   // 시가 0일때 분이 45보다 작을때
            a+=24;
            b+=60;

            printf("%d %d",a-1,b-45);

        }else if (a==0&&b-45>=0){ // 시가 0일때 분이 45보다 클때
             
            printf("%d %d",a,b-45);
        }else if (a>0&&b-45<0){ // 시가 0보다 크고 분이 45보다 작을 때
              b+=60;
            printf("%d %d",a-1,b-45);
        }
        else{  // 시가 0이 아니고 분이 45보다 클때
             printf("%d %d",a,b-45);
        }

    }

    return 0;
}