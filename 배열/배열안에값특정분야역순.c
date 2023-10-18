#include <stdio.h>
/*
각각의 바구니에는 1번부터 N번까지 번호가 순서대로 적혀져 있다.
첫째 줄에 N (1 ≤ N ≤ 100)과 M (1 ≤ M ≤ 100)이 주어진다.

둘째 줄부터 M개의 줄에는 바구니의 순서를 역순으로 만드는 방법이 주어진다. 방법은 i j로 나타내고, 왼쪽으로부터 i번째 바구니부터 j번째 바구니의 순서를 역순으로 만든다는 뜻이다. (1 ≤ i ≤ j ≤ N)

도현이는 입력으로 주어진 순서대로 바구니의 순서를 바꾼다.
*/

/* 
//이건 교환
        int temp=math[a-1]; 
        math[a-1]=math[b-1];
        math[b-1]=temp;
*/
int main(){
    int n=0,m=0;

    scanf("%d %d",&n,&m);
    int math[n];

    for(int i=0;i<n;i++){
        math[i]=i+1;
    }
    int a=0,b=0;

    for(int j=0;j<m;j++){
        scanf("%d %d",&a,&b);

        for (int aj = a - 1, ak = b - 1; aj < ak; aj++, ak--) {
            int temp = math[aj];
            math[aj] = math[ak];
            math[ak] = temp;
        }

    }

    for(int i=0;i<n;i++){
        printf("%d ",math[i]);
    }

    return 0;
}