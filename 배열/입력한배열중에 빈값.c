#include <stdio.h>

int main(){

    int n=30;
    int student[30]={0,};
    int number=0;



    for(int j=0;j<28;j++){
        scanf("%d",&number);
        student[number-1]=1; // 출석번호를 배열 인덱스 안에  다 0으로 넣고 해당인덱스 즉 출석이 불리면 그 인덱스에 +1
    }

    for(int d=0;d<30;d++){
        if(student[d]==0){
            printf("%d\n",d+1); // 원래는 1부터 시작인데 우리는 0부터시작했으므로
        }else{
            continue;
        }
    }

    return 0;
}