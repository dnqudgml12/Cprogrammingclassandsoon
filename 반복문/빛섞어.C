#include <stdio.h>


int main(){
    int a,b,c,d=0;

    int r,g,bb;
    scanf("%d %d %d",&r,&g,&bb);

    for (a=0;a<r;a++){
        for(b=0;b<g;b++){
            for(c=0;c<bb;c++){
                printf("%d %d %d\n",a,b,c);
                d++;
            }
        
    
        }
}

   

    printf("%d",d);

 return 0;


}