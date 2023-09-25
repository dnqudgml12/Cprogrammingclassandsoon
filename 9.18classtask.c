
/*

int의 메모리크기가 4바이트이고 4바이트가 30개 있으니

4 * 30 = 120이겠네요!
sizeof(arr) / sizeof(int);
*/
#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0; 
    // int a, b, c, d = 0;  // initializes only d

    float avg = 0.F, var = 0.F;

    // read four integer numbers
    printf("Input four integer numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // compute the average
    avg = (float)(a + b + c + d) / (float)4;

    // compute the variance
    var = ((a - avg) * (a - avg) + (b - avg) * (b - avg) + (c - avg) * (c - avg) + (d - avg) * (d - avg)) / 4;

    // display the results
    printf("average = %f, variance = %f\n", avg, var);

    return 0;
}
/*
#include <stdio.h>

int main(){
    int num[4];
    float average=0.F;
    float variance=0.f;

    printf("input numbers:");

     for (int i = 0; i < 4; i++) {
        scanf("%d", &num[i]);
    }


  
    int totalScores = num[0] + num[1] + num[2] + num[3];


    average = (float)totalScores / 4.0;

  
    for (int i = 0; i < 4; i++) {
        variance += ((float)num[i] - average) * ((float)num[i] - average);
    }

    printf("Average: %f\n", average);
    printf("Variance: %f\n", variance / 4.0);




    return 0;
}

*/