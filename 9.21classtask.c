#include <stdio.h>
void printWithComma (long num);
int main (void)
{
long number = 0;
printf("\nEnter a number with up to 6 digits: ");
scanf ("%ld", &number);  // long이여서 ld
printWithComma (number);
return 0;
} // main

void printWithComma (long num)
{
int thousands = 0;
int hundreds = 0;
thousands = num / 1000;
hundreds = num % 1000;
printf("\nThe number you entered is \t%03ld,%03ld", 
thousands, hundreds);
return; // void안에는 마무리 안해도 되니까
} // printWithComma



