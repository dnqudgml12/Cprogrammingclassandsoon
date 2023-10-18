#include <stdio.h>

int main(){
    int number=0;

    scanf("%d",&number);

    for(int i=1;i<=9;i++){
        printf("%d * %d = %d\n",number,i,number*i);
    }

    return 0;
}