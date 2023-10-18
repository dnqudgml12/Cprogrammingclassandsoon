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

/*
/*
    Read a string from the user and convert it into an uppercase string
    Example)
        Input a string: Hello
        conversion result = HELLO
*/


/*

*/
/*

#include <stdio.h>              // required for printf() and scanf()
#include <string.h>             // required for strlen()

int main()
{
    char str[128] = "";

    // read a string from the user

    int len = strlen(str);      // get the length of str

    // convert each character of str into upper character using LowerToUpper()
    // hint) use a for-statement

    // display the conversion result

    return 0;
}

char LowerToUpper(char lower)
{
    char upper = 0;

    // convert lower to uppercase character
    if(lower >= 'a' && lower <= 'z'){
 //     upper = lower - 'a' + 'A';  // fine
        upper = lower + 'A' - 'a'; // safer
    }

    // return the converted uppercase character
    return upper;
}
*/

/*
/*
    Read a string from the user and convert it into an uppercase string
    Example)
        Input a string: Hello
        conversion result = HELLO
*/
/*
#include <stdio.h>              // required for printf() and scanf()
#include <string.h>             // required for strlen()

char LowerToUpper(char lower);

int main()
{
    char str[128] = "";

    // read a string from the user
    printf("Input a string:");
    scanf("%s", str);

    int len = strlen(str);      // get the length of str

    // convert each character of str into upper character using LowerToUpper()
    // hint) use a for-statement
    int i = 0;
    for(i = 0; i < len ; i++){
        str[i] = LowerToUpper(str[i]);
    }

    // display the conversion result
    printf("Conversion result = %s\n", str);

    return 0;
}

char LowerToUpper(char lower)
{
    char upper = 0;

    // convert lower to uppercase character
    if(lower >= 'a' && lower <= 'z'){
 //     upper = lower - 'a' + 'A';  // fine
        upper = lower + 'A' - 'a'; // safer
    } else
        upper = lower;

    // return the converted uppercase character
    return upper;
}
*/