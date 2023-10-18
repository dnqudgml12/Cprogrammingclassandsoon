#include <stdio.h>


int main(){
    int math[10]={0};

    int max_idx=0;
    int min_idx=10;

    for(int i=0;i<10;i++){

        scanf("%d",&math[i]);
        if(math[i]>math[max_idx]){

            max_idx=i;
        }else if(math[i]<math[min_idx]){
            min_idx=i;
        }
    }

    printf(" max=%d\n",max_idx);
    printf("min=%d",min_idx);

    return 0;
}