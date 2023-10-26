#include <stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        
        if((i)%3==0){
            printf("x ");
        }else{
            printf("%d ",i);
        }
    }

    return 0;
}