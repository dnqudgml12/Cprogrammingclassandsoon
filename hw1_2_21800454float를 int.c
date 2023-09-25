#include <stdio.h>

int main(){

    // unit price값 물어보는 문장 출력 후
// price값 입력 받기
    int price,count,shipping,discount,KRW;

//  USD로 price값 물어보는 문장 출력 후
// price값 입력 받기
    printf("Input unit price in USD:");
    scanf("%d",&price);

//  USD로 count값 물어보는 문장 출력 후
// count값 입력 받기
    printf("Input count in USD:");
    scanf("%d",&count);


//  USD로 shipping값 물어보는 문장 출력 후
// shipping값 입력 받기
    printf("Input shipping rate in USD:");
    scanf("%d",&shipping);


//  USD로 discount값 물어보는 문장 출력 후
// discount값 입력 받기
    printf("Input discount in USD:");
    scanf("%d",&discount);


//  USD로 환전할 KRW값 물어보는 문장 출력 후
// KRW)값 입력 받기
        printf("Input exchange rate (KRW per USD):");
    scanf("%d",&KRW);


// total선언후 계산 식 넣기
    int total=price*count+shipping-discount;

    

// 소수점 6자리까지 선언하도록 %0.6f로 선언 후에 float로 선언한 변수를 설정한다.
    printf("total price = $%0.6f * $%0.6f+ $%0.6f -$%0.6f=$%0.6f= %0.6f KRW", 
    (float)price,(float)count,(float)shipping,(float)discount,(float)total,(float)total*KRW
    );


    return 0; 
}