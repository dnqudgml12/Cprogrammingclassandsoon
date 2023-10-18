#include <stdio.h>

int main(){

    float a=0.F, b=0.F;
    char op =0;
    float result = 0.F;

    printf("input a binary expression:");
    scanf("%f %c %f", &a,&op,&b);


    if (op =='+'){
        result = a+b;
        printf("%f",result);
    }else if(op =='-'){
        result = a-b;
        printf("%f", result);
    }else if(op =='*'){
        result = a*b;
        printf("%f",result);
    }else if (op=='/'){

        if (a !=0 && b!=0)
        {
        result = a/b;
        printf("%f",result);
        }else{
             printf("Warning! a or b is zero!!!\n");
             result=0;
        }
    } else{
        printf("invalid operator %c\n", op);
    }

    return 0;


}