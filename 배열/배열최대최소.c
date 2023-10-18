#include <stdio.h>
#include <limits.h>

int main(){

    int n=0;
    scanf("%d",&n);
    int array[n];

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

int max = INT_MIN;  // Initialize max with the smallest possible integer value
    int min = INT_MAX;  // Initialize min with the largest possible integer value

    for(int j=0;j<n;j++){
        if(array[j]>max){
            max=array[j];
        }
        if(array[j]<min){
            min=array[j];
        }
    }

printf("%d %d",min,max);

return 0;

}