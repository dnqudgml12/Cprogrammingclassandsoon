#include <stdio.h>


int firstdigit(int b);

int main(){

    int a=0;

    scanf("%d",&a);

    firstdigit(a);


    return 0;
}

int firstdigit(int a){

    int b = a%10;

    printf("%d",b);
}



