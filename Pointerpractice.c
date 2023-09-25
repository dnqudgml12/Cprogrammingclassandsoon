#include <stdio.h>

void Divide(int num1, int num2, int *quo, int *rem);
int main(){

    int a=0,b=0;
    int quo=0,rem=0;

    printf("input two numbers:");
    scanf("%d %d",&a,&b);

    Divide(a,b,&quo,&rem);

    printf("%d / %d = %d\n",a,b,quo);
    printf("%d %% %d = %d",a,b,rem);

return 0;


    
}


void Divide(int num1, int num2, int *quo, int *rem){

    *quo=num1/num2;
    *rem=num1%num2;

    return;

}