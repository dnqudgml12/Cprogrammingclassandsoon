#include <stdio.h>

int main(){

    int x =100;

    {float y=x;
    float x=50;
    
    printf("%f",y);}


    return 0;
}