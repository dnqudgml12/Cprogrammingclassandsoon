
#include <stdio.h>


int f(int x){
	int ans = 0;
	
	for(int i=x;i;i/=10)
		ans = ans*10 + i%10;

        //x가 1234라면

        //ans=4, 123 ans=43, 12 ans=432 , 1 ans =4321
	
	return ans;
}
//역순만들어줌
/*

for(int i = x; i; i /= 10): 이것은 for 루프로, 정수 i를 x의 값으로 초기화합니다. 루프는 i가 0이 아닌 한 계속되며, 각 반복에서 i는 10으로 나누어집니다. 이 루프는 사실상 입력 정수 x의 각 숫자를 오른쪽에서 왼쪽으로 반복 처리합니다.

ans = ans * 10 + i % 10;: 각 루프 반복에서 코드는 i의 마지막 숫자(10으로 모듈로 연산 %을 사용하여 얻음)를 가져와서 현재 ans 값을 10을 곱한 다음 마지막 숫자를 추가합니다. 이렇게 하면 원래 입력 정수의 숫자 순서가 역순으로 바뀝니다.

마지막으로 루프가 완료되면(i가 0이 될 때), 함수는 ans 변수를 반환합니다. 이제 ans 변수는 입력 정수 x를 역순으로 뒤집은 정수를 포함하고 있습니다
*/

int main(){
	int a,b;
	
	scanf("%d %d",&a,&b);
	
	a = f(a);
	b = f(b);
	
	if(a>b) printf("%d\n",a);
	else printf("%d\n",b);
	
	return 0;
}