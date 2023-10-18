#include <stdio.h>


int pyramidfactorial(int n);

int main(){
    int n=0;
    scanf("%d",&n);
    pyramidfactorial(n);


    return 0;


}



int pyramidfactorial(int n){

    // 더 정확하게는

    if(n>=3 && n<=9&& n%2==1){

        int number =0;


        while (n>0)        
        {

            number++;
            n-=2;

            
        }

        for(int i=0;i<number;i++){

            for(int j=0;j<number-1-i;j++){
                printf(" ");
            }
            for(int d=0;d<1+2*i;d++){
                printf("*");
            }

            putchar('\n');
        }

    }






/*
    int number=1;

    while (n>1)
    {
        number++;
        n/=2;
        
    }

    for(int i=0;i<number;i++){

        for(int j=0;j<number-i;j++){
            printf(" ");

        }

        for(int d=0;d<2*i+1;d++){
            printf("*");

        }

        putchar('\n');
    }

 */   
}