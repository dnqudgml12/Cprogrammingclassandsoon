#include <stdio.h>

int main(){

    int a=0,b=0,c=0;

    scanf("%d %d %d",&a,&b,&c);

if(a>=1&&a<=6&&b>=1&&b<=6&&c>=1&&c<=6){
    if (a==b&&a!=c&&b!=c){
        printf("%d",1000+a*100);
    }else if(b==c&&b!=a&&c!=a)
    printf("%d",1000+b*100);
    else if(a==c&&a!=b&&c!=b)
    printf("%d",1000+c*100);

    else if(a==b&&b==c&&a==c){
          printf("%d",10000+a*1000);
    }
    else{
           printf("%d", ((a>b? a:b)>c?(a>b? a:b):c)*100);
        }
            }

    return 0;

}