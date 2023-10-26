#include <stdio.h>
#include <string.h>

char a[1000005];

int main(){
    int ans = 0;

    scanf("%[^\n]s",a);

    if(a[0]!=' ') ans++;  // 첫번째로 띄어쓰기 오면

    for(int i=1;i<strlen(a);i++)
        if(a[i-1]==' ' && a[i]!=' ') ans++;  // 단어 앞에 띄어쓰기 오면 단어니까 count

    printf("%d",ans);

    return 0;
}

/*
첫 줄에 영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열의 길이는 1,000,000을 넘지 않는다. 단어는 공백 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다. 또한 문자열은 공백으로 시작하거나 끝날 수 있다.

출력
첫째 줄에 단어의 개수를 출력한다.
*/