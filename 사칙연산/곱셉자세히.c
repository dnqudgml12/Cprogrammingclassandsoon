#include <stdio.h>
#include <math.h>


int main(){

    int a=0,b=0;

    scanf("%d",&a);
    scanf("%d",&b);


    int x=0;
    int temp=b;

    while ( temp>0)
    {
       
       x++;
         temp/=10; 
    }

    for(int i=1;i<=x;i++){
    int c = (b / (int)pow(10, i-1)) % 10; // 각 자리 값을 추출
        printf("%d\n",a*c);



    }

    printf("%d",a*b);
    


    return 0;
}