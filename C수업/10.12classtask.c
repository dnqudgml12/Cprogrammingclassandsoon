#include <stdio.h>

int main(){

    float a=0.F, b=0.F;
    char op =0;
    float result = 0.F;

    printf("input a binary expression:");
    scanf("%f %c %f", &a,&op,&b);

    switch (op)
    {
    case '+':
    result= a+b;
    break;
    
    case '-':
    result= a-b;
    break;

    case '*':
    result= a*b;
    break;

    case '/':

    if(b!=0){
        result= a/b;




    }else{

        printf("b is zero");
        result=0;

    }

        break;
    default:

    printf("Invalid operator %c",op);



    
    }

printf("%f",result);


    return 0;


}