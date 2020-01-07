#include <stdio.h>

int main()
{	
	int age, total, fee;
	total = 10000;
	printf("나이를 입력하세요: ");
	scanf("%d", &age);
	if ((age >= 7) && (age <= 12))
		fee = 450;
	else if ((age >= 13) && (age <= 18))
		fee = 720;
	else
		fee = 1200;
	printf("잔액은 %d원 입니다. ", total - fee);

}