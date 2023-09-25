#include <stdio.h>

#include <string.h>

char Lowertoupper(char lower);


int main(){

    char Word[100]="";
    scanf("%s",Word);

    int len= strlen(Word);

    for(int i=0;i<len;i++){

        
        Word[i]=Lowertoupper(Word[i]);
    }
    printf("%s",Word);


    return 0;
}


char Lowertoupper(char lower){ // charactertype변수 하나 입력 받겠다

char upper=0;

if(lower >='a'&&lower<='z'){
//upper= lower-'a'+'A';  // lower에서 'a' 빼면 숫자가 나오니까 거기서 'A'더하면 됨
upper= lower +'A'-'a'; //safer 위에 꺼는 chracter마다 음수가 될 수 있다
// 음수가 되면 이상한 결과 나올 수 있으므로 
//upper=lower-32; // ASCII CODE에서 32이차이가 나니까
// 소문자에서 16진수 2를 빼면됨
} else if(lower >='A'&&lower<='Z')
{
    upper=lower;
}
return upper;
 
}