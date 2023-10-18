#include <stdio.h>


int main(){

    int x=0;

    do{printf("Input a string number in range [1,100]");
    scanf("%d",&x);

    if (x==-999){
        break; // loop 를 깨트리고 다음으로 넘어가라

        printf("This is the end of the loop.\n");
    }

}while( x<1 || x>100); // correct
 //} while(!(x >= 1 && x <= 100));       // Also correct

    {
           // display the input number
    printf("input number = %d\n", x);


    }
    // display a good-bye message
    printf("Bye!\n");

       return 0;

    
}