#include <stdio.h>

int main(){
    int chech[6]={1,1,2,2,2,8};
    int input=0;

    for(int i=0;i<6;i++){
        scanf("%d",&input);

        printf("%d",chech[i]-input);
    }

   

    return 0;
}