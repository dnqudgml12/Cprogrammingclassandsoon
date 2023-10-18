#include <stdio.h>


 long factorial(int n);
int main(){
    int a=0;
    scanf("%d",&a);



     printf("%d",factorial(a));

     return 0;
}


 long factorial(int n){

    int number =0;



    if(n/10>0){
                
     number++;           
    return number+factorial(n/10);
    }else{

        return 1;

    }

 }