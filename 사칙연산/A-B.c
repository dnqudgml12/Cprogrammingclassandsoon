#include <stdio.h>

int main(){
    int A=0,B=0;

    scanf("%d %d",&A,&B);

    if(A>0&&A<10&&B>0&&B<10){
        printf("%d",A-B);
    }

    return 0;
}