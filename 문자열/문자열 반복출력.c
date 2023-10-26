#include <stdio.h>
#include <string.h>


int main(){
    int n=0;
    scanf("%d",&n);

    int number=0;
    char S[20];
    int len=0;


    for(int i=0;i<n;i++){ // number랑 문자열이 입력되는 횟수
        scanf("%d %s",&number,S);
        len=strlen(S);
        for(int d=0;d<len;d++){  //각 문자열의 수만큼 반복 각각 문자열 하나씩 여러번 해야 하니까
            
        for(int j=0;j<number;j++){ // 각 문자열을 number번 만큼 반복해서 출력
            printf("%c",S[d]);

        }

        }

        printf("\n");



    }

    return 0;
}

/*
문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오. 즉, 첫 번째 문자를 R번 반복하고, 두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다. S에는 QR Code "alphanumeric" 문자만 들어있다.

QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: 이다.

입력
첫째 줄에 테스트 케이스의 개수 T(1 ≤ T ≤ 1,000)가 주어진다. 각 테스트 케이스는 반복 횟수 R(1 ≤ R ≤ 8), 문자열 S가 공백으로 구분되어 주어진다. S의 길이는 적어도 1이며, 20글자를 넘지 않는다. 

출력
각 테스트 케이스에 대해 P를 출력한다.

2
3 ABC
5 /HTP


AAABBBCCC
/////HHHHHTTTTTPPPPP
*/