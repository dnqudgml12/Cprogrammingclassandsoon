#include <stdio.h>

int main(){


    // 과목명,학점,평점을 넣을 코드
    // 총 학점을 더할 코드
    
    //평점을 숫자로계산할 코드
//숫자로 계산할 총 평점을 더할 코드
// 학점 * 평점할 코드

    char name[51];
    char grade[3];//평점
    double credit;
    double Sumcredit=0.0;
    double temp; // 평점을 숫자로 계산할 코드
    double res=0.0; // 학점 * 평점 숫자 할 코드

    for(int i=0;i<20;i++){
        scanf("%s %lf %s",name,&credit,grade);
        if(grade[0]=='P') continue;
        Sumcredit+=credit;

        if(grade[0]=='F')continue;


        if(grade[0]=='A') temp=4;
        else if (grade[0]=='B') temp=3;
        else if (grade[0]=='C') temp=2;
        else temp=1;

if(grade[1]=='+') temp+=0.5;


res+=credit*temp;
        
        

    }

printf("%lf", res/Sumcredit);
//double형의 실수 lf
    return 0;
}


/*
printf("%3d",num) // 2자리 이하수 일지라도 공백으로 3자리까지 출력하라
printf("%.2f",num) // 소수점 아래 둘째자리까지 출력
printf("%5.3f",num) // 정수는 5자리, 소수점 아래는 셋째자리까지 출력하라

*/