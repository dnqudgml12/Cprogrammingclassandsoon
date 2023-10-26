#include <stdio.h>

int Rotateleft(int x, int count);

int main(){

    int a=0,b=0;
        int instead=0;

    scanf("%d %d",&a,&b);


    instead=a;
    int count=0;

    while(instead>0){

        instead/=10;
        count++;


    }

    count=count-1;

    int anothera=0;
    int anotherb=0;
    anothera=a;
    anotherb=b;


    anothera=Rotateleft(anothera,count);
    
 
    anotherb=Rotateleft(anotherb,count);
       
        
  

    if(anothera>anotherb){
        printf("%d",anothera);
    }else{
        printf("%d",anotherb);
    }

    return 0;


}





int Rotateleft(int x, int count){
    int result=1;
    int cou =0;
    cou=count; 
    int temp = x;

    while (temp>0)
    {   temp/=10; 
        result*=10;
    }
    result/=10;
        
    

     for(int i=0;i<count;i++){
   


    int front= x/result;
    int back= x%result;

    x=back*(10)+front;
     }

    return x;
}
 
 //어떤 수든 수랑 자릿값 넣으면 완전히 반복 직전까지  count에 +1하면 다시 원래대로 돌아감
