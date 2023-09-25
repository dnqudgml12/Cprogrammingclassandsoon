#include <stdio.h>

int main()
{
    int x=0;
    int a=0,b=0,c=0;

   printf("input a 3-digit number:");
    scanf("%d",&x);

    a= x/100;
    b= x/10%10;
    c=x%10;

    printf("<%d, %d, %d>",a,b,c);
main2();
    return 0; 


    
}


int main2(){
    int d=0;
    int e=0,f=0,g=0;

      

   printf("input a 9-digit number:");
    scanf("%d",&d);


    e = d/1000000;
 f= d/1000%1000;
     g=d%1000;

    printf("%03d,%03d,%03d",e,f,g);

    return 0; 
}