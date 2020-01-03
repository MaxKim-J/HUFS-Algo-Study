#include <stdio.h>
int main()
{
	char menu;
	scanf("%c", &menu);
	switch (menu)
	{
	case 'f': 
		//switch문은 정수형만 사용가능한데 문자형도 정수자료형이어서 가능
		printf("환타");
		break;
	case 'c':
		printf("콜라");
		break;
	case 'p':
		printf("포카리스웨트");
		break;
	default:
		printf("구매하지 않는 메뉴");
	}
	return 0;
}