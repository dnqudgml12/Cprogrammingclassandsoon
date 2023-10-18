#include <stdio.h>


long factorial(int n);

int main(){


    int num=0;
    scanf("%d",&num);

    printf("%d",factorial(num));
    return 0;

}



long factorial(int n){

//recursion 사용

int result =1;

if (n==1){
    return 1;
} else{

    return n * factorial(n-1);
    // 처음 들어온 값부터 n=1 이 될때까지 계속 곱합
}



/*
    int result=1;

    for (int i=1;i<=n;i++){

        result *=i;
        
    }

    return result;
*/
}

/*
factorial(5) = 5 * 4 * 3 * 2 * 1
factorial(4) = 4 * 3 * 2 * 1
...
factorial(0) = 1
factorial(x) = x * factorial(x - 1)

int factorial(int x)
{
    int result = 1;

    for(int i = 1; i <= x; i++)
        result *= i;

    return result;
}

int factorial(int x)
{
// factorial(0) = 1
// factorial(x) = x * factorial(x - 1)

    if(x == 0)
        return 1;
    else
        return x * factorial(x - 1);
}
*/


