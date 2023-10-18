#include <stdio.h>


int main(){

    int A=0,B=0;

    scanf("%d %d",&A,&B);


    if(A>=1&&A<=10000&&B>=1&&B<=10000)

    printf("%d\n",A+B);
    printf("%d\n",A-B);
    printf("%d\n",A*B);
    printf("%d\n",A/B);
    printf("%d",A%B);


    return 0;
}