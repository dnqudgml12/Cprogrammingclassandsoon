#include <stdio.h>
#include <string.h>

int main(){

    int time[26]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};


    char S[16];
    
    scanf("%s",S);

    int len=strlen(S);
    int ans=0;

    for(int i=0;i<len;i++){

        ans+=time[S[i]-'A'];


    }

    printf("%d",ans);

    return 0;


}