#include <stdio.h>

int main()
{
    int a = 10;

    printf("a = %d\n", a);
 int b = 10;
    printf("b = %d\n", b++);        // 10 (O) -> 11

    a = 10;
    printf("a = %d\n", ++a);        // 10 -> 11 (O)
    main2();
     main3();
    return 0;
}


#include <stdio.h>

int main2()
{
 // long double
    //sizeof byte값
    printf("size of short = %d\n", sizeof(short));
    printf("size of int = %d\n", sizeof(int));
    printf("size of long = %d\n", sizeof(long));
    printf("size of long long = %d\n", sizeof(long long));
    printf("size of long double = %d\n", sizeof(long double));
    printf("size of float = %d\n", sizeof(float));
    printf("size of double= %d\n", sizeof(double));
    printf("size of char= %d\n", sizeof(char));

    /*

    운영체제, 컴터에 따라서 byte 값이 바뀔 수 있다.

    
    */

    return 0;
}

#include <stdio.h>

int main3()
{
    int a = 0, b = 0;

    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);

    float c= 0;
    if(b != 0)
        c = (float)a / (float)b;

    printf("%d / %d = %f\n", a, b, c);

    return 0;
}