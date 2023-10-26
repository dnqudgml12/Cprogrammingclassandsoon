#include <stdio.h>
#include <stdlib.h>
#define FILE_NAME "my_file.text"
int main(){
    //파일 열고 읽는다
    //fclose 없애면 파일이 제대로 적히는 보장이 없다.


    FILE *spdata=NULL;
    spdata=fopen(FILE_NAME,"r"); // 파일 안에 내용 읽는 모드.
    if(spdata==NULL){
        printf("fail to open file %s",FILE_NAME); 
        exit(-1);
    }

    for(int i=0;i<10;i++){
        int x=0;
        fscanf(spdata,"%d",&x); //// 파일 안에 있는거 읽어오기
        //scanf에 f붙으면 파일 안에 내용 불러옴
        printf("%d ",x);

    }
    printf("\n");



     
    fclose(spdata);
    return 0;
}
/*
#include <stdio.h>

#define FILE_NAME "my_file.txt"

int main()
{
    // open file to read
    FILE *fp = fopen(FILE_NAME, "r");

    // read 10 numbers from the file and display them
    // repeat for 10 times
    for(int i = 0; i < 10; i++){
    //      read a number from the file
        int x = 0;
        fscanf(fp, "%d", &x);
    //      display the number
        printf("%d ", x);
    }
    printf("\n");

    // close the file
    fclose(fp);

    return 0;
}
*/