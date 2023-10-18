#include <stdio.h>

int main(){

    int a=0, b=0;

    while(scanf("%d %d",&a,&b)!= EOF){  // -1도 해도됨
        printf("%d\n",a+b);
    }

    return 0;

}