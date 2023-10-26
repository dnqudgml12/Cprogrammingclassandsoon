#include <stdio.h>

int main(){
    int n=1;
    int product=1;
    int ret=0;

    while (1)
    {   product*=n;
        ret=scanf("%d",&n);
        
        if(ret==-1){
            printf("%d",product);
            break;
        }
    }

    return 0;
    
}