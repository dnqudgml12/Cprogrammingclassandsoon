#include <stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int d=0;d<i;d++){
            printf(" ");
        }
        for(int j=0;j<2*n-1-2*i;j++){
            printf("*");
        }


        putchar('\n');
    }
  
    for(int i=0;i<n-1;i++){
                for(int d=0;d<n-2-i;d++){
            printf(" ");
        }
        for(int j=0;j<1+2*(i+1);j++){
            printf("*");
        }

        putchar('\n');
    }

    return 0;

}