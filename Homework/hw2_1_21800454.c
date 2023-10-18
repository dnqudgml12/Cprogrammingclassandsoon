#include <stdio.h>

//take an integer and shift it to the right
//start with the first digit
// and then shift to the back of the line, one by one.

int main(){
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    scanf("%d",&a);

   //Iterate 4 times with the for statement and add the values from algorithm to the variable one by one and save it
    printf("x = %d\n",a);
    for(int i=0;i<4;i++){
        c= a %10;
        b= a/10;

        d=c*1000+b;
        printf("x = %d\n",d);
        a=d;
    
    }
    return 0; 
}

/*
Operator precedence
   unary operator > binary operator
   postfix (e.g., a++) > prefix operator (e.g., ++a)
   multiplicative operators (*, /, %) > additive operators (+, -)
   () overwrites all precedence
   assignments operators have a very low precedence
*/