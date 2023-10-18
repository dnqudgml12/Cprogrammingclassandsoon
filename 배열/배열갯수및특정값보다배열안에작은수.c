#include <stdio.h>

int main(){

    int n=0,x=0;
    
    scanf("%d %d",&n,&x);
    
    int array[n];

   

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(int j=0;j<n;j++){
        if(array[j]<x){
           printf("%d ",array[j]);

        }else{
            continue;
        }
    }


    return 0;


}