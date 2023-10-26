
#include <stdio.h>

int main(){
    int n=0;
      scanf("%d",&n);
    int math[n];
    float average = 0.F;


    for( int i=0;i<n;i++){
        scanf("%d",&math[i]);
    }
    int max=0;

    for(int j=0;j<n;j++){
        if(math[j]>max){
            max=math[j];
        }
    }
 


 //float temp = 0.F;
   // for(int d=0;d<n;d++){
     //   temp = (float)math[d] / max * 100; // 나눗셈 결과를 부동 소수점으로 저장
       // math[d] = temp; 

        // 그냥 값이 아니라 계산되는 값이라면 이렇게 표현
    //}

 
    for(int i=0;i<n;i++){
        average +=(float)math[i] / max * 100;
    }
   

    printf("%f", average/n); // 소수점 6자리까지 출력

  
    return 0;
}
/*

#include <stdio.h>

int main()
{
    int N;
    int max = 0;
    float avg = 0;

    scanf("%d", &N);

    int score[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &score[i]);
        if (max < score[i]) {
            max = score[i];
        }
    }

    for (int i = 0; i < N; i++) {
        avg += (float)score[i] / max * 100;
    }

    printf("%f\n", avg / N);

    return 0;
}
*/