#include <stdio.h>
int main()
{
	int num1, num2;
	char op;
	printf("Enter equation: ");
	scanf("%d %c %d", &num1, &op, &num2);
	switch (op)
	{
	case '+':
		printf("%d %c %d = %d", num1, op, num2, num1 + num2);
		break;
	case '-':
		printf("%d %c %d = %d", num1, op, num2, num1 - num2);
		break;
	case '*':
		printf("%d %c %d = %d", num1, op, num2, num1 * num2);
		break;
	case '/':
		if (num2 == 0)
			printf("error: divide by 0");
		else
			printf("%d %c %d = %d", num1, op, num2, num1 / num2);
		break;
	case '%':
		printf("%d %c %d = %d", num1, op, num2, num1 % num2);
		break;
	default:
		printf("error: wrong operator");

	}
	return 0;

}
