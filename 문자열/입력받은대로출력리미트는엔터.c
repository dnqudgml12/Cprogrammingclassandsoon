#include <stdio.h>

int main(){

    char c;

    while (scanf("%c",&c)!=EOF)  // !=하면 엔터해도 안끝남
    //==하면 엔터하면 끝남
    {
        printf("%c",c);
    }
    


    return 0;
}