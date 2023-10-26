#include <stdio.h>

int main(){
    int a=0,b=0;

    scanf("%d %d",&a,&b);
    int n=0;

    for(int i=0;i<7;i++){
        printf("--- ");
    }
    printf("\n");

    for(int i=0;i<a;i++){
        printf("    ");
        n++;
    }
    for(int j=0;j<b;j++){
        printf("%3d ",j+1);
        n++;
        if(n==7){
            n=0;
            putchar('\n');
        }

    }

    printf("\n");
   for(int i=0;i<7;i++){
        printf("--- ");
    }
    return 0;



}