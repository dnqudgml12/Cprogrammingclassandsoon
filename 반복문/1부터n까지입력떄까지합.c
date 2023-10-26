#include <stdio.h>

int main(){
    int n=0;
    int sum=0;
    int ret=0;
 
    while (1)
    {   
        sum+=n;
        ret=scanf("%d",&n);
        
        if(ret==-1){
            printf("%d",sum);
            break;
            
        }
    }
    
    return 0;
}