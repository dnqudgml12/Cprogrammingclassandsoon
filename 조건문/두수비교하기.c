#include <stdio.h>

int main(){
    int a=0,b=0;
    scanf("%d %d",&a,&b);

    if( a>=-10000&&a<=10000&&b>=-10000&&b<=10000){
    if(a>b){
        printf(">");
    }else if(a<b){
        printf("<");
    }else if(a==b){
        printf("==");
    }
    }
    return 0;
}