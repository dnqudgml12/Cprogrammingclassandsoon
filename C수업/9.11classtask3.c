#include <stdio.h>

int main()
{
    int x=0;
    int a=0,b=0,c=0;

   printf("input a 3-digit number:");
    scanf("%d",&x);

    a= x/100;
    b= x/10%10;
    c=x%10;

    printf("<%d, %d, %d>",a,b,c);
main2();
    return 0; 


    
}


int main2(){
    int d=0;
    int e=0,f=0,g=0;

      

   printf("input a 9-digit number:");
    scanf("%d",&d);


    e = d/1000000;
 f= d/1000%1000;
     g=d%1000;

    printf("%03d,%03d,%03d",e,f,g);

    return 0; 
}

/*
int x = 0;
int a = 0, b = 0, c = 0;

// read a 3-digit number
printf("Input a 3-digit number: ");
scanf("%d", &x);  // e.g., x = 456


// compute a, b, and c
a = x / 100;
b = x / 10 % 10;
c = x % 10;


// display the results in format <a, b, c>
printf("<%d,%d,%d>\n", a, b, c);



#include <stdio.h>

int main()
{
    int x = 0;
    int a = 0, b = 0, c = 0;

    // read a 9-digit number
    printf("input a 9-digit number: ");
    scanf("%d", &x);    // 123 456 
    // e.g., 100 000 000

    // cut the input number at every 3rd digit
    a = x / 1000000;
    b = x / 1000 % 1000;
    c = x % 1000;

    // display the result in a,b,c
    printf("Your number = %03d,%03d,%03d\n", a, b, c);

    return 0;
}
*/