#include <stdio.h>

int main(){
    float x=0.f;
    char t=0;
    float PI=3.141592F;

    scanf("%c %f",&t,&x);

    if(t=='c'){
        float circle=(x/2)*(x/2)*PI;
        printf("%f",circle);
       
    }else if(t=='s'){

        float square=x*x;
        printf("%f",square);
        
    }else{
        printf("invalid type");
    }

    return 0;
}