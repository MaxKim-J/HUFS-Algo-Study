#include <stdio.h>

int main()
{	
	int age, total, fee;
	total = 10000;
	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &age);
	if ((age >= 7) && (age <= 12))
		fee = 450;
	else if ((age >= 13) && (age <= 18))
		fee = 720;
	else
		fee = 1200;
	printf("�ܾ��� %d�� �Դϴ�. ", total - fee);

}