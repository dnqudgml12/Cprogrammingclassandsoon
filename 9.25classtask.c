#include <stdio.h>

void swap(int *x,int *y);
int main(){

    int a=0;
    int b=0;


    scanf("%d %d",&a,&b);

    printf("a= %d, b=%d \n",a,b);


    swap(&a,&b);
 printf("a= %d, b=%d \n",a,b);
return 0;

}

void swap(int *x,int *y){

    int temp=*x;
    *x=*y;
    *y=temp;

// 포인터 배열을 해야 주소 값까지 다 바뀜

 printf("x= %d, y=%d \n",*x,*y);
}









/*


#include <stdio.h>

void swap(int x, int y);

int main()
{
    int a = 5, b = 15;

    printf("a = %d, b = %d\n", a, b);

    swap(a, b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;

    printf("x = %d, y = %d\n", x, y); 
    //여기서는 변하는데 
    // 위에 swap에서는 변화된 값이 저장되지 않음
    //그래서 포인터 적용
}

*/