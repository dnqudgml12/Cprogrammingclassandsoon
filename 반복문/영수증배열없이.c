#include <stdio.h>

int main(){

    int totalprice=0;
    int n=0;
    int price=0,number=0;


    scanf("%d",&totalprice);

    scanf("%d",&n);
    int sum=0;

    for(int i=0;i<n;i++){
        scanf("%d %d",&price,&number);
        sum+=price*number;

    }

    if(sum==totalprice){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}