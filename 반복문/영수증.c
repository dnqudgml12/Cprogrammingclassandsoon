#include <stdio.h>

int main(){

    int total=0;
    int num=0;
    scanf("%d",&total);
    scanf("%d",&num);

    int price=0,count=0;
    int result[num];
    int totalprice =0;



    for (int i=0;i<num;i++){
        scanf("%d %d",&price,&count);

        result[i]=price*count;
    }

    for(int i=0;i<num;i++){

        totalprice += result[i];
    }

    if(totalprice==total){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
    
}