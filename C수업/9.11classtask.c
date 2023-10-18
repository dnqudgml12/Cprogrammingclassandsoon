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

/*
binary expressions
   5 + 2, 3 - 7, a / 10, ...
   +, -, *, /,           % (modulus operator, remainder)
   123 % 2 = 1 = (61 * 2 + 1)

   int x = 123;
   x % 10
   x % 100
   x % 100 / 10
   x / 10 % 10 = 12 % 10 = 2

   x in range [0, 100]
   x % 6 in range [0, 5]
   x % 6 + 1 in range [1, 6]

unary expressions
   -6, +3

   a++ (a = a + 1), a-- (a = a - 1)
   ++a, --a

   sizeof(a)

   #include <stdio.h>

int main()
{
    int a = 10;

    printf("a = %d\n", a);

    printf("a = %d\n", a++);        // 10 (O) -> 11

    a = 10;
    printf("a = %d\n", ++a);        // 10 -> 11 (O)

    return 0;
}

#include <stdio.h>

int main()
{
    printf("size of short = %d\n", sizeof(short));
    printf("size of int = %d\n", sizeof(int));
    printf("size of long = %d\n", sizeof(long));
    printf("size of long long = %d\n", sizeof(long long));

    return 0;
}

if statement: executes <statement1> if <condition> is true
           executes <statement2> otherwise
   if(<condition>)
      <statement1>
   else         // can be omitted
      <statement2>

while statement: repeats <statement> while <condition> is true
   while(<condition>)
      <statement>

for statement: repeats <statement> N times
   int i = 0;
   for(i = 0; i < N; i++)
      <statement>

*/