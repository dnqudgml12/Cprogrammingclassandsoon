#include <stdio.h>
#include <string.h>
#include <ctype.h>

//숫자, 소문자, 대문자, 공백을 모두 입력받고 난 뒤에 해당 값들을 모두  count하는 코드를 목적으로 한다
// 먼저 해당 값들을 string 배열에 입력받는다.
// 입력 받은 뒤 숫자, 소문자, 대문자, 공백을 각각 판단 할 수 있는 함수를 만든다.
// 함수는  숫자, 소문자, 대문자, 공백의 수를 판단하기 위해 선언한 변수를 파라미터로 갖고 pointer로 칭한다
// 입력 받은 string 배열의 값 수 만큼 for문으로 반복하며 
// 배열의 각각 자리가 숫자, 소문자, 대문자, 공백인지 판단하는 함수를 사용한다.
// 그리고 판단을 통해 나온 값을 paramter로 부른 pointer 값에 넣는다.
// 이 값들을 printf로 출력한다



void CountCharacter(char str[], int *no_upper, int *no_lower, int *no_digit, int *no_space);

int main()
{
    int no_upper = 0;
    int no_lower = 0;
    int no_digit = 0;
    int no_space = 0;

    char text[256] = "";

    // reads a text line beyond space characters.
    printf("Input a string: ");    
    fgets(text, 256, stdin);
    text[strlen(text) - 1] = 0;

    printf("Input string = \"%s\"\n", text);

    // TO DO: call CountCharacter() to get the number of uppercase, lowercase, digit, and space characters.
    
   CountCharacter(text,&no_upper,&no_lower,&no_digit,&no_space);

    printf("The input string contains\n");
    printf("\t%d uppercase characters,\n", no_upper);
    printf("\t%d lowercase characters,\n", no_lower);
    printf("\t%d digit characters,\n", no_digit);
    printf("\t%d space characters.\n", no_space);

    return 0;
}

void CountCharacter(char str[], int *no_upper, int *no_lower, int *no_digit, int *no_space)
{

   

   for(int i=0;i<strlen(str);i++){

    if(isupper(str[i])!=0){
        (*no_upper)++;
        }
    else if (islower(str[i])!=0){
        (*no_lower)++;
    }
    else if (isdigit(str[i])!=0){
        (*no_digit)++;
    }
    else if (isspace(str[i])!=0){
        (*no_space)++;
    }
   }



   return ;
    // TO DO: implement this function
    //  initialize all output variables to zero

    //  repeat for i from 0 to the length of str
    //      if str[i] is a uppercase character, increase *no_upper
    //      if str[i] is a lowercase character, increase *no_lower
    //      if str[i] is a digit character, increase *no_digit
    //      if str[i] is a space character, increase *no_space

    // Hint) *no_upper++ does not work correctly. use (*no_upper)++ to increase 8no_upper

 



}