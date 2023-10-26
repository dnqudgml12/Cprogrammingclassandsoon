#include <stdio.h>

int main(){
    FILE *sp= NULL;
    sp=fopen("text.txt","w");

    char str[50]=" ";

    scanf("%s",str);



    fprintf(sp,"%s",str);

    fprintf(sp,"\n");

    int n=0;

    scanf("%d",&n);

    fprintf(sp,"%d",n);

    fclose(sp);

    return 0;



}