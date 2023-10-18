#include <stdio.h>
#include <limits.h>

int main(){

    int x=0;

    int min=INT_MAX,max= INT_MIN; // 

    int ret =0;

    while(1){

  printf("input a number: ");
        ret = scanf("%d", &x);
        printf("\tinput number = %d (ret = %d)\n", x, ret);

       if(min>x){
       min=x;
       }
       else if (x>max ){
        max=x;
       }

       if(ret==-1){  // ret == EOF 라 해도 됨ㄴ
        printf("min = %d\n",min);
        printf("max = %d \n",max);

        break;
              }
    }

    return 0;
}


/*
#include <stdio.h>
#include <limits.h>

int main()
{
    int x = 0;
    int ret = 0;
    int min = INT_MAX, max = INT_MIN;

    while(1){
        printf("input a number: ");
        ret = scanf("%d", &x);
        printf("\tinput number = %d (ret = %d)\n", x, ret);

        if(ret == EOF)
            break;

        if(x > max)
            max = x;
        if(x < min)
            min = x;
    }

    printf("min = %d, max = %d\n", min, max);
    printf("Bye!\n");

    return 0;
}
*/
/*

#include <stdio.h>

int main()
{
    int x = 0;
    int ret = 0;

    while(1){
        printf("input a number: ");
        ret = scanf("%d", &x);
        printf("\tinput number = %d (ret = %d)\n", x, ret);

        if(ret == EOF)
            break;
    }

    printf("Bye!\n");

    return 0;
}

숫자 입력하면 ret 1, EOF하면 ret =1;
*/