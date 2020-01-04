#include <stdio.h>
int main()
{
	int num1, num2;
	char op;
	printf("Enter equation: ");
	scanf("%d %c %d", &num1, &op, &num2);
	if (op == '+')
		printf("%d %c %d = %d", num1, op, num2, num1 + num2);
	else if (op == '-')
		printf("%d %c %d = %d", num1, op, num2, num1 - num2);
	else if (op == '*')
		printf("%d %c %d = %d", num1, op, num2, num1 * num2);
	else if (op == '/'){
		if (num2 == 0)
			printf("error: divide by 0");
		else
			printf("%d %c %d = %d", num1, op, num2, num1 / num2);
	}
	else if (op == '%')
		printf("%d %c %d = %d", num1, op, num2, num1 % num2);
	else
		printf("error: wrong operator");

	return 0;

}