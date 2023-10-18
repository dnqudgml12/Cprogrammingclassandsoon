#include <stdio.h>

int main(){

    char subjectname[51]=" ";
    double credit=0.0; // 각각 학점
    char grade[3]=" ";

    double Sumcredit=0.0; // 학점 총합
    double temp; // 평점을 숫자로 계산할 코드
    double res=0.0; // 학점 * 평점 숫자 할 코드


 
/*
if(grade[0]=='P'){
    continue;
    Sumcredit+=credit;
}

이 경우, grade[0]이 'P'일 때 continue가 실행됩니다. 
continue 문장은 현재 반복의 나머지 부분을 건너뛰고 다음 반복으로 직접 점프하게 합니다. 
따라서, continue 문장 아래의 Sumcredit+=credit; 코드는 절대로 실행되지 않습니다.

두 번째 코드:
*/
    for(int i=0;i<20;i++){
           scanf("%s %lf %s",subjectname,&credit,grade);

           if(grade[0]=='P')continue;
            Sumcredit+=credit;
            /*
            이 경우, grade[0]이 'P'일 때 동일하게 continue가 실행되며 현재 반복의 나머지 부분을 건너뛰고 다음 반복으로 직접 점프하게 됩니다. 
            그러나 Sumcredit+=credit; 코드는 if 문의 중괄호 { } 내에 있지 않기 때문에 continue 문장과 무관하게 항상 실행됩니다.
            
            결론
            첫 번째 코드에서는 grade[0]이 'P'인 경우 Sumcredit이 증가하지 않습니다.
            두 번째 코드에서는 grade[0]의 값에 상관없이 Sumcredit이 항상 증가합니다
            */
           
            
        if(grade[0]=='F'){
            continue;
            }

      if(grade[0]=='A') temp=4;
        else if (grade[0]=='B') temp=3;
        else if (grade[0]=='C') temp=2;
        else temp=1;

if(grade[1]=='+') temp+=0.5;


res+=credit*temp;



    }

    printf("%lf", res/Sumcredit);

return 0;
}