#include <stdio.h>
int main()
{
	char menu;
	scanf("%c", &menu);
	switch (menu)
	{
	case 'f': 
		//switch���� �������� ��밡���ѵ� �������� �����ڷ����̾ ����
		printf("ȯŸ");
		break;
	case 'c':
		printf("�ݶ�");
		break;
	case 'p':
		printf("��ī������Ʈ");
		break;
	default:
		printf("�������� �ʴ� �޴�");
	}
	return 0;
}