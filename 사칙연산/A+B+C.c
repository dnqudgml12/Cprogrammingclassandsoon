#include <stdio.h>
#include <math.h> // pow(), sqrt() 함수가 정의된 헤더 파일


//int형보다 큰 값을 출력할 수도 있으므로 long long 형(8byte)을 사용하여 출력합니다.
int main(){

    long long a=0,b=0,c=0;

    scanf("%lld %lld %lld",&a,&b,&c);

if (a>=1&&a<=pow(10,12)&&b>=1&&b<=pow(10,12)&&c>=1&&c<=pow(10,12)){
    printf("%lld",a+b+c);
}

    return 0;
}

/*
int main(void)
{
    // 2의 10승과 2의 20승 
    printf("%.0lf, %.0lf\n", pow(2, 10), pow(2, 20)); // 1024, 1048576

    // 9의 제곱근
    printf("%.0lf\n", sqrt(9)); // 3

    return 0;
}

*/