#include <stdio.h>

int main(){

    int n;

    scanf("%X",&n);

    for (int i=1;i<=15;i++){

        printf("%X*%X=%X\n",n,i,i*n);


    }
    return 0;

}

/*
16진수로 입력 출력을 받으려면

scanf,printf의 관계연산자에 %X( 소문자 출력의 경우 %x)를 해주면 됩니다.
*/