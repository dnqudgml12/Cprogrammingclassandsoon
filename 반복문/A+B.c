
#include <stdio.h>
 
int main(void){
    int T;
    scanf("%d", &T);
 
    for(int i=0; i<T; i++){
        int A, B;
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }
}




//입력과 출력은 스트링 별개로 따로 해줘도 상관 없음
/*
#include <stdio.h>

int main(){

    int integer=0;
    int A=0;
    int B=0;

    int result[integer];

    scanf("%d",&integer);

    for(int i=0;i<integer;i++){
        scanf("%d %d",&A,&B);


        // 주어진 범위 내에서 A와 B를 확인하고 더한 결과를 results 배열에 저장
        if (A > 0 && A < 10 && B > 0 && B < 10) {
            result[i] = A + B;
        } else {
            printf("A와 B는 0보다 크고 10 미만이어야 합니다.\n");
            return 1;  // 에러 코드 반환
        }
    }

    for(int j=0;j<integer;j++){
        printf("%d\n",result[j]);
    }

    return 0;
}
*/