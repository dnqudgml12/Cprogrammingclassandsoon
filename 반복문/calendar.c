#include <stdio.h>


int main(){

    int a=0, b=0;
    int total_days=0;


    scanf("%d %d", &a,&b);


    for (int i=0;i<7;i++){
        printf("--- ");
    }
    printf("\n");

    printf("Sun Mon Tue Wed Thu Fri Sat \n");

        for (int i=0;i<a;i++){
        printf("    ");
    }

    for (int i=1;i<=b;i++){
        
        printf("%3d ",i);

        a++;

        if (a==7){
            putchar('\n');
            a=0;
        }
    }

printf("\n");
    for (int i=0;i<7;i++){
        printf("--- ");
    }

    return 0;
}