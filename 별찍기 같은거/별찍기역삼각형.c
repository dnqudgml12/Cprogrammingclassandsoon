#include <stdio.h>


int main(){
    int n=0;

    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int d=0;d<n-i;d++){
        printf(" ");
        }

        for(int j=0;j<i;j++){
        printf("*");
        }


        printf("\n");
    }

    return 0;
}