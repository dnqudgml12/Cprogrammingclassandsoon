#include <stdio.h>
#include <limits.h>


int main(){
    int n=9;

    //scanf("%d",&n);
    int array[n];

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int max=0;

    for(int j=0;j<n;j++){
        if(array[j]>array[max]){
            max=j;
        }
    }

  
    printf("%d\n",array[max]);
      printf("%d",max+1);

    return 0;

    
}