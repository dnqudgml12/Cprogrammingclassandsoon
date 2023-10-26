#include <stdio.h>


 long factorial(int n);
int main(){
    int a=0;  //한줄에 길게 숫자입력하는거면 int해도 됨 숫자배열 안해도됨
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