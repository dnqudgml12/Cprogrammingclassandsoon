#include <stdio.h>
#include <string.h>


int main(){

char word[101]=" ";

scanf("%s",word);

int len=0;
int palin=0;
int nopalin=0;
len= strlen(word);
for (int i=0;i<len;i++){
    if(word[i]==word[len-i-1]){
        palin++;
    }else{
        nopalin++;
    }
}

if(palin==len){
    printf("1");
}else {
    printf("0");
}


return 0;


}

/*
#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf("%s",s); //string s

    int len = strlen(s);
    int isPalindrome=1;
    
    for (int i=0;i<len;i++){
        if(s[i] !=s[len-i-1]){
            isPalindrome=0;
            break;
        }
    }

    if(isPalindrome==1){
        printf("1\n");
    }else{
        printf("0\n");
    }
    
        return 0;
}

*/