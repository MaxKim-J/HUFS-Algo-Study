#include <stdio.h>

int main()
{
	double rate, dollar, won;
	printf("환율을 입력하시오: ");
	scanf("%lf", &rate);
	printf("원화 금액을 입력하시오: ");
	scanf("%lf", &won);
	dollar = won / rate;
	printf("원화 %f원은 %f달러 입니다. ", won, dollar);
}