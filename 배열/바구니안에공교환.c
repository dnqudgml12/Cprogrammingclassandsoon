#include <stdio.h>

int main(){

    int n=0,m=0;

    scanf("%d %d",&n,&m);

    int basket[n];

    int a=0,b=0;

        for(int i=0;i<n;i++){
        basket[i]=i+1; 
    }
int temp= 0;
    for(int d=0;d<m;d++){
        scanf("%d %d",&a,&b);
        temp=  basket[a-1];
        basket[a-1]=basket[b-1];
        basket[b-1]=temp;
/*
basket[a-1]=basket[b-1];
이것만 있으면 값을 그냥 갖게 하는 건데 교환이니까
temp적용
*/
    }

    for(int j=0;j<n;j++){
        printf("%d ",basket[j]);
    }

}

/*

배열안에 값 바꾸는 거면 temp!!!


첫째 줄에 N (1 ≤ N ≤ 100)과 M (1 ≤ M ≤ 100)이 주어진다.

둘째 줄부터 M개의 줄에 걸쳐서 공을 교환할 방법이 주어진다. 
각 방법은 두 정수 i j로 이루어져 있으며, i번 바구니와 j번 바구니에 들어있는 공을 교환한다는 뜻이다.
 (1 ≤ i ≤ j ≤ N)

도현이는 입력으로 주어진 순서대로 공을 교환한다.


1번 바구니부터 N번 바구니에 들어있는 공의 번호를 공백으로 구분해 출력한다.
*/


