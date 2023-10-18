#include <stdio.h>

int main(){
    int n=0;
   

    scanf("%d",&n);

 int integer[n];
    int count=0;

    int base=0;

    for(int i=0;i<n;i++){
        scanf("%d",&integer[i]);
    }

    scanf("%d",&base);
    for(int i=0;i<n;i++){
        if(integer[i]==base){
            count++;
        }else{
            continue;
        }
        
    }

    printf("%d",count);

    return 0;


}