#include <stdio.h>

int main(){
    int n=0;

    scanf("%d",&n);


    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int d=0;d<2*i+1;d++){
            printf("*");
        }

        printf("\n");

    }

    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++){
            printf(" ");
        }

        for(int d=0;d<2*n-(2*(i+1)+1);d++){
            printf("*");
        }
        printf("\n");
        
    }

    return 0;
}