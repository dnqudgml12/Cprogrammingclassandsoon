#include <stdio.h>


int main(){
    int start=0, end =10;

    for (int i=0;i<9;i++){

        if(i<10/2){
            start=i,end--;
        }else{
            start--,end++;
        }


        for(int j=start;j>0;j--){
            printf(" ");
        }
        for(int j=start;j<end;j++){
            printf("*");
        }

        printf("\n");
    }
}



int starmain(){


    int start=0,end=10;

    
}