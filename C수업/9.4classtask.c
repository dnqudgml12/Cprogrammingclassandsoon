#include <stdio.h>

int main(){

    //fahr선언
    float fahr;

    //scanf로 fahr값 입력 받기
    scanf("%f",&fahr);
 
 // celsius선언 후에 구하는 공식 적용
 /*
    int celsiis = (fahr -32) *5/9;
     printf("Faht %f is Celsius %f \n",fahr,(float)celsiis);
 이러면 소수점 뒷자리 생략
 */


float celsiis = (fahr -32) *5/9;
    // celsius값 화면에 출력

    printf("Faht %0.2f is Celsius %0.2f \n",fahr,celsiis);


    return 0;

    
}

/*

#include <stdio.h>

int main()
{
    float fahr = 0.0;
    float cel = 0.0;

    // read temperature in Fahr
    printf("Input temperature in Fahr: ");
    scanf("%f", &fahr);

    // convert Fahr into Celsius
    cel = (fahr - 32) * 5 / 9;

    // display the conversion result
    printf("Fahr %f is Celsius %f\n", fahr, cel);

    return 0;
}
*/