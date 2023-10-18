#include <stdio.h>
#include <string.h>


int main(){
    int i,count=0,len=0;

    char x[101];

    scanf("%s",x);
    len=strlen(x);

    for(i=0;i<len;i++){
    count++;

        if (x[i]=='='){
            if(x[i-1]=='c'|| x[i-1]=='s'){
                count--;
            }

            if(x[i-1]=='z'){
                count--;
                if(x[i-2]=='d'){
                    count--;
                }
            }
        
        

        }


        if(x[i]=='j'){
            if(x[i-1]=='n'||x[i-1]=='l'){
                count--;
            }
        }

        if(x[i]=='-'){
            if(x[i-1]=='c'||x[i-1]=='d'){
                count--;
            }
        }

    }

    printf("%d",count);

    return 0;
}