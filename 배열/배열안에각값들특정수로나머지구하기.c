#include <stdio.h>

int main(){


    int n=10;
    int math[10]={0,};

    int b=0;

    for(int i=0;i<n;i++){
        scanf("%d",&math[i]);
        b=math[i]%42;
        math[i]=b;
    }
int count=0;
    int isUnique;

    /**
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){ // j를 i+1부터 시작하여 중복 비교를 피함
            if(math[i]!=math[j]){
                count++;

            }
        }
    }

    //겹치는 값을 중복해서 비교한다 이러니까
*/

 for (int i = 0; i < n; i++) {
        isUnique = 1; // i번째 원소는 기본적으로 중복되지 않음

        for (int j = 0; j < i; j++) {
            if (math[i] == math[j]) {
                isUnique = 0; // i번째 원소가 중복됨
                break; // 중복을 발견하면 루프 종료
            }
        }

        if (isUnique) {
            count++; // 중복되지 않는 값이라면 count를 증가
        }
    }
    printf("%d",count);
    return 0;
}