#include <stdio.h>


// take in the values year,month,day, respectively
// Create a 6-digit array called str
// Find the tens digit and the ones digit from year.
// Store the numeric values in year1,year2 as tens and ones digits respectively
// Do the same for month and store the tens and ones digits in month1, month2.
// Do the same for day and store the tens and ones digits in day1, day2, respectively
// Put all the digits of year1,year2,month1,month2,day1,day2 into the str array one by one as char.
// To convert to char, use int+'0' to convert to char.
// Always put '\0' at the end of the array to end the array.

int main(){
        int year=0;
        int month=0;
        int day=0;

        char str[6];


        printf("year: ");
        scanf("%d",&year);
        int newyear= year %100;
        int year1=newyear/10;
        int year2=newyear%10;



        printf("month: ");
        scanf("%d",&month);
        
        int month1= month/10;
        int month2= month%10;
        
        printf("day in month: ");
        scanf("%d",&day);
        int day1= day/10;
        int day2= day%10;

        str[0]= year1+'0';
        str[1]=year2+'0'; 
        str[2]=month1+'0';// to zero on its own (no decimal places)
        str[3]=month2+'0';
        str[4]=day1+'0';// to zero on its own (no decimal places)
        str[5]=day2+'0';


      
str[6]='\0'; // str[6]=0;,strings must contain null
        printf("birthday in YYMMDD format = %s",str);


}