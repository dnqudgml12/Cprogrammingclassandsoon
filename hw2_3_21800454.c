#include <stdio.h>
#include <string.h>



// Set the input numeric value and set the string array to 32 characters.

// If the input value is 0, set the value of the string array to 0.
// If the input value is not 0, divide by 2 until the input value is 0, and store the result as a char in the string array.
// A char is created by int + '0'.
// Print the result of the string array.
// Then, using the function we created earlier, print the result of the string array in reverse.

void ReverseString(char str[]);

int main(){

    int x=0; 
    char binary[32]=" "; // binary Initialized with whitespace
    scanf("%d",&x);

    int input=x;
        

if (x==0){
    binary[0]='0'; 
    binary[1]='\0'; // Must be \0 on finalization to be stored in the array until the end
}else{
    int i=0;
    while(x>0){

        binary[i]=x%2+'0';
        x/=2;
        i++;

    }

    binary[i]='\0'; //Must be \0 on finalization to be stored in the array until the end

}


printf("intermediate result = %s (2)\n", binary); 

    // horizontally flip the binary string
ReverseString(binary);
// display the result as a string
printf("%d (10) = %s (2)\n", input, binary);

return 0;
}

//We need to create a function that outputs the input value backwards.
// The parameter to this function is an array of strings
// The function sets the length of the string array and iterates over it in a for statement for half the length of the array.
// Then it saves it, swapping the values at the beginning of the array and the end of the array.



void ReverseString(char str[])
{
int len = strlen(str); //get the length of str
int i = 0;
for(i = 0; i < len / 2; i++){
//exchange str[i] and str[len - i - 1]
char temp = str[i];
str[i] = str[len - i - 1];
str[len - i - 1] = temp;
}
}
