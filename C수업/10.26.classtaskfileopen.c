#include <stdio.h>

//메모리 선언시에 변수 이용
// stream: read and write을 위한 통로 역할,File open의 결과물
/*file operations
    open: creating a stream to connect file and program
    reading: data transfer from file to memory
    writing: data transfer from memory to file
    close: discarding the stream
    */
// reading: file에서 memory로 data전달
// writing: memory에서 file로 data 전달
int main(){

    FILE *spdata=NULL;// integer 0이아님 NULL: (void*)0
    //NULL 대문자 써야 된다.
    spdata = fopen("my_file.text","w"); // my_file이라는 파일 open해서 write("w")

    //fopen return value는 stream이다.



    for(int i=1;i<=10;i++){
        fprintf(spdata,"%d ",i);  
        // file을 print하는 fprintf
        // 파일 변수
    }
    fprintf(spdata,"\n");

    fclose(spdata);

    return 0;
}