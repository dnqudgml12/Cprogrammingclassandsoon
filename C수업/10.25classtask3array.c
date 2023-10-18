#include <stdio.h>
#include <limits.h>
int main(){

    int math[10]={0}; // 첫번째 자리는 0 ,나머지는 0 만약에 {100}이면 첫번째는 100 나머지는 0;

// 배열 안에입력한 값 넣어놓고 최소,최대만 출력
/*
    int max = math[0];
    int min = math[0];
*/
int max = INT_MIN;  // Initialize max with the smallest possible integer value
    int min = INT_MAX;  // Initialize min with the largest possible integer value

    for(int i=0;i<10;i++){

        scanf("%d",&math[i]);
        //printf("%d \n",math[i]);
        if(math[i]>max){
            max=math[i];
        }
        if( math[i]<min){
            min= math[i];
        }
    }

    printf("max= %d",max);
    printf("min= %d",min);
    return 0;

/*
for(int i=0;i<10;i++){

     printf("%d",math[i]);
    }
    // 배열 안에 값 하나씩 다 출력
*/

}
/*
최대 값의 인덱스 찾기



*/