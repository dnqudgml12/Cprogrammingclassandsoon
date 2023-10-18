#include <stdio.h>
#include <string.h>

int main(){

    char word[1000001]=" ";

    scanf("%s",word);

    int len=0;
    len=strlen(word);

    int select=0,result=0;

     int cnt[26]={0, };

     for(int i='a';i<='z';i++){
        for(int j=0;j<len;j++){
            if(i==word[j]){
                cnt[i-'a']++; // 해당 인덱스의 값에 +1
            }
        }
     }


          for(int i='A';i<='Z';i++){
        for(int j=0;j<len;j++){
            if(i==word[j]){
                cnt[i-'A']++;
            }
        }
     }




    int max=cnt[0];
     for(int i=0;i<26;i++){
        if(cnt[i]>max){

            max=cnt[i];
            select=i;

        }

     }
     // 가장 빈도수 max인값의 인덱스 찾기



// 가장 빈도수 많은게 1 이상인지 아닌지 count
     for(int i=0;i<26;i++){
        if(max==cnt[i]){  // 위에서 max가 무엇인지 나왔으니

        result++;

        }

     }

     if (result>1){
        printf("?");
     }else{
        printf("%c",select+'A');
     }


     return 0;

}