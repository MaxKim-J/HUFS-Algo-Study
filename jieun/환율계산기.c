#include <stdio.h>

int main()
{
	double rate, dollar, won;
	printf("ȯ���� �Է��Ͻÿ�: ");
	scanf("%lf", &rate);
	printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%lf", &won);
	dollar = won / rate;
	printf("��ȭ %f���� %f�޷� �Դϴ�. ", won, dollar);
}