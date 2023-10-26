#include <stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    // n이 width값인걸로
    int count=0;
    int b=0;
    b=n;
    while (b>0)
    {   count++;
        b-=2;
    }



    return 0;
    
}