#include <stdio.h>


int main(){

    for (int i=0;i<=5;i++){
        for (int j=0; j<i;j++){
            printf("*");
        }
        printf("\n");
    }

    maintriangle();
    maintriangleopposite();
    return 0;
}


int maintriangle(){

    int num=6;

    for (int i=0;i<num;i++){
        for (int j=num-1;j>i;j--){
            printf(" ");
        }

        for (int j=0;j<2*i+1;j++){
            printf("*");
        }


 printf("\n");

    }
    return 0;
}






int maintriangleopposite(){

    int num=6;

    for (int i=0;i<num;i++){
        for (int j=0;j<i;j++){
            printf(" ");
        }
//여기가 반복해서 한줄에 나오고
        
        for (int j=num;i<j;j--){
            printf("*");
        }
        //여기가 그 다음에 나옴
        /*
******        
 *****
  ****
   ***
    **
     *
        */


        /*
                for (int j=0;j<2*num-1-i*2;j++){
            printf("*");
        }
***********
 *********
  *******
   *****
    ***
     *
        
        */

 printf("\n");

    }
    return 0;
}